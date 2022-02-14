
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int* srcu_lock_nesting; int srcu_wq; int srcu_gp_waiting; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct srcu_struct *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->srcu_lock_nesting[VAR_1] - 1;

 FUNC_1(VAR_0->srcu_lock_nesting[VAR_1], VAR_2);
 if (!VAR_2 && FUNC_0(VAR_0->srcu_gp_waiting))
  FUNC_2(&VAR_0->srcu_wq);
}
