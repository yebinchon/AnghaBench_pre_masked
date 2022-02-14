
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int have_tma; scalar_t__ timestamp; int pkt_state; scalar_t__ ip; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct intel_pt_decoder *VAR_1)
{
 VAR_1->ip = 0;
 VAR_1->pkt_state = VAR_0;
 VAR_1->timestamp = 0;
 VAR_1->have_tma = 0;
}
