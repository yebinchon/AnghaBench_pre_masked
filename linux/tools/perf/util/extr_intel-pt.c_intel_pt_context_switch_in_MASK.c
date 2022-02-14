
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {scalar_t__ pid; scalar_t__ tid; int cpu; } ;
struct intel_pt_queue {int next_tid; int switch_state; scalar_t__ sync_switch; } ;
struct intel_pt {int machine; scalar_t__ sync_switch; } ;
typedef scalar_t__ pid_t ;







 struct intel_pt_queue* FUNC_0 (struct intel_pt*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct intel_pt *VAR_0,
          struct perf_sample *VAR_1)
{
 pid_t VAR_2 = VAR_1->pid;
 pid_t VAR_3 = VAR_1->tid;
 int VAR_4 = VAR_1->cpu;

 if (VAR_0->sync_switch) {
  struct intel_pt_queue *VAR_5;

  VAR_5 = FUNC_0(VAR_0, VAR_4);
  if (VAR_5 && VAR_5->sync_switch) {
   VAR_5->next_tid = -1;
   switch (VAR_5->switch_state) {
   case 130:
   case 128:
   case 129:
    break;
   case 132:
   case 131:
    VAR_5->switch_state = 129;
    break;
   default:
    break;
   }
  }
 }





 if (FUNC_1(VAR_0->machine, VAR_4) == VAR_3)
  return 0;

 return FUNC_2(VAR_0->machine, VAR_4, VAR_2, VAR_3);
}
