
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int buffer; } ;
struct trace_iterator {TYPE_3__ seq; int ent; } ;
struct trace_event {TYPE_2__* funcs; } ;
struct trace_event_call {struct trace_event event; } ;
struct trace_event_buffer {int entry; TYPE_1__* trace_file; } ;
struct TYPE_6__ {int (* trace ) (struct trace_iterator*,int ,struct trace_event*) ;} ;
struct TYPE_5__ {struct trace_event_call* event_call; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct trace_iterator*,int ,struct trace_event*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int VAR_0 ;
 struct trace_iterator* VAR_1 ;

__attribute__((used)) static void FUNC_7(struct trace_event_buffer *VAR_2)
{
 struct trace_event_call *VAR_3;
 struct trace_event *VAR_4;
 unsigned long VAR_5;
 struct trace_iterator *VAR_6 = VAR_1;


 if (FUNC_0(!VAR_6))
  return;

 VAR_3 = VAR_2->trace_file->event_call;
 if (!VAR_3 || !VAR_3->event.funcs ||
     !VAR_3->event.funcs->trace)
  return;

 VAR_4 = &VAR_2->trace_file->event_call->event;

 FUNC_2(&VAR_0, VAR_5);
 FUNC_5(&VAR_6->seq);
 VAR_6->ent = VAR_2->entry;
 VAR_3->event.funcs->trace(VAR_6, 0, VAR_4);
 FUNC_6(&VAR_6->seq, 0);
 FUNC_1("%s", VAR_6->seq.buffer);

 FUNC_3(&VAR_0, VAR_5);
}
