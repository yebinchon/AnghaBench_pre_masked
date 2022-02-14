
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_bts_queue {scalar_t__ tid; } ;
struct auxtrace_queues {unsigned int nr_queues; struct auxtrace_queue* queue_array; } ;
struct intel_bts {struct auxtrace_queues queues; } ;
struct auxtrace_queue {struct intel_bts_queue* priv; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (struct intel_bts_queue*) ;

__attribute__((used)) static int FUNC_1(struct intel_bts *VAR_0, pid_t VAR_1)
{
 struct auxtrace_queues *VAR_2 = &VAR_0->queues;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_queues; VAR_3++) {
  struct auxtrace_queue *VAR_4 = &VAR_0->queues.queue_array[VAR_3];
  struct intel_bts_queue *VAR_5 = VAR_4->priv;

  if (VAR_5 && VAR_5->tid == VAR_1)
   return FUNC_0(VAR_5);
 }
 return 0;
}
