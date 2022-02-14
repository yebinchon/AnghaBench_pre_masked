
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_decoder {int timestamp; int timestamp_insn_cnt; int period_mask; int continuous_period; int last_masked_timestamp; int period_ticks; } ;



__attribute__((used)) static uint64_t FUNC_0(struct intel_pt_decoder *VAR_0)
{
 uint64_t VAR_1, VAR_2;

 VAR_1 = VAR_0->timestamp + VAR_0->timestamp_insn_cnt;
 VAR_2 = VAR_1 & VAR_0->period_mask;
 if (VAR_0->continuous_period) {
  if (VAR_2 > VAR_0->last_masked_timestamp)
   return 1;
 } else {
  VAR_1 += 1;
  VAR_2 = VAR_1 & VAR_0->period_mask;
  if (VAR_2 > VAR_0->last_masked_timestamp) {
   VAR_0->last_masked_timestamp = VAR_2;
   VAR_0->continuous_period = 1;
  }
 }

 if (VAR_2 < VAR_0->last_masked_timestamp)
  return VAR_0->period_ticks;

 return VAR_0->period_ticks - (VAR_1 - VAR_2);
}
