
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_q_head {int dummy; } ;
struct task_struct {int dummy; } ;
struct futex_q {int lock_ptr; scalar_t__ rt_waiter; scalar_t__ pi_state; struct task_struct* task; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct futex_q*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct wake_q_head*,struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct wake_q_head *VAR_0, struct futex_q *VAR_1)
{
 struct task_struct *VAR_2 = VAR_1->task;

 if (FUNC_0(VAR_1->pi_state || VAR_1->rt_waiter, "refusing to wake PI futex\n"))
  return;

 FUNC_2(VAR_2);
 FUNC_1(VAR_1);







 FUNC_3(&VAR_1->lock_ptr, ((void*)0));





 FUNC_4(VAR_0, VAR_2);
}
