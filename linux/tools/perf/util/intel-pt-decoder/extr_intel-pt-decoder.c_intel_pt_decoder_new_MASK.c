
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_params {int mtc_period; int tsc_ctc_ratio_n; int tsc_ctc_ratio_d; int max_non_turbo_ratio; int period_type; int period; int flags; int branch_enable; int return_compression; int data; int lookahead; int pgd_ip; scalar_t__ walk_insn; scalar_t__ get_trace; } ;
struct intel_pt_decoder {int mtc_shift; int ctc_rem_mask; int tsc_ctc_ratio_n; int tsc_ctc_ratio_d; int tsc_ctc_mult; int tsc_slip; int max_non_turbo_ratio_fp; int max_non_turbo_ratio; int period_type; int period; int flags; int branch_enable; int return_compression; int data; int lookahead; int pgd_ip; scalar_t__ walk_insn; scalar_t__ get_trace; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 struct intel_pt_decoder* FUNC_2 (int) ;

struct intel_pt_decoder *FUNC_3(struct intel_pt_params *VAR_0)
{
 struct intel_pt_decoder *VAR_1;

 if (!VAR_0->get_trace || !VAR_0->walk_insn)
  return ((void*)0);

 VAR_1 = FUNC_2(sizeof(struct intel_pt_decoder));
 if (!VAR_1)
  return ((void*)0);

 VAR_1->get_trace = VAR_0->get_trace;
 VAR_1->walk_insn = VAR_0->walk_insn;
 VAR_1->pgd_ip = VAR_0->pgd_ip;
 VAR_1->lookahead = VAR_0->lookahead;
 VAR_1->data = VAR_0->data;
 VAR_1->return_compression = VAR_0->return_compression;
 VAR_1->branch_enable = VAR_0->branch_enable;

 VAR_1->flags = VAR_0->flags;

 VAR_1->period = VAR_0->period;
 VAR_1->period_type = VAR_0->period_type;

 VAR_1->max_non_turbo_ratio = VAR_0->max_non_turbo_ratio;
 VAR_1->max_non_turbo_ratio_fp = VAR_0->max_non_turbo_ratio;

 FUNC_1(VAR_1);

 VAR_1->mtc_shift = VAR_0->mtc_period;
 VAR_1->ctc_rem_mask = (1 << VAR_1->mtc_shift) - 1;

 VAR_1->tsc_ctc_ratio_n = VAR_0->tsc_ctc_ratio_n;
 VAR_1->tsc_ctc_ratio_d = VAR_0->tsc_ctc_ratio_d;

 if (!VAR_1->tsc_ctc_ratio_n)
  VAR_1->tsc_ctc_ratio_d = 0;

 if (VAR_1->tsc_ctc_ratio_d) {
  if (!(VAR_1->tsc_ctc_ratio_n % VAR_1->tsc_ctc_ratio_d))
   VAR_1->tsc_ctc_mult = VAR_1->tsc_ctc_ratio_n /
      VAR_1->tsc_ctc_ratio_d;
 }







 VAR_1->tsc_slip = 0x10000;

 FUNC_0("timestamp: mtc_shift %u\n", VAR_1->mtc_shift);
 FUNC_0("timestamp: tsc_ctc_ratio_n %u\n", VAR_1->tsc_ctc_ratio_n);
 FUNC_0("timestamp: tsc_ctc_ratio_d %u\n", VAR_1->tsc_ctc_ratio_d);
 FUNC_0("timestamp: tsc_ctc_mult %u\n", VAR_1->tsc_ctc_mult);
 FUNC_0("timestamp: tsc_slip %#x\n", VAR_1->tsc_slip);

 return VAR_1;
}
