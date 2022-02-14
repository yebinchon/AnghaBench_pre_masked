
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pi_lock; int cpus_mask; } ;
struct cpumask {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpumask*,int *,int ) ;
 struct task_struct* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*) ;

long FUNC_7(pid_t VAR_2, struct cpumask *VAR_3)
{
 struct task_struct *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_4();

 VAR_6 = -VAR_0;
 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  goto out_unlock;

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  goto out_unlock;

 FUNC_2(&VAR_4->pi_lock, VAR_5);
 FUNC_0(VAR_3, &VAR_4->cpus_mask, VAR_1);
 FUNC_3(&VAR_4->pi_lock, VAR_5);

out_unlock:
 FUNC_5();

 return VAR_6;
}
