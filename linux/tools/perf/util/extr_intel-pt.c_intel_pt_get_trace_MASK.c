
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_pt_queue {int stop; size_t queue_nr; struct auxtrace_buffer* old_buffer; scalar_t__ step_through_buffers; struct auxtrace_buffer* buffer; TYPE_2__* pt; } ;
struct intel_pt_buffer {scalar_t__ len; } ;
struct auxtrace_queue {int dummy; } ;
struct auxtrace_buffer {int dummy; } ;
struct TYPE_3__ {struct auxtrace_queue* queue_array; } ;
struct TYPE_4__ {TYPE_1__ queues; } ;


 int FUNC_0 (struct auxtrace_buffer*) ;
 struct auxtrace_buffer* FUNC_1 (struct auxtrace_queue*,struct auxtrace_buffer*) ;
 int FUNC_2 (struct intel_pt_queue*,struct auxtrace_buffer*,struct auxtrace_buffer*,struct intel_pt_buffer*) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_buffer *VAR_0, void *VAR_1)
{
 struct intel_pt_queue *VAR_2 = VAR_1;
 struct auxtrace_buffer *VAR_3 = VAR_2->buffer;
 struct auxtrace_buffer *VAR_4 = VAR_2->old_buffer;
 struct auxtrace_queue *VAR_5;
 int VAR_6;

 if (VAR_2->stop) {
  VAR_0->len = 0;
  return 0;
 }

 VAR_5 = &VAR_2->pt->queues.queue_array[VAR_2->queue_nr];

 VAR_3 = FUNC_1(VAR_5, VAR_3);
 if (!VAR_3) {
  if (VAR_4)
   FUNC_0(VAR_4);
  VAR_0->len = 0;
  return 0;
 }

 VAR_2->buffer = VAR_3;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0);
 if (VAR_6)
  return VAR_6;

 if (VAR_2->step_through_buffers)
  VAR_2->stop = 1;

 if (VAR_0->len) {
  if (VAR_4)
   FUNC_0(VAR_4);
  VAR_2->old_buffer = VAR_3;
 } else {
  FUNC_0(VAR_3);
  return FUNC_3(VAR_0, VAR_1);
 }

 return 0;
}
