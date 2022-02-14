
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct ftrace_ret_stack* ret_stack; } ;
struct ftrace_ret_stack {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ftrace_ret_stack*) ;

void FUNC_2(struct task_struct *VAR_0)
{
 struct ftrace_ret_stack *VAR_1 = VAR_0->ret_stack;

 VAR_0->ret_stack = ((void*)0);

 FUNC_0();

 FUNC_1(VAR_1);
}
