
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kthread_worker {int work_list; struct task_struct* task; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kthread_worker*) ;
 int FUNC_2 (struct kthread_worker*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kthread_worker *VAR_0)
{
 struct task_struct *VAR_1;

 VAR_1 = VAR_0->task;
 if (FUNC_0(!VAR_1))
  return;

 FUNC_2(VAR_0);
 FUNC_3(VAR_1);
 FUNC_0(!FUNC_4(&VAR_0->work_list));
 FUNC_1(VAR_0);
}
