
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {struct node* next_sibling; int name; struct node* children; } ;


 int FUNC_0 (struct node*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

void FUNC_2(struct node *VAR_0, char *VAR_1)
{
 struct node *VAR_2 = VAR_0->children;

 while (VAR_2) {
  if (FUNC_1(VAR_2->name, VAR_1)) {
   FUNC_0(VAR_2);
   return;
  }
  VAR_2 = VAR_2->next_sibling;
 }
}
