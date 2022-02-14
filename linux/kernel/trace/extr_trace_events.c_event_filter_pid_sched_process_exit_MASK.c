
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_pid_list {int dummy; } ;
struct trace_array {int filtered_pids; } ;
struct task_struct {int dummy; } ;


 struct trace_pid_list* FUNC_0 (int ) ;
 int FUNC_1 (struct trace_pid_list*,int *,struct task_struct*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, struct task_struct *VAR_1)
{
 struct trace_pid_list *VAR_2;
 struct trace_array *VAR_3 = VAR_0;

 VAR_2 = FUNC_0(VAR_3->filtered_pids);
 FUNC_1(VAR_2, ((void*)0), VAR_1);
}
