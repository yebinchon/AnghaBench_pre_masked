
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pt_state {scalar_t__ tot_cyc_cnt; int type; scalar_t__ cbr; scalar_t__ to_ip; int trace_nr; int from_ip; int tot_insn_cnt; } ;
struct intel_pt_queue {int have_sample; scalar_t__ ipc_cyc_cnt; scalar_t__ cbr_seen; int flags; int switch_state; int sync_switch; int cpu; int thread; int insn_len; struct intel_pt_state* state; int ipc_insn_cnt; struct intel_pt* pt; } ;
struct TYPE_2__ {scalar_t__ last_branch; scalar_t__ thread_stack; scalar_t__ callchain; } ;
struct intel_pt {scalar_t__ ptss_ip; TYPE_1__ synth_opts; scalar_t__ sample_branches; scalar_t__ sample_ptwrites; scalar_t__ sample_transactions; scalar_t__ sample_instructions; scalar_t__ sample_pwr_events; scalar_t__ sample_pebs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 void* VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct intel_pt_queue*,scalar_t__) ;
 int FUNC_1 (struct intel_pt*,struct intel_pt_queue*) ;
 int FUNC_2 (struct intel_pt_queue*) ;
 int FUNC_3 (struct intel_pt_queue*) ;
 int FUNC_4 (struct intel_pt_queue*) ;
 int FUNC_5 (struct intel_pt_queue*) ;
 int FUNC_6 (struct intel_pt_queue*) ;
 int FUNC_7 (struct intel_pt_queue*) ;
 int FUNC_8 (struct intel_pt_queue*) ;
 int FUNC_9 (struct intel_pt_queue*) ;
 int FUNC_10 (struct intel_pt_queue*) ;
 int FUNC_11 (struct intel_pt_queue*) ;
 int FUNC_12 (struct intel_pt_queue*) ;
 int FUNC_13 (int ,int ,int,int ,scalar_t__,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct intel_pt_queue *VAR_13)
{
 const struct intel_pt_state *VAR_14 = VAR_13->state;
 struct intel_pt *VAR_15 = VAR_13->pt;
 int VAR_16;

 if (!VAR_13->have_sample)
  return 0;

 VAR_13->have_sample = 0;

 if (VAR_13->state->tot_cyc_cnt > VAR_13->ipc_cyc_cnt) {




  VAR_13->ipc_insn_cnt = VAR_13->state->tot_insn_cnt;
  VAR_13->ipc_cyc_cnt = VAR_13->state->tot_cyc_cnt;
 }





 if (VAR_15->sample_pebs && VAR_14->type & VAR_0) {
  VAR_16 = FUNC_7(VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_15->sample_pwr_events) {
  if (VAR_13->state->cbr != VAR_13->cbr_seen) {
   VAR_16 = FUNC_3(VAR_13);
   if (VAR_16)
    return VAR_16;
  }
  if (VAR_14->type & VAR_7) {
   if (VAR_14->type & VAR_4) {
    VAR_16 = FUNC_6(VAR_13);
    if (VAR_16)
     return VAR_16;
   }
   if (VAR_14->type & VAR_6) {
    VAR_16 = FUNC_9(VAR_13);
    if (VAR_16)
     return VAR_16;
   }
   if (VAR_14->type & VAR_2) {
    VAR_16 = FUNC_4(VAR_13);
    if (VAR_16)
     return VAR_16;
   }
   if (VAR_14->type & VAR_8) {
    VAR_16 = FUNC_10(VAR_13);
    if (VAR_16)
     return VAR_16;
   }
  }
 }

 if (VAR_15->sample_instructions && (VAR_14->type & VAR_3)) {
  VAR_16 = FUNC_5(VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_15->sample_transactions && (VAR_14->type & VAR_11)) {
  VAR_16 = FUNC_11(VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_15->sample_ptwrites && (VAR_14->type & VAR_5)) {
  VAR_16 = FUNC_8(VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 if (!(VAR_14->type & VAR_1))
  return 0;

 if (VAR_15->synth_opts.callchain || VAR_15->synth_opts.thread_stack)
  FUNC_13(VAR_13->thread, VAR_13->cpu, VAR_13->flags, VAR_14->from_ip,
        VAR_14->to_ip, VAR_13->insn_len,
        VAR_14->trace_nr);
 else
  FUNC_14(VAR_13->thread, VAR_13->cpu, VAR_14->trace_nr);

 if (VAR_15->sample_branches) {
  VAR_16 = FUNC_2(VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_15->synth_opts.last_branch)
  FUNC_12(VAR_13);

 if (!VAR_13->sync_switch)
  return 0;

 if (FUNC_0(VAR_13, VAR_14->to_ip)) {
  switch (VAR_13->switch_state) {
  case 129:
  case 128:
  case 130:
   VAR_16 = FUNC_1(VAR_15, VAR_13);
   if (VAR_16)
    return VAR_16;
   VAR_13->switch_state = VAR_10;
   break;
  default:
   VAR_13->switch_state = VAR_9;
   return 1;
  }
 } else if (!VAR_14->to_ip) {
  VAR_13->switch_state = 129;
 } else if (VAR_13->switch_state == 129) {
  VAR_13->switch_state = 128;
 } else if (VAR_13->switch_state == 128 &&
     VAR_14->to_ip == VAR_15->ptss_ip &&
     (VAR_13->flags & VAR_12)) {
  VAR_13->switch_state = VAR_10;
 }

 return 0;
}
