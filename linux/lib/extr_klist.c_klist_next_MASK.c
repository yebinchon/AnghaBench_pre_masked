
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* next; } ;
struct klist_node {TYPE_1__ n_node; int n_ref; } ;
struct klist_iter {struct klist_node* i_cur; TYPE_2__* i_klist; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {void (* put ) (struct klist_node*) ;int k_lock; TYPE_3__ k_list; } ;


 int FUNC_0 (struct klist_node*) ;
 int FUNC_1 (struct klist_node*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct klist_node* FUNC_6 (TYPE_3__*) ;

struct klist_node *FUNC_7(struct klist_iter *VAR_0)
{
 void (*VAR_1)(struct klist_node *) = VAR_0->i_klist->put;
 struct klist_node *VAR_2 = VAR_0->i_cur;
 struct klist_node *VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_0->i_klist->k_lock, VAR_4);

 if (VAR_2) {
  VAR_3 = FUNC_6(VAR_2->n_node.next);
  if (!FUNC_0(VAR_2))
   VAR_1 = ((void*)0);
 } else
  VAR_3 = FUNC_6(VAR_0->i_klist->k_list.next);

 VAR_0->i_cur = ((void*)0);
 while (VAR_3 != FUNC_6(&VAR_0->i_klist->k_list)) {
  if (FUNC_3(!FUNC_1(VAR_3))) {
   FUNC_2(&VAR_3->n_ref);
   VAR_0->i_cur = VAR_3;
   break;
  }
  VAR_3 = FUNC_6(VAR_3->n_node.next);
 }

 FUNC_5(&VAR_0->i_klist->k_lock, VAR_4);

 if (VAR_1 && VAR_2)
  VAR_1(VAR_2);
 return VAR_0->i_cur;
}
