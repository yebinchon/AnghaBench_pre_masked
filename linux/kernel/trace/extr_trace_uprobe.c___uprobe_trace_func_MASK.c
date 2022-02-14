
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uprobe_trace_entry_head {unsigned long* vaddr; } ;
struct uprobe_cpu_buffer {int buf; } ;
struct TYPE_4__ {int size; } ;
struct trace_uprobe {TYPE_2__ tp; } ;
struct trace_event_file {struct trace_event_call* event_call; } ;
struct TYPE_3__ {int type; } ;
struct trace_event_call {TYPE_1__ event; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct pt_regs {int dummy; } ;


 void* FUNC_0 (struct uprobe_trace_entry_head*,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct trace_event_file*,struct ring_buffer*,struct ring_buffer_event*,struct uprobe_trace_entry_head*,int ,int ) ;
 void* FUNC_5 (struct pt_regs*) ;
 scalar_t__ FUNC_6 (struct trace_uprobe*) ;
 int FUNC_7 (void*,int ,int) ;
 struct uprobe_trace_entry_head* FUNC_8 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_9 (struct ring_buffer**,struct trace_event_file*,int ,int,int ,int ) ;
 struct trace_event_call* FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (struct trace_event_file*) ;

__attribute__((used)) static void FUNC_12(struct trace_uprobe *VAR_1,
    unsigned long VAR_2, struct pt_regs *VAR_3,
    struct uprobe_cpu_buffer *VAR_4, int VAR_5,
    struct trace_event_file *VAR_6)
{
 struct uprobe_trace_entry_head *VAR_7;
 struct ring_buffer_event *VAR_8;
 struct ring_buffer *VAR_9;
 void *VAR_10;
 int VAR_11, VAR_12;
 struct trace_event_call *VAR_13 = FUNC_10(&VAR_1->tp);

 FUNC_2(VAR_13 != VAR_6->event_call);

 if (FUNC_3(VAR_1->tp.size + VAR_5 > VAR_0))
  return;

 if (FUNC_11(VAR_6))
  return;

 VAR_12 = FUNC_1(FUNC_6(VAR_1));
 VAR_11 = VAR_12 + VAR_1->tp.size + VAR_5;
 VAR_8 = FUNC_9(&VAR_9, VAR_6,
      VAR_13->event.type, VAR_11, 0, 0);
 if (!VAR_8)
  return;

 VAR_7 = FUNC_8(VAR_8);
 if (FUNC_6(VAR_1)) {
  VAR_7->vaddr[0] = VAR_2;
  VAR_7->vaddr[1] = FUNC_5(VAR_3);
  VAR_10 = FUNC_0(VAR_7, 1);
 } else {
  VAR_7->vaddr[0] = FUNC_5(VAR_3);
  VAR_10 = FUNC_0(VAR_7, 0);
 }

 FUNC_7(VAR_10, VAR_4->buf, VAR_1->tp.size + VAR_5);

 FUNC_4(VAR_6, VAR_9, VAR_8, VAR_7, 0, 0);
}
