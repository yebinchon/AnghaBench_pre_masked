
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct intel_pt_decoder {int period_type; scalar_t__ period_insn_cnt; scalar_t__ period; } ;






 scalar_t__ FUNC_0 (struct intel_pt_decoder*) ;

__attribute__((used)) static uint64_t FUNC_1(struct intel_pt_decoder *VAR_0)
{
 switch (VAR_0->period_type) {
 case 131:
  return VAR_0->period - VAR_0->period_insn_cnt;
 case 128:
  return FUNC_0(VAR_0);
 case 129:
 case 130:
 default:
  return 0;
 }
}
