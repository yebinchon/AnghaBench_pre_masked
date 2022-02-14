
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_pid_list {int dummy; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct trace_array {TYPE_2__ trace_buffer; int function_pids; } ;
struct TYPE_3__ {int ftrace_ignore_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct trace_pid_list* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct trace_pid_list*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct trace_array *VAR_3 = VAR_2;
 struct trace_pid_list *VAR_4;





 VAR_4 = FUNC_1(VAR_3->function_pids,
          FUNC_0(&VAR_1));

 FUNC_2(VAR_3->trace_buffer.data->ftrace_ignore_pid,
         FUNC_3(VAR_4, VAR_0));
}
