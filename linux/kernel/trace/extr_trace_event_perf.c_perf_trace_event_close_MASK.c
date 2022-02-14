
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_call {TYPE_1__* class; } ;
struct perf_event {struct trace_event_call* tp_event; } ;
struct TYPE_2__ {int (* reg ) (struct trace_event_call*,int ,struct perf_event*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct trace_event_call*,int ,struct perf_event*) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_1)
{
 struct trace_event_call *VAR_2 = VAR_1->tp_event;
 VAR_2->class->reg(VAR_2, VAR_0, VAR_1);
}
