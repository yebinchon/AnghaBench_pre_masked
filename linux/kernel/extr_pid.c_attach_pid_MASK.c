
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * pid_links; } ;
struct pid {int * tasks; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int FUNC_0 (int *,int *) ;
 struct pid** FUNC_1 (struct task_struct*,int) ;

void FUNC_2(struct task_struct *VAR_0, enum pid_type VAR_1)
{
 struct pid *VAR_2 = *FUNC_1(VAR_0, VAR_1);
 FUNC_0(&VAR_0->pid_links[VAR_1], &VAR_2->tasks[VAR_1]);
}
