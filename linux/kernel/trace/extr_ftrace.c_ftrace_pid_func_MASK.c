
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* data; } ;
struct trace_array {TYPE_2__ trace_buffer; } ;
struct pt_regs {int dummy; } ;
struct ftrace_ops {int (* saved_func ) (unsigned long,unsigned long,struct ftrace_ops*,struct pt_regs*) ;struct trace_array* private; } ;
struct TYPE_3__ {int ftrace_ignore_pid; } ;


 int FUNC_0 (unsigned long,unsigned long,struct ftrace_ops*,struct pt_regs*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0, unsigned long VAR_1,
       struct ftrace_ops *VAR_2, struct pt_regs *VAR_3)
{
 struct trace_array *VAR_4 = VAR_2->private;

 if (VAR_4 && FUNC_1(VAR_4->trace_buffer.data->ftrace_ignore_pid))
  return;

 VAR_2->saved_func(VAR_0, VAR_1, VAR_2, VAR_3);
}
