
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tracer {int dummy; } ;
struct trace_array {struct tracer* current_trace; } ;


 int VAR_0 ;
 int FUNC_0 (struct tracer*,int,int) ;
 int FUNC_1 (struct trace_array*,int) ;
 scalar_t__ FUNC_2 (struct trace_array*,int,int) ;

__attribute__((used)) static int FUNC_3(struct trace_array *VAR_1, u32 VAR_2, int VAR_3)
{
 struct tracer *VAR_4 = VAR_1->current_trace;

 if (FUNC_2(VAR_1, VAR_2, VAR_3))
  return 0;






 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
