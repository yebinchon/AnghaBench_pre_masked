
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
struct ftrace_graph_ent {int dummy; } ;
struct ftrace_graph_ent_entry {struct ftrace_graph_ent graph_ent; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_event_call*,struct ftrace_graph_ent_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 struct trace_event_call VAR_1 ;
 struct ftrace_graph_ent_entry* FUNC_1 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_2 (struct ring_buffer*,int ,int,unsigned long,int) ;
 int FUNC_3 (struct ring_buffer*,struct ring_buffer_event*) ;

int FUNC_4(struct trace_array *VAR_2,
    struct ftrace_graph_ent *VAR_3,
    unsigned long VAR_4,
    int VAR_5)
{
 struct trace_event_call *VAR_6 = &VAR_1;
 struct ring_buffer_event *VAR_7;
 struct ring_buffer *VAR_8 = VAR_2->trace_buffer.buffer;
 struct ftrace_graph_ent_entry *VAR_9;

 VAR_7 = FUNC_2(VAR_8, VAR_0,
       sizeof(*VAR_9), VAR_4, VAR_5);
 if (!VAR_7)
  return 0;
 VAR_9 = FUNC_1(VAR_7);
 VAR_9->graph_ent = *VAR_3;
 if (!FUNC_0(VAR_6, VAR_9, VAR_8, VAR_7))
  FUNC_3(VAR_8, VAR_7);

 return 1;
}
