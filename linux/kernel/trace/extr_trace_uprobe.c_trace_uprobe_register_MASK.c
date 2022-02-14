
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int dummy; } ;
struct trace_event_call {int dummy; } ;
typedef enum trace_reg { ____Placeholder_trace_reg } trace_reg ;
 int FUNC_0 (struct trace_event_call*,struct trace_event_file*) ;
 int FUNC_1 (struct trace_event_call*,struct trace_event_file*,int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (struct trace_event_call*,void*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct trace_event_call *VAR_3, enum trace_reg VAR_4,
        void *VAR_5)
{
 struct trace_event_file *VAR_6 = VAR_5;

 switch (VAR_4) {
 case 129:
  return FUNC_1(VAR_3, VAR_6, ((void*)0));

 case 128:
  FUNC_0(VAR_3, VAR_6);
  return 0;
 default:
  return 0;
 }
 return 0;
}
