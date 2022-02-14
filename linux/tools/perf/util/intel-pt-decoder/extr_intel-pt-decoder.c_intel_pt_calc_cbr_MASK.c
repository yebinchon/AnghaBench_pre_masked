
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int payload; } ;
struct intel_pt_decoder {int cbr_payload; unsigned int cbr; unsigned int cbr_cyc_to_tsc; unsigned int max_non_turbo_ratio_fp; TYPE_1__ packet; } ;


 int FUNC_0 (struct intel_pt_decoder*) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_decoder *VAR_0)
{
 unsigned int VAR_1 = VAR_0->packet.payload & 0xff;

 VAR_0->cbr_payload = VAR_0->packet.payload;

 if (VAR_0->cbr == VAR_1)
  return;

 VAR_0->cbr = VAR_1;
 VAR_0->cbr_cyc_to_tsc = VAR_0->max_non_turbo_ratio_fp / VAR_1;

 FUNC_0(VAR_0);
}
