
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entry; } ;
struct srcu_struct {TYPE_1__ srcu_work; int srcu_gp_running; struct rcu_head** srcu_cb_tail; } ;
struct rcu_head {struct rcu_head* next; int func; } ;
typedef int rcu_callback_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_7(struct srcu_struct *VAR_2, struct rcu_head *VAR_3,
        rcu_callback_t VAR_4)
{
 unsigned long VAR_5;

 VAR_3->func = VAR_4;
 VAR_3->next = ((void*)0);
 FUNC_5(VAR_5);
 *VAR_2->srcu_cb_tail = VAR_3;
 VAR_2->srcu_cb_tail = &VAR_3->next;
 FUNC_4(VAR_5);
 if (!FUNC_0(VAR_2->srcu_gp_running)) {
  if (FUNC_1(VAR_1))
   FUNC_6(&VAR_2->srcu_work);
  else if (FUNC_3(&VAR_2->srcu_work.entry))
   FUNC_2(&VAR_2->srcu_work.entry, &VAR_0);
 }
}
