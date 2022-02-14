
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_pid_list {int dummy; } ;
struct trace_event_file {struct trace_array* tr; } ;
struct trace_array_cpu {int ignore_pid; } ;
struct TYPE_2__ {int data; } ;
struct trace_array {TYPE_1__ trace_buffer; int filtered_pids; } ;


 struct trace_pid_list* FUNC_0 (int ) ;
 struct trace_array_cpu* FUNC_1 (int ) ;

bool FUNC_2(struct trace_event_file *VAR_0)
{
 struct trace_array *VAR_1 = VAR_0->tr;
 struct trace_array_cpu *VAR_2;
 struct trace_pid_list *VAR_3;

 VAR_3 = FUNC_0(VAR_1->filtered_pids);
 if (!VAR_3)
  return 0;

 VAR_2 = FUNC_1(VAR_1->trace_buffer.data);

 return VAR_2->ignore_pid;
}
