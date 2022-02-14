
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct intel_pt_queue {int tid; TYPE_1__* thread; int cpu; int pid; } ;
struct intel_pt {int machine; scalar_t__ have_sched_switch; } ;
struct auxtrace_queue {int tid; int cpu; struct intel_pt_queue* priv; } ;
struct TYPE_3__ {int cpu; int pid_; } ;


 TYPE_1__* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct intel_pt *VAR_0,
         struct auxtrace_queue *VAR_1)
{
 struct intel_pt_queue *VAR_2 = VAR_1->priv;

 if (VAR_1->tid == -1 || VAR_0->have_sched_switch) {
  VAR_2->tid = FUNC_1(VAR_0->machine, VAR_2->cpu);
  FUNC_2(VAR_2->thread);
 }

 if (!VAR_2->thread && VAR_2->tid != -1)
  VAR_2->thread = FUNC_0(VAR_0->machine, -1, VAR_2->tid);

 if (VAR_2->thread) {
  VAR_2->pid = VAR_2->thread->pid_;
  if (VAR_1->cpu == -1)
   VAR_2->cpu = VAR_2->thread->cpu;
 }
}
