
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_probe {TYPE_1__* event; } ;
struct trace_event_call {int dummy; } ;
struct TYPE_2__ {struct trace_event_call call; } ;



__attribute__((used)) static inline struct trace_event_call *
 FUNC_0(struct trace_probe *VAR_0)
{
 return &VAR_0->event->call;
}
