
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_pid_list {scalar_t__ pid_max; int pids; } ;
struct task_struct {scalar_t__ pid; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct trace_pid_list*,scalar_t__) ;

void FUNC_3(struct trace_pid_list *VAR_0,
      struct task_struct *VAR_1,
      struct task_struct *VAR_2)
{
 if (!VAR_0)
  return;


 if (VAR_1) {
  if (!FUNC_2(VAR_0, VAR_1->pid))
   return;
 }


 if (VAR_2->pid >= VAR_0->pid_max)
  return;


 if (VAR_1)
  FUNC_1(VAR_2->pid, VAR_0->pids);
 else
  FUNC_0(VAR_2->pid, VAR_0->pids);
}
