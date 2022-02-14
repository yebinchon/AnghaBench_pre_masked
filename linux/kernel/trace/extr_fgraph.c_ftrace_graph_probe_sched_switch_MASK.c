
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned long long ftrace_timestamp; int curr_ret_stack; TYPE_1__* ret_stack; } ;
struct TYPE_2__ {unsigned long long calltime; } ;


 scalar_t__ VAR_0 ;
 unsigned long long FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, bool VAR_2,
   struct task_struct *VAR_3, struct task_struct *VAR_4)
{
 unsigned long long VAR_5;
 int VAR_6;





 if (VAR_0)
  return;

 VAR_5 = FUNC_0();

 VAR_3->ftrace_timestamp = VAR_5;


 if (!VAR_4->ftrace_timestamp)
  return;





 VAR_5 -= VAR_4->ftrace_timestamp;

 for (VAR_6 = VAR_4->curr_ret_stack; VAR_6 >= 0; VAR_6--)
  VAR_4->ret_stack[VAR_6].calltime += VAR_5;
}
