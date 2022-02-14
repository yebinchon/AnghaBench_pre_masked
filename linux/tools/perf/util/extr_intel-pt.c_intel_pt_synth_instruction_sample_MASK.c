
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct perf_sample {scalar_t__ insn_cnt; scalar_t__ cyc_cnt; scalar_t__ period; int stream_id; int id; int ip; } ;
struct intel_pt_queue {TYPE_1__* state; scalar_t__ last_insn_cnt; scalar_t__ ipc_cyc_cnt; scalar_t__ last_in_cyc_cnt; scalar_t__ ipc_insn_cnt; scalar_t__ last_in_insn_cnt; struct intel_pt* pt; union perf_event* event_buf; } ;
struct intel_pt {int instructions_sample_type; int instructions_id; } ;
struct TYPE_2__ {scalar_t__ tot_insn_cnt; } ;


 int FUNC_0 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*,int ) ;
 int FUNC_1 (struct intel_pt*,struct intel_pt_queue*,union perf_event*,struct perf_sample*) ;
 scalar_t__ FUNC_2 (struct intel_pt*) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_queue *VAR_0)
{
 struct intel_pt *VAR_1 = VAR_0->pt;
 union perf_event *VAR_2 = VAR_0->event_buf;
 struct perf_sample VAR_3 = { .ip = 0, };

 if (FUNC_2(VAR_1))
  return 0;

 FUNC_1(VAR_1, VAR_0, VAR_2, &VAR_3);

 VAR_3.id = VAR_0->pt->instructions_id;
 VAR_3.stream_id = VAR_0->pt->instructions_id;
 VAR_3.period = VAR_0->state->tot_insn_cnt - VAR_0->last_insn_cnt;

 VAR_3.cyc_cnt = VAR_0->ipc_cyc_cnt - VAR_0->last_in_cyc_cnt;
 if (VAR_3.cyc_cnt) {
  VAR_3.insn_cnt = VAR_0->ipc_insn_cnt - VAR_0->last_in_insn_cnt;
  VAR_0->last_in_insn_cnt = VAR_0->ipc_insn_cnt;
  VAR_0->last_in_cyc_cnt = VAR_0->ipc_cyc_cnt;
 }

 VAR_0->last_insn_cnt = VAR_0->state->tot_insn_cnt;

 return FUNC_0(VAR_1, VAR_0, VAR_2, &VAR_3,
         VAR_1->instructions_sample_type);
}
