
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int fixup_last_mtc; int have_tma; int timestamp; int tsc_timestamp; int ctc_delta; int ctc_timestamp; int last_mtc; } ;
struct intel_pt_calc_cyc_to_tsc_info {int from_mtc; int cbr_cyc_to_tsc; int fixup_last_mtc; int have_tma; int timestamp; int tsc_timestamp; int ctc_delta; int ctc_timestamp; int last_mtc; int cbr; int cycle_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_pt_decoder*,int ,struct intel_pt_calc_cyc_to_tsc_info*) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_decoder *VAR_1,
         bool VAR_2)
{
 struct intel_pt_calc_cyc_to_tsc_info VAR_3 = {
  .cycle_cnt = 0,
  .cbr = 0,
  .last_mtc = VAR_1->last_mtc,
  .ctc_timestamp = VAR_1->ctc_timestamp,
  .ctc_delta = VAR_1->ctc_delta,
  .tsc_timestamp = VAR_1->tsc_timestamp,
  .timestamp = VAR_1->timestamp,
  .have_tma = VAR_1->have_tma,
  .fixup_last_mtc = VAR_1->fixup_last_mtc,
  .from_mtc = VAR_2,
  .cbr_cyc_to_tsc = 0,
 };






 if (!VAR_2)
  return;

 FUNC_0(VAR_1, VAR_0, &VAR_3);
}
