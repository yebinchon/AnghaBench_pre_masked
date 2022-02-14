
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int tot_cyc_cnt; int base_cyc_cnt; int timestamp; int cyc_cnt_timestamp; scalar_t__ have_cyc; } ;



__attribute__((used)) static inline void FUNC_0(struct intel_pt_decoder *VAR_0)
{
 if (VAR_0->have_cyc)
  return;

 VAR_0->cyc_cnt_timestamp = VAR_0->timestamp;
 VAR_0->base_cyc_cnt = VAR_0->tot_cyc_cnt;
}
