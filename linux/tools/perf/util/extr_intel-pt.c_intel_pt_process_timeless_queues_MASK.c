
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_pt_queue {int tid; int time; } ;
struct auxtrace_queues {unsigned int nr_queues; struct auxtrace_queue* queue_array; } ;
struct intel_pt {struct auxtrace_queues queues; } ;
struct auxtrace_queue {struct intel_pt_queue* priv; } ;
typedef int pid_t ;


 int FUNC_0 (struct intel_pt_queue*,int *) ;
 int FUNC_1 (struct intel_pt*,struct auxtrace_queue*) ;

__attribute__((used)) static int FUNC_2(struct intel_pt *VAR_0, pid_t VAR_1,
         u64 VAR_2)
{
 struct auxtrace_queues *VAR_3 = &VAR_0->queues;
 unsigned int VAR_4;
 u64 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_queues; VAR_4++) {
  struct auxtrace_queue *VAR_6 = &VAR_0->queues.queue_array[VAR_4];
  struct intel_pt_queue *VAR_7 = VAR_6->priv;

  if (VAR_7 && (VAR_1 == -1 || VAR_7->tid == VAR_1)) {
   VAR_7->time = VAR_2;
   FUNC_1(VAR_0, VAR_6);
   FUNC_0(VAR_7, &VAR_5);
  }
 }
 return 0;
}
