
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int rcu_cpu_kthread_status; int rcu_cpu_kthread_task; int rcu_cpu_has_work; } ;


 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct task_struct* VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct task_struct*,struct task_struct*) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct task_struct *VAR_2;
 unsigned long VAR_3;

 FUNC_3(VAR_3);
 FUNC_1(VAR_1.rcu_cpu_has_work, 1);
 VAR_2 = FUNC_0(VAR_1.rcu_cpu_kthread_task);
 if (VAR_2 != ((void*)0) && VAR_2 != VAR_0)
  FUNC_4(VAR_2, FUNC_0(VAR_1.rcu_cpu_kthread_status));
 FUNC_2(VAR_3);
}
