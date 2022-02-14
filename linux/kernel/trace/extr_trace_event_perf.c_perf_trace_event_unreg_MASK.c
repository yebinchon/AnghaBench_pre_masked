
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_call {scalar_t__ perf_refcount; int mod; int * perf_events; TYPE_1__* class; } ;
struct perf_event {struct trace_event_call* tp_event; } ;
struct TYPE_2__ {int (* reg ) (struct trace_event_call*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int ** VAR_2 ;
 int FUNC_2 (struct trace_event_call*,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_4)
{
 struct trace_event_call *VAR_5 = VAR_4->tp_event;
 int VAR_6;

 if (--VAR_5->perf_refcount > 0)
  goto out;

 VAR_5->class->reg(VAR_5, VAR_1, ((void*)0));





 FUNC_3();

 FUNC_0(VAR_5->perf_events);
 VAR_5->perf_events = ((void*)0);

 if (!--VAR_3) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   FUNC_0(VAR_2[VAR_6]);
   VAR_2[VAR_6] = ((void*)0);
  }
 }
out:
 FUNC_1(VAR_5->mod);
}
