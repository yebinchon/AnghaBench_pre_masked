
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_node {struct llist_node* next; } ;



struct llist_node *FUNC_0(struct llist_node *VAR_0)
{
 struct llist_node *VAR_1 = ((void*)0);

 while (VAR_0) {
  struct llist_node *VAR_2 = VAR_0;
  VAR_0 = VAR_0->next;
  VAR_2->next = VAR_1;
  VAR_1 = VAR_2;
 }

 return VAR_1;
}
