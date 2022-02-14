
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int type; } ;
struct intel_pt_decoder {int period_type; int timestamp; int timestamp_insn_cnt; int period_mask; int last_masked_timestamp; int period_ticks; TYPE_1__ state; int period_insn_cnt; } ;


 int VAR_0 ;





__attribute__((used)) static void FUNC_0(struct intel_pt_decoder *VAR_1)
{
 uint64_t VAR_2, VAR_3;

 switch (VAR_1->period_type) {
 case 131:
  VAR_1->period_insn_cnt = 0;
  break;
 case 128:
  VAR_2 = VAR_1->timestamp + VAR_1->timestamp_insn_cnt;
  VAR_3 = VAR_2 & VAR_1->period_mask;
  if (VAR_3 > VAR_1->last_masked_timestamp)
   VAR_1->last_masked_timestamp = VAR_3;
  else
   VAR_1->last_masked_timestamp += VAR_1->period_ticks;
  break;
 case 129:
 case 130:
 default:
  break;
 }

 VAR_1->state.type |= VAR_0;
}
