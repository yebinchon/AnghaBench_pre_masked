
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int srcu_gp_running; int srcu_gp_waiting; int srcu_cb_head; int* srcu_cb_tail; int srcu_work; scalar_t__* srcu_lock_nesting; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct srcu_struct *VAR_0)
{
 FUNC_0(VAR_0->srcu_lock_nesting[0] || VAR_0->srcu_lock_nesting[1]);
 FUNC_1(&VAR_0->srcu_work);
 FUNC_0(VAR_0->srcu_gp_running);
 FUNC_0(VAR_0->srcu_gp_waiting);
 FUNC_0(VAR_0->srcu_cb_head);
 FUNC_0(&VAR_0->srcu_cb_head != VAR_0->srcu_cb_tail);
}
