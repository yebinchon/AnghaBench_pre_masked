
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct trace_iterator {int ent_size; TYPE_1__* trace_buffer; } ;
struct trace_entry {int dummy; } ;
struct ring_buffer_iter {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_2__ {int buffer; } ;


 struct trace_entry* FUNC_0 (struct ring_buffer_event*) ;
 int FUNC_1 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_2 (struct ring_buffer_iter*,int *) ;
 struct ring_buffer_event* FUNC_3 (int ,int,int *,unsigned long*) ;
 struct ring_buffer_iter* FUNC_4 (struct trace_iterator*,int) ;

__attribute__((used)) static struct trace_entry *
FUNC_5(struct trace_iterator *VAR_0, int VAR_1, u64 *VAR_2,
  unsigned long *VAR_3)
{
 struct ring_buffer_event *VAR_4;
 struct ring_buffer_iter *VAR_5 = FUNC_4(VAR_0, VAR_1);

 if (VAR_5)
  VAR_4 = FUNC_2(VAR_5, VAR_2);
 else
  VAR_4 = FUNC_3(VAR_0->trace_buffer->buffer, VAR_1, VAR_2,
      VAR_3);

 if (VAR_4) {
  VAR_0->ent_size = FUNC_1(VAR_4);
  return FUNC_0(VAR_4);
 }
 VAR_0->ent_size = 0;
 return ((void*)0);
}
