
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu; } ;
struct trace_array {int flags; TYPE_1__ trace_buffer; int ops; } ;
typedef int ftrace_func_t ;
struct TYPE_4__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_array*,int ) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct trace_array*) ;

__attribute__((used)) static int FUNC_5(struct trace_array *VAR_6)
{
 ftrace_func_t VAR_7;






 if (!VAR_6->ops)
  return -VAR_0;


 if (VAR_6->flags & VAR_1 &&
     VAR_3.val & VAR_2)
  VAR_7 = VAR_4;
 else
  VAR_7 = VAR_5;

 FUNC_0(VAR_6, VAR_7);

 VAR_6->trace_buffer.cpu = FUNC_1();
 FUNC_2();

 FUNC_3();
 FUNC_4(VAR_6);
 return 0;
}
