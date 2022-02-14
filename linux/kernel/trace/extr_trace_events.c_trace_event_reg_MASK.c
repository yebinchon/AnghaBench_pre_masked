
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {int flags; TYPE_1__* class; int tp; } ;
struct trace_event_call {int flags; TYPE_1__* class; int tp; } ;
typedef enum trace_reg { ____Placeholder_trace_reg } trace_reg ;
struct TYPE_2__ {int perf_probe; int probe; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct trace_event_file*) ;
 int FUNC_2 (int ,int ,struct trace_event_file*) ;

int FUNC_3(struct trace_event_call *VAR_1,
      enum trace_reg VAR_2, void *VAR_3)
{
 struct trace_event_file *VAR_4 = VAR_3;

 FUNC_0(!(VAR_1->flags & VAR_0));
 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_1->tp,
       VAR_1->class->probe,
       VAR_4);
 case 128:
  FUNC_2(VAR_1->tp,
         VAR_1->class->probe,
         VAR_4);
  return 0;
 }
 return 0;
}
