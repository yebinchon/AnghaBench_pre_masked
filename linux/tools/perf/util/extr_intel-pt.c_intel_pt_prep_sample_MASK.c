
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct perf_sample {int branch_stack; int callchain; int ip; } ;
struct intel_pt_queue {int last_branch; int chain; int cpu; int thread; } ;
struct TYPE_2__ {scalar_t__ last_branch; scalar_t__ callchain_sz; scalar_t__ callchain; } ;
struct intel_pt {TYPE_1__ synth_opts; int kernel_start; } ;


 int FUNC_0 (struct intel_pt_queue*) ;
 int FUNC_1 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct intel_pt *VAR_0,
     struct intel_pt_queue *VAR_1,
     union perf_event *VAR_2,
     struct perf_sample *VAR_3)
{
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_0->synth_opts.callchain) {
  FUNC_2(VAR_1->thread, VAR_1->cpu, VAR_1->chain,
         VAR_0->synth_opts.callchain_sz + 1,
         VAR_3->ip, VAR_0->kernel_start);
  VAR_3->callchain = VAR_1->chain;
 }

 if (VAR_0->synth_opts.last_branch) {
  FUNC_0(VAR_1);
  VAR_3->branch_stack = VAR_1->last_branch;
 }
}
