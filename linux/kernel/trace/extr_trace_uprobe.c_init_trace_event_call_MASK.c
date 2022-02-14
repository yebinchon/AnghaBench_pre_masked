
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_uprobe {int tp; } ;
struct TYPE_3__ {int * funcs; } ;
struct trace_event_call {int flags; TYPE_2__* class; TYPE_1__ event; } ;
struct TYPE_4__ {int reg; int define_fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct trace_event_call* FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_1(struct trace_uprobe *VAR_5)
{
 struct trace_event_call *VAR_6 = FUNC_0(&VAR_5->tp);

 VAR_6->event.funcs = &VAR_4;
 VAR_6->class->define_fields = VAR_3;

 VAR_6->flags = VAR_1 | VAR_0;
 VAR_6->class->reg = VAR_2;
}
