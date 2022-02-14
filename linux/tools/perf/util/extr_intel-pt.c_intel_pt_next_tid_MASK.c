
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pt_queue {int next_tid; size_t queue_nr; int cpu; } ;
struct TYPE_2__ {struct auxtrace_queue* queue_array; } ;
struct intel_pt {TYPE_1__ queues; int machine; } ;
struct auxtrace_queue {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct intel_pt*,struct auxtrace_queue*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct intel_pt *VAR_0, struct intel_pt_queue *VAR_1)
{
 struct auxtrace_queue *VAR_2;
 pid_t VAR_3 = VAR_1->next_tid;
 int VAR_4;

 if (VAR_3 == -1)
  return 0;

 FUNC_0("switch: cpu %d tid %d\n", VAR_1->cpu, VAR_3);

 VAR_4 = FUNC_2(VAR_0->machine, VAR_1->cpu, -1, VAR_3);

 VAR_2 = &VAR_0->queues.queue_array[VAR_1->queue_nr];
 FUNC_1(VAR_0, VAR_2);

 VAR_1->next_tid = -1;

 return VAR_4;
}
