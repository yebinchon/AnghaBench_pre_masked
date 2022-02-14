
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {int flags; struct trace_event_call* event_call; } ;
struct TYPE_2__ {int type; } ;
struct trace_event_call {TYPE_1__ event; } ;
struct trace_event_buffer {void* entry; int event; int pc; int flags; int buffer; struct trace_event_file* trace_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,struct trace_event_file*,int ,unsigned long,int ,int ) ;
 scalar_t__ FUNC_5 (struct trace_event_file*) ;

void *FUNC_6(struct trace_event_buffer *VAR_2,
     struct trace_event_file *VAR_3,
     unsigned long VAR_4)
{
 struct trace_event_call *VAR_5 = VAR_3->event_call;

 if ((VAR_3->flags & VAR_1) &&
     FUNC_5(VAR_3))
  return ((void*)0);

 FUNC_1(VAR_2->flags);
 VAR_2->pc = FUNC_2();






 if (FUNC_0(VAR_0))
  VAR_2->pc--;
 VAR_2->trace_file = VAR_3;

 VAR_2->event =
  FUNC_4(&VAR_2->buffer, VAR_3,
      VAR_5->event.type, VAR_4,
      VAR_2->flags, VAR_2->pc);
 if (!VAR_2->event)
  return ((void*)0);

 VAR_2->entry = FUNC_3(VAR_2->event);
 return VAR_2->entry;
}
