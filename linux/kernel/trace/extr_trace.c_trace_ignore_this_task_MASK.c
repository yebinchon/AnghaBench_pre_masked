
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_pid_list {int dummy; } ;
struct task_struct {int pid; } ;


 int FUNC_0 (struct trace_pid_list*,int ) ;

bool
FUNC_1(struct trace_pid_list *VAR_0, struct task_struct *VAR_1)
{




 if (!VAR_0)
  return 0;

 return !FUNC_0(VAR_0, VAR_1->pid);
}
