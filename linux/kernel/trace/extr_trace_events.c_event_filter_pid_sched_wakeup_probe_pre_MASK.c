
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_pid_list {int dummy; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct trace_array {TYPE_2__ trace_buffer; int filtered_pids; } ;
struct task_struct {int dummy; } ;
struct TYPE_3__ {int ignore_pid; } ;


 struct trace_pid_list* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct trace_pid_list*,struct task_struct*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, struct task_struct *VAR_1)
{
 struct trace_array *VAR_2 = VAR_0;
 struct trace_pid_list *VAR_3;


 if (!FUNC_1(VAR_2->trace_buffer.data->ignore_pid))
  return;

 VAR_3 = FUNC_0(VAR_2->filtered_pids);

 FUNC_2(VAR_2->trace_buffer.data->ignore_pid,
         FUNC_3(VAR_3, VAR_1));
}
