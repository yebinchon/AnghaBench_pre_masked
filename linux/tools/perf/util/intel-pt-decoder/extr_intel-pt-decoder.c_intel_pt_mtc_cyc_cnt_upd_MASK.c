
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct intel_pt_decoder {int sample_cyc; scalar_t__ timestamp; scalar_t__ cyc_cnt_timestamp; scalar_t__ tsc_to_cyc; scalar_t__ base_cyc_cnt; scalar_t__ tot_cyc_cnt; int pge; scalar_t__ have_cyc; } ;



__attribute__((used)) static inline void FUNC_0(struct intel_pt_decoder *VAR_0)
{
 uint64_t VAR_1, VAR_2;

 if (VAR_0->have_cyc)
  return;

 VAR_0->sample_cyc = 1;

 if (!VAR_0->pge || VAR_0->timestamp <= VAR_0->cyc_cnt_timestamp)
  return;

 VAR_2 = VAR_0->timestamp - VAR_0->cyc_cnt_timestamp;
 VAR_1 = VAR_2 * VAR_0->tsc_to_cyc + VAR_0->base_cyc_cnt;

 if (VAR_1 > VAR_0->tot_cyc_cnt)
  VAR_0->tot_cyc_cnt = VAR_1;
}
