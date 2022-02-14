
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int dummy; } ;
struct trace_event_call {int dummy; } ;
typedef enum trace_reg { ____Placeholder_trace_reg } trace_reg ;
 int FUNC_0 (struct trace_event_call*,struct trace_event_file*) ;
 int FUNC_1 (struct trace_event_call*,struct trace_event_file*) ;

__attribute__((used)) static int FUNC_2(struct trace_event_call *VAR_0,
      enum trace_reg VAR_1, void *VAR_2)
{
 struct trace_event_file *VAR_3 = VAR_2;

 switch (VAR_1) {
 case 129:
  return FUNC_1(VAR_0, VAR_3);
 case 128:
  return FUNC_0(VAR_0, VAR_3);
 }
 return 0;
}
