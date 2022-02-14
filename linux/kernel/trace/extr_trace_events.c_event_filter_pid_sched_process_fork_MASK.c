
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_pid_list {int dummy; } ;
struct trace_array {int filtered_pids; } ;
struct task_struct {int dummy; } ;


 struct trace_pid_list* FUNC_0 (int ) ;
 int FUNC_1 (struct trace_pid_list*,struct task_struct*,struct task_struct*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0,
        struct task_struct *VAR_1,
        struct task_struct *VAR_2)
{
 struct trace_pid_list *VAR_3;
 struct trace_array *VAR_4 = VAR_0;

 VAR_3 = FUNC_0(VAR_4->filtered_pids);
 FUNC_1(VAR_3, VAR_1, VAR_2);
}
