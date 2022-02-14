
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct trace_probe_event* print_fmt; struct trace_probe_event* name; } ;
struct TYPE_3__ {struct trace_probe_event* system; } ;
struct trace_probe_event {TYPE_2__ call; TYPE_1__ class; } ;


 int FUNC_0 (struct trace_probe_event*) ;

__attribute__((used)) static void FUNC_1(struct trace_probe_event *VAR_0)
{
 FUNC_0(VAR_0->class.system);
 FUNC_0(VAR_0->call.name);
 FUNC_0(VAR_0->call.print_fmt);
 FUNC_0(VAR_0);
}
