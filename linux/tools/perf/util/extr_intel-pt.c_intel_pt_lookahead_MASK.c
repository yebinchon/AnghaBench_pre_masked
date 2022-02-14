
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_pt_queue {size_t queue_nr; TYPE_2__* pt; struct auxtrace_buffer* old_buffer; struct auxtrace_buffer* buffer; } ;
struct intel_pt_buffer {scalar_t__ len; } ;
struct auxtrace_queue {int dummy; } ;
struct auxtrace_buffer {int dummy; } ;
typedef int (* intel_pt_lookahead_cb_t ) (struct intel_pt_buffer*,void*) ;
struct TYPE_3__ {struct auxtrace_queue* queue_array; } ;
struct TYPE_4__ {TYPE_1__ queues; } ;


 struct auxtrace_buffer* FUNC_0 (struct auxtrace_queue*,struct auxtrace_buffer*) ;
 int FUNC_1 (struct intel_pt_queue*,struct auxtrace_buffer*,struct auxtrace_buffer*,struct intel_pt_buffer*) ;
 int FUNC_2 (struct intel_pt_queue*,struct auxtrace_buffer*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, intel_pt_lookahead_cb_t VAR_1,
         void *VAR_2)
{
 struct intel_pt_queue *VAR_3 = VAR_0;
 struct auxtrace_buffer *VAR_4 = VAR_3->buffer;
 struct auxtrace_buffer *VAR_5 = VAR_3->old_buffer;
 struct auxtrace_queue *VAR_6;
 int VAR_7 = 0;

 VAR_6 = &VAR_3->pt->queues.queue_array[VAR_3->queue_nr];

 while (1) {
  struct intel_pt_buffer VAR_8 = { .len = 0 };

  VAR_4 = FUNC_0(VAR_6, VAR_4);
  if (!VAR_4)
   break;

  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8);
  if (VAR_7)
   break;

  if (VAR_8.len) {
   FUNC_2(VAR_3, VAR_5);
   VAR_5 = VAR_4;
  } else {
   FUNC_2(VAR_3, VAR_4);
   continue;
  }

  VAR_7 = VAR_1(&VAR_8, VAR_2);
  if (VAR_7)
   break;
 }

 if (VAR_4 != VAR_5)
  FUNC_2(VAR_3, VAR_4);
 FUNC_2(VAR_3, VAR_5);

 return VAR_7;
}
