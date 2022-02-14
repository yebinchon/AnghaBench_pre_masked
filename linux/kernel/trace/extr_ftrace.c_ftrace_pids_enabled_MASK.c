
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int * function_pids; } ;
struct ftrace_ops {int flags; struct trace_array* private; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ftrace_ops *VAR_1)
{
 struct trace_array *VAR_2;

 if (!(VAR_1->flags & VAR_0) || !VAR_1->private)
  return 0;

 VAR_2 = VAR_1->private;

 return VAR_2->function_pids != ((void*)0);
}
