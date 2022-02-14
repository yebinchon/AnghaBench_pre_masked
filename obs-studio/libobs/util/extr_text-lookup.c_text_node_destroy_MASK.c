
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_node {scalar_t__ leaf; int str; struct text_node* next; struct text_node* first_subnode; } ;


 int FUNC_0 (struct text_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct text_node *VAR_0)
{
 struct text_node *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->first_subnode;
 while (VAR_1) {
  struct text_node *VAR_2 = VAR_1;

  VAR_1 = VAR_1->next;
  FUNC_3(VAR_2);
 }

 FUNC_1(&VAR_0->str);
 if (VAR_0->leaf)
  FUNC_2(VAR_0->leaf);
 FUNC_0(VAR_0);
}
