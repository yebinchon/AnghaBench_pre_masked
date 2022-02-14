
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int curr_ret_stack; int curr_ret_depth; int * ret_stack; } ;
struct ftrace_ret_stack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct task_struct*,struct ftrace_ret_stack*) ;
 struct ftrace_ret_stack* FUNC_1 (int ,int,int ) ;

void FUNC_2(struct task_struct *VAR_3)
{

 VAR_3->ret_stack = ((void*)0);
 VAR_3->curr_ret_stack = -1;
 VAR_3->curr_ret_depth = -1;

 if (VAR_2) {
  struct ftrace_ret_stack *VAR_4;

  VAR_4 = FUNC_1(VAR_0,
       sizeof(struct ftrace_ret_stack),
       VAR_1);
  if (!VAR_4)
   return;
  FUNC_0(VAR_3, VAR_4);
 }
}
