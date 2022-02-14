
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * pid_links; int thread_pid; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct task_struct *VAR_1, struct task_struct *VAR_2,
      enum pid_type VAR_3)
{
 if (VAR_3 == VAR_0)
  VAR_2->thread_pid = VAR_1->thread_pid;
 FUNC_0(&VAR_1->pid_links[VAR_3], &VAR_2->pid_links[VAR_3]);
}
