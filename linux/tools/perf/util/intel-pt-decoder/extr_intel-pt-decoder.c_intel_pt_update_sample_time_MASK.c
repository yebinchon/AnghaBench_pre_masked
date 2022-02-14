
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int timestamp_insn_cnt; int sample_insn_cnt; int timestamp; int sample_timestamp; } ;



__attribute__((used)) static inline void FUNC_0(struct intel_pt_decoder *VAR_0)
{
 VAR_0->sample_timestamp = VAR_0->timestamp;
 VAR_0->sample_insn_cnt = VAR_0->timestamp_insn_cnt;
}
