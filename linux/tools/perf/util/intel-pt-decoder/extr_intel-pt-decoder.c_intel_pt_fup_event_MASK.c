
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ to_ip; int from_ip; int type; int flags; int pwre_payload; int mwait_payload; int ptw_payload; } ;
struct intel_pt_decoder {int set_fup_tx_flags; int set_fup_ptw; int set_fup_mwait; int set_fup_pwre; int set_fup_exstop; int set_fup_bep; TYPE_1__ state; int ip; int fup_pwre_payload; int fup_mwait_payload; int fup_ptw_payload; int fup_tx_flags; int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static bool FUNC_0(struct intel_pt_decoder *VAR_8)
{
 bool VAR_9 = 0;

 if (VAR_8->set_fup_tx_flags) {
  VAR_8->set_fup_tx_flags = 0;
  VAR_8->tx_flags = VAR_8->fup_tx_flags;
  VAR_8->state.type = VAR_7;
  VAR_8->state.from_ip = VAR_8->ip;
  VAR_8->state.to_ip = 0;
  VAR_8->state.flags = VAR_8->fup_tx_flags;
  return 1;
 }
 if (VAR_8->set_fup_ptw) {
  VAR_8->set_fup_ptw = 0;
  VAR_8->state.type = VAR_5;
  VAR_8->state.flags |= VAR_3;
  VAR_8->state.from_ip = VAR_8->ip;
  VAR_8->state.to_ip = 0;
  VAR_8->state.ptw_payload = VAR_8->fup_ptw_payload;
  return 1;
 }
 if (VAR_8->set_fup_mwait) {
  VAR_8->set_fup_mwait = 0;
  VAR_8->state.type = VAR_4;
  VAR_8->state.from_ip = VAR_8->ip;
  VAR_8->state.to_ip = 0;
  VAR_8->state.mwait_payload = VAR_8->fup_mwait_payload;
  VAR_9 = 1;
 }
 if (VAR_8->set_fup_pwre) {
  VAR_8->set_fup_pwre = 0;
  VAR_8->state.type |= VAR_6;
  VAR_8->state.type &= ~VAR_1;
  VAR_8->state.from_ip = VAR_8->ip;
  VAR_8->state.to_ip = 0;
  VAR_8->state.pwre_payload = VAR_8->fup_pwre_payload;
  VAR_9 = 1;
 }
 if (VAR_8->set_fup_exstop) {
  VAR_8->set_fup_exstop = 0;
  VAR_8->state.type |= VAR_2;
  VAR_8->state.type &= ~VAR_1;
  VAR_8->state.flags |= VAR_3;
  VAR_8->state.from_ip = VAR_8->ip;
  VAR_8->state.to_ip = 0;
  VAR_9 = 1;
 }
 if (VAR_8->set_fup_bep) {
  VAR_8->set_fup_bep = 0;
  VAR_8->state.type |= VAR_0;
  VAR_8->state.type &= ~VAR_1;
  VAR_8->state.from_ip = VAR_8->ip;
  VAR_8->state.to_ip = 0;
  VAR_9 = 1;
 }
 return VAR_9;
}
