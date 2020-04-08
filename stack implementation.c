#include<stdio.h>

struct stack 
{
	int data[50];
	int top;
}var;


void main()
{
	
	int choice;
	var.top=-1;
	int pushing;
	int ch;
	printf("\nWELCOME TO THE STACK IMPLEMENTATION PROGRAM");
	printf("\nEnter any key : ");
	while(1)
	{	
		scanf("%d", &ch);
		system("clear");
		printf("Here you have a choice : ");
		printf("\n1.Push an integer value in the stack.");
		printf("\n2.Pop the element from the stack.(remove)");
		printf("\n3.Peek the element from the stack.(take out for use)");
		printf("\n4.Traverse the stack elements.");
		printf("\n5.Exit the program.");
		printf("\nPlease enter your choice : ");
		scanf("%d", &choice);
		system("clear");
		switch(choice)
		{
		case 1:
			printf("Please enter the integer you want to push in the stack : ");
			scanf("%d", &pushing);
			push(pushing);
			getchar();
			printf("\n\nEnter any character : ");
			break;
		case 2:
			pop();
			getchar();
			printf("\nEnter any character : ");
			break;
		case 3:
			peek();
			getchar();	
			printf("\n\nEnter any character : ");
			break;
		case 4:
			traverse();		
			getchar();
			printf("\n\nEnter any character : ");
			break;	
		case 5:
			exit(-1);
		default:
			printf("fatal : Error!!\nINVALID INPUT!!");
			getchar();
			printf("\n\nEnter any character : ");
			break;	
		}
	}	
}

void push(int pushing)
{
	if(stackisfull())
	{
		printf("fatal : (Stack is full, element is not pushed!!!) ");		
	}
	else
	{	
		var.top++;
		var.data[var.top]=pushing;
		printf("Element you entered is pushed successfully.");
	}
}

void pop()
{
	if(stack_empty())
	{
		printf("Stack is empty!\nNo elements to be popped!!!");
	}
	else
	{
		var.top--;
		printf("Element is been popped out of the stack.");
	}


}
int peek()
{
	if(stack_empty())
	{
		printf("Stack is empty!\n No elements to peek!!!");
		return 0;
	}
	else
	{
		int peeked;
		peeked=var.data[var.top];
		var.top--;
		printf("Element is been peeked succesfully, you have %d", peeked);
		return peek;
	}
}
void traverse()
{
	if(stack_empty())
	{
		printf("Stack is empty!!\n");
	}
	else
	{
		printf("The elements of the stack are : ");
		for(int i=var.top;i>=0;i--)
		{
			
			printf("\n[#Memory(%d)] --->> '%d'", i,var.data[i]);
		}
	}
}
int stackisfull()
{
	if(var.top==49)
	return 1;
	else
	return 0;
}
int stack_empty()
{
	if(var.top==-1)
	return 1;
	else
	return 0;	
}

