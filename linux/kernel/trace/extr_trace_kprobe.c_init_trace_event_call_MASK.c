
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_kprobe {int tp; } ;
struct TYPE_3__ {int * funcs; } ;
struct trace_event_call {TYPE_2__* class; int flags; TYPE_1__ event; } ;
struct TYPE_4__ {int reg; int define_fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct trace_kprobe*) ;
 struct trace_event_call* FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct trace_kprobe *VAR_6)
{
 struct trace_event_call *VAR_7 = FUNC_1(&VAR_6->tp);

 if (FUNC_0(VAR_6)) {
  VAR_7->event.funcs = &VAR_5;
  VAR_7->class->define_fields = VAR_4;
 } else {
  VAR_7->event.funcs = &VAR_2;
  VAR_7->class->define_fields = VAR_1;
 }

 VAR_7->flags = VAR_0;
 VAR_7->class->reg = VAR_3;
}
