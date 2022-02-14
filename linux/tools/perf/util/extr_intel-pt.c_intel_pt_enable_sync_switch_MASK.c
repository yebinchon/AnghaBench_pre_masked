
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pt_queue {int sync_switch; } ;
struct TYPE_2__ {unsigned int nr_queues; struct auxtrace_queue* queue_array; } ;
struct intel_pt {int sync_switch; TYPE_1__ queues; } ;
struct auxtrace_queue {struct intel_pt_queue* priv; } ;



__attribute__((used)) static void FUNC_0(struct intel_pt *VAR_0)
{
 unsigned int VAR_1;

 VAR_0->sync_switch = 1;

 for (VAR_1 = 0; VAR_1 < VAR_0->queues.nr_queues; VAR_1++) {
  struct auxtrace_queue *VAR_2 = &VAR_0->queues.queue_array[VAR_1];
  struct intel_pt_queue *VAR_3 = VAR_2->priv;

  if (VAR_3)
   VAR_3->sync_switch = 1;
 }
}
