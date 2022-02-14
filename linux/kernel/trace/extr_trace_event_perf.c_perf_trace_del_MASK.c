
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_call {TYPE_1__* class; } ;
struct perf_event {int hlist_entry; struct trace_event_call* tp_event; } ;
struct TYPE_2__ {int (* reg ) (struct trace_event_call*,int ,struct perf_event*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct trace_event_call*,int ,struct perf_event*) ;

void FUNC_2(struct perf_event *VAR_1, int VAR_2)
{
 struct trace_event_call *VAR_3 = VAR_1->tp_event;






 if (!VAR_3->class->reg(VAR_3, VAR_0, VAR_1))
  FUNC_0(&VAR_1->hlist_entry);
}
