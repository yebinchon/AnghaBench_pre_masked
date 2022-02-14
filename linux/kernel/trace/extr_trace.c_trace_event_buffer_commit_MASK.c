
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_buffer {int pc; int flags; int entry; int event; int buffer; int trace_file; } ;
struct TYPE_2__ {int key; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct trace_event_buffer*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_3(struct trace_event_buffer *VAR_1)
{
 if (FUNC_2(&VAR_0.key))
  FUNC_1(VAR_1);

 FUNC_0(VAR_1->trace_file, VAR_1->buffer,
        VAR_1->event, VAR_1->entry,
        VAR_1->flags, VAR_1->pc);
}
