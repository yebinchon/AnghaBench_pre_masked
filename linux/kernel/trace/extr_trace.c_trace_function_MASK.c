
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_call {int dummy; } ;
struct TYPE_2__ {struct ring_buffer* buffer; } ;
struct trace_array {TYPE_1__ trace_buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct ftrace_entry {unsigned long ip; unsigned long parent_ip; } ;


 int VAR_0 ;
 int FUNC_0 (struct ring_buffer*,struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_1 (struct ring_buffer*,int ,int,unsigned long,int) ;
 int FUNC_2 (struct trace_event_call*,struct ftrace_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 struct trace_event_call VAR_1 ;
 int FUNC_3 (struct ring_buffer_event*) ;
 int VAR_2 ;
 struct ftrace_entry* FUNC_4 (struct ring_buffer_event*) ;
 scalar_t__ FUNC_5 (int *) ;

void
FUNC_6(struct trace_array *VAR_3,
        unsigned long VAR_4, unsigned long VAR_5, unsigned long VAR_6,
        int VAR_7)
{
 struct trace_event_call *VAR_8 = &VAR_1;
 struct ring_buffer *VAR_9 = VAR_3->trace_buffer.buffer;
 struct ring_buffer_event *VAR_10;
 struct ftrace_entry *VAR_11;

 VAR_10 = FUNC_1(VAR_9, VAR_0, sizeof(*VAR_11),
         VAR_6, VAR_7);
 if (!VAR_10)
  return;
 VAR_11 = FUNC_4(VAR_10);
 VAR_11->ip = VAR_4;
 VAR_11->parent_ip = VAR_5;

 if (!FUNC_2(VAR_8, VAR_11, VAR_9, VAR_10)) {
  if (FUNC_5(&VAR_2))
   FUNC_3(VAR_10);
  FUNC_0(VAR_9, VAR_10);
 }
}
