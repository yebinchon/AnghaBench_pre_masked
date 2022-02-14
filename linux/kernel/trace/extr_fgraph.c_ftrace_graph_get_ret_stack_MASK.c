
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int curr_ret_stack; struct ftrace_ret_stack* ret_stack; } ;
struct ftrace_ret_stack {int dummy; } ;



struct ftrace_ret_stack *
FUNC_0(struct task_struct *VAR_0, int VAR_1)
{
 VAR_1 = VAR_0->curr_ret_stack - VAR_1;

 if (VAR_1 >= 0 && VAR_1 <= VAR_0->curr_ret_stack)
  return &VAR_0->ret_stack[VAR_1];

 return ((void*)0);
}
