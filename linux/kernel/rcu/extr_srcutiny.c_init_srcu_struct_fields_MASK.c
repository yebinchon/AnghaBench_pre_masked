
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entry; } ;
struct srcu_struct {int srcu_gp_running; int srcu_gp_waiting; TYPE_1__ srcu_work; scalar_t__ srcu_idx; int * srcu_cb_head; int ** srcu_cb_tail; int srcu_wq; scalar_t__* srcu_lock_nesting; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct srcu_struct *VAR_1)
{
 VAR_1->srcu_lock_nesting[0] = 0;
 VAR_1->srcu_lock_nesting[1] = 0;
 FUNC_2(&VAR_1->srcu_wq);
 VAR_1->srcu_cb_head = ((void*)0);
 VAR_1->srcu_cb_tail = &VAR_1->srcu_cb_head;
 VAR_1->srcu_gp_running = 0;
 VAR_1->srcu_gp_waiting = 0;
 VAR_1->srcu_idx = 0;
 FUNC_1(&VAR_1->srcu_work, VAR_0);
 FUNC_0(&VAR_1->srcu_work.entry);
 return 0;
}
