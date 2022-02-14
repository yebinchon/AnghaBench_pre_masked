
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_decoder {int sample_insn_cnt; int cbr; int max_non_turbo_ratio; int sample_timestamp; } ;



__attribute__((used)) static uint64_t FUNC_0(struct intel_pt_decoder *VAR_0)
{
 uint64_t VAR_1 = VAR_0->sample_insn_cnt << 1;

 if (!VAR_0->cbr || !VAR_0->max_non_turbo_ratio)
  goto out;

 VAR_1 *= VAR_0->max_non_turbo_ratio;
 VAR_1 /= VAR_0->cbr;
out:
 return VAR_0->sample_timestamp + VAR_1;
}
