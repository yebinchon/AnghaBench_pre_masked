
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array_cpu {int disabled; } ;
struct TYPE_2__ {int data; } ;
struct trace_array {TYPE_1__ trace_buffer; int function_enabled; } ;
struct pt_regs {int dummy; } ;
struct ftrace_ops {struct trace_array* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 struct trace_array_cpu* FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct trace_array*,unsigned long,unsigned long,unsigned long,int) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(unsigned long VAR_2, unsigned long VAR_3,
      struct ftrace_ops *VAR_4, struct pt_regs *VAR_5)
{
 struct trace_array *VAR_6 = VAR_4->private;
 struct trace_array_cpu *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 if (FUNC_10(!VAR_6->function_enabled))
  return;

 VAR_11 = FUNC_3();
 FUNC_4();

 VAR_9 = FUNC_9(VAR_1, VAR_0);
 if (VAR_9 < 0)
  goto out;

 VAR_10 = FUNC_6();
 VAR_7 = FUNC_2(VAR_6->trace_buffer.data, VAR_10);
 if (!FUNC_0(&VAR_7->disabled)) {
  FUNC_1(VAR_8);
  FUNC_8(VAR_6, VAR_2, VAR_3, VAR_8, VAR_11);
 }
 FUNC_7(VAR_9);

 out:
 FUNC_5();
}
