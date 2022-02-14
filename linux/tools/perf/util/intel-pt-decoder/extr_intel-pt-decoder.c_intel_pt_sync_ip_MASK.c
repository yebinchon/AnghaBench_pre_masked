
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int to_ip; scalar_t__ from_ip; scalar_t__ type; } ;
struct intel_pt_decoder {int set_fup_tx_flags; int set_fup_ptw; int set_fup_mwait; int set_fup_pwre; int set_fup_exstop; int set_fup_bep; int overflow; int ip; TYPE_1__ state; void* pkt_state; int branch_enable; } ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct intel_pt_decoder*) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_decoder *VAR_1)
{
 int VAR_2;

 VAR_1->set_fup_tx_flags = 0;
 VAR_1->set_fup_ptw = 0;
 VAR_1->set_fup_mwait = 0;
 VAR_1->set_fup_pwre = 0;
 VAR_1->set_fup_exstop = 0;
 VAR_1->set_fup_bep = 0;

 if (!VAR_1->branch_enable) {
  VAR_1->pkt_state = VAR_0;
  VAR_1->overflow = 0;
  VAR_1->state.type = 0;
  return 0;
 }

 FUNC_0("Scanning for full IP\n");
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->pkt_state = VAR_0;
 VAR_1->overflow = 0;

 VAR_1->state.from_ip = 0;
 VAR_1->state.to_ip = VAR_1->ip;
 FUNC_1("Setting IP", VAR_1->ip);

 return 0;
}
