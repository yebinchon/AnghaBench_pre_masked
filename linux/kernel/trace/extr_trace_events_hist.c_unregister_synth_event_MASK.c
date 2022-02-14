
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {int dummy; } ;
struct synth_event {struct trace_event_call call; } ;


 int FUNC_0 (struct trace_event_call*) ;

__attribute__((used)) static int FUNC_1(struct synth_event *VAR_0)
{
 struct trace_event_call *VAR_1 = &VAR_0->call;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
