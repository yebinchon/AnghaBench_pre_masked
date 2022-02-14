
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_call {int dummy; } ;
struct TYPE_2__ {struct ring_buffer* buffer; } ;
struct trace_array {TYPE_1__ trace_buffer; } ;
struct task_struct {int prio; int pid; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct ctx_switch_entry {int next_cpu; void* next_state; int next_prio; int next_pid; void* prev_state; int prev_prio; int prev_pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_event_call*,struct ctx_switch_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 struct trace_event_call VAR_1 ;
 struct ctx_switch_entry* FUNC_1 (struct ring_buffer_event*) ;
 int FUNC_2 (struct task_struct*) ;
 void* FUNC_3 (struct task_struct*) ;
 struct ring_buffer_event* FUNC_4 (struct ring_buffer*,int ,int,unsigned long,int) ;
 int FUNC_5 (struct trace_array*,struct ring_buffer*,struct ring_buffer_event*,unsigned long,int) ;

__attribute__((used)) static void
FUNC_6(struct trace_array *VAR_2,
      struct task_struct *VAR_3,
      struct task_struct *VAR_4,
      unsigned long VAR_5, int VAR_6)
{
 struct trace_event_call *VAR_7 = &VAR_1;
 struct ring_buffer_event *VAR_8;
 struct ctx_switch_entry *VAR_9;
 struct ring_buffer *VAR_10 = VAR_2->trace_buffer.buffer;

 VAR_8 = FUNC_4(VAR_10, VAR_0,
       sizeof(*VAR_9), VAR_5, VAR_6);
 if (!VAR_8)
  return;
 VAR_9 = FUNC_1(VAR_8);
 VAR_9->prev_pid = VAR_4->pid;
 VAR_9->prev_prio = VAR_4->prio;
 VAR_9->prev_state = FUNC_3(VAR_4);
 VAR_9->next_pid = VAR_3->pid;
 VAR_9->next_prio = VAR_3->prio;
 VAR_9->next_state = FUNC_3(VAR_3);
 VAR_9->next_cpu = FUNC_2(VAR_3);

 if (!FUNC_0(VAR_7, VAR_9, VAR_10, VAR_8))
  FUNC_5(VAR_2, VAR_10, VAR_8, VAR_5, VAR_6);
}
