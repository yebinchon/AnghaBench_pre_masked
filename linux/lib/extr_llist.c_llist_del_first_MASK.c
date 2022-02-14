
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_node {int next; } ;
struct llist_head {int first; } ;


 struct llist_node* FUNC_0 (int ) ;
 struct llist_node* FUNC_1 (int *,struct llist_node*,struct llist_node*) ;
 struct llist_node* FUNC_2 (int *) ;

struct llist_node *FUNC_3(struct llist_head *VAR_0)
{
 struct llist_node *VAR_1, *VAR_2, *VAR_3;

 VAR_1 = FUNC_2(&VAR_0->first);
 for (;;) {
  if (VAR_1 == ((void*)0))
   return ((void*)0);
  VAR_2 = VAR_1;
  VAR_3 = FUNC_0(VAR_1->next);
  VAR_1 = FUNC_1(&VAR_0->first, VAR_2, VAR_3);
  if (VAR_1 == VAR_2)
   break;
 }

 return VAR_1;
}
