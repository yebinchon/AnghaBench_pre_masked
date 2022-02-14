
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct ftrace_ret_stack* ret_stack; scalar_t__ ftrace_timestamp; int trace_overrun; int tracing_graph_pause; } ;
struct ftrace_ret_stack {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct task_struct *VAR_0, struct ftrace_ret_stack *VAR_1)
{
 FUNC_0(&VAR_0->tracing_graph_pause, 0);
 FUNC_0(&VAR_0->trace_overrun, 0);
 VAR_0->ftrace_timestamp = 0;

 FUNC_1();
 VAR_0->ret_stack = VAR_1;
}
