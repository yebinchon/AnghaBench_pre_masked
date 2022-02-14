
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {int n_ref; } ;
struct klist_iter {struct klist_node* i_cur; struct klist* i_klist; } ;
struct klist {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;

void FUNC_1(struct klist *VAR_0, struct klist_iter *VAR_1,
     struct klist_node *VAR_2)
{
 VAR_1->i_klist = VAR_0;
 VAR_1->i_cur = ((void*)0);
 if (VAR_2 && FUNC_0(&VAR_2->n_ref))
  VAR_1->i_cur = VAR_2;
}
