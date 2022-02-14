
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * pi_blocked_on; int * pi_top_task; int pi_waiters; int pi_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_1)
{
 FUNC_0(&VAR_1->pi_lock);





}
