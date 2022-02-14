
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct trace_iterator {TYPE_1__* trace_buffer; } ;
struct ring_buffer_iter {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_4__ {unsigned long skipped_entries; } ;
struct TYPE_3__ {scalar_t__ time_start; int data; } ;


 TYPE_2__* FUNC_0 (int ,int) ;
 struct ring_buffer_event* FUNC_1 (struct ring_buffer_iter*,scalar_t__*) ;
 int FUNC_2 (struct ring_buffer_iter*) ;
 int FUNC_3 (struct ring_buffer_iter*,int *) ;
 struct ring_buffer_iter* FUNC_4 (struct trace_iterator*,int) ;

void FUNC_5(struct trace_iterator *VAR_0, int VAR_1)
{
 struct ring_buffer_event *VAR_2;
 struct ring_buffer_iter *VAR_3;
 unsigned long VAR_4 = 0;
 u64 VAR_5;

 FUNC_0(VAR_0->trace_buffer->data, VAR_1)->skipped_entries = 0;

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 FUNC_2(VAR_3);






 while ((VAR_2 = FUNC_1(VAR_3, &VAR_5))) {
  if (VAR_5 >= VAR_0->trace_buffer->time_start)
   break;
  VAR_4++;
  FUNC_3(VAR_3, ((void*)0));
 }

 FUNC_0(VAR_0->trace_buffer->data, VAR_1)->skipped_entries = VAR_4;
}
