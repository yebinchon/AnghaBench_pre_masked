
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {struct node* next_sibling; } ;


 int FUNC_0 (int ) ;

struct node *FUNC_1(struct node *VAR_0, struct node *VAR_1)
{
 FUNC_0(VAR_0->next_sibling == ((void*)0));

 VAR_0->next_sibling = VAR_1;
 return VAR_0;
}
