
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_pt_queue {int dummy; } ;
struct TYPE_4__ {unsigned int nr_queues; TYPE_1__* queue_array; } ;
struct intel_pt {TYPE_2__ queues; } ;
struct TYPE_3__ {int cpu; struct intel_pt_queue* priv; } ;



__attribute__((used)) static struct intel_pt_queue *FUNC_0(struct intel_pt *VAR_0, int VAR_1)
{
 unsigned VAR_2, VAR_3;

 if (VAR_1 < 0 || !VAR_0->queues.nr_queues)
  return ((void*)0);

 if ((unsigned)VAR_1 >= VAR_0->queues.nr_queues)
  VAR_2 = VAR_0->queues.nr_queues - 1;
 else
  VAR_2 = VAR_1;

 if (VAR_0->queues.queue_array[VAR_2].cpu == VAR_1)
  return VAR_0->queues.queue_array[VAR_2].priv;

 for (VAR_3 = 0; VAR_2 > 0; VAR_3++) {
  if (VAR_0->queues.queue_array[--VAR_2].cpu == VAR_1)
   return VAR_0->queues.queue_array[VAR_2].priv;
 }

 for (; VAR_3 < VAR_0->queues.nr_queues; VAR_3++) {
  if (VAR_0->queues.queue_array[VAR_3].cpu == VAR_1)
   return VAR_0->queues.queue_array[VAR_3].priv;
 }

 return ((void*)0);
}
