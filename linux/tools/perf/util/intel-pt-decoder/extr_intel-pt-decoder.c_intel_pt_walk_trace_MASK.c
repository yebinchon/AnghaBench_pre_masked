
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int payload; int count; } ;
struct TYPE_4__ {int ptw_payload; int pwrx_payload; int to_ip; int from_ip; int type; } ;
struct intel_pt_decoder {int pge; int set_fup_mwait; int continuous_period; int have_tma; int have_last_ip; int cr3; int mtc_insn; int exec_mode; int fup_ptw_payload; int set_fup_ptw; int fup_mwait_payload; int fup_pwre_payload; int set_fup_pwre; int set_fup_exstop; int set_fup_bep; int pos; TYPE_1__ packet; TYPE_2__ state; int ip; int cbr_seen; int cbr; int timestamp; int period_type; int stack; int last_ip; int pkt_state; int branch_enable; TYPE_1__ tnt; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;




 int VAR_3 ;

 int VAR_4 ;







 int VAR_5 ;



 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;






 int VAR_14 ;


 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (struct intel_pt_decoder*) ;
 int FUNC_3 (struct intel_pt_decoder*) ;
 int FUNC_4 (struct intel_pt_decoder*) ;
 int FUNC_5 (struct intel_pt_decoder*) ;
 int FUNC_6 (struct intel_pt_decoder*) ;
 int FUNC_7 (struct intel_pt_decoder*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct intel_pt_decoder*) ;
 int FUNC_10 (struct intel_pt_decoder*) ;
 int FUNC_11 (struct intel_pt_decoder*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (struct intel_pt_decoder*,int*) ;
 int FUNC_14 (struct intel_pt_decoder*) ;
 int FUNC_15 (struct intel_pt_decoder*) ;
 int FUNC_16 (struct intel_pt_decoder*) ;
 int FUNC_17 (struct intel_pt_decoder*) ;
 int FUNC_18 (struct intel_pt_decoder*) ;
 int FUNC_19 (struct intel_pt_decoder*) ;
 int FUNC_20 (struct intel_pt_decoder*) ;
 int FUNC_21 (struct intel_pt_decoder*) ;
 int FUNC_22 (struct intel_pt_decoder*) ;
 int FUNC_23 (struct intel_pt_decoder*) ;

__attribute__((used)) static int FUNC_24(struct intel_pt_decoder *VAR_15)
{
 bool VAR_16 = 0;
 int VAR_17;

 while (1) {
  VAR_17 = FUNC_11(VAR_15);
  if (VAR_17)
   return VAR_17;
next:
  switch (VAR_15->packet.type) {
  case 131:
   if (!VAR_15->packet.count)
    break;
   VAR_15->tnt = VAR_15->packet;
   VAR_15->pkt_state = VAR_13;
   VAR_17 = FUNC_23(VAR_15);
   if (VAR_17 == -VAR_1)
    break;
   return VAR_17;

  case 134:
   if (VAR_15->packet.count != 0)
    FUNC_17(VAR_15);
   VAR_15->pkt_state = VAR_12;
   return FUNC_22(VAR_15);

  case 133: {
   VAR_15->pge = 1;
   FUNC_14(VAR_15);
   if (VAR_15->packet.count == 0) {
    FUNC_12("Skipping zero TIP.PGE",
      VAR_15->pos);
    break;
   }
   FUNC_16(VAR_15);
   VAR_15->state.from_ip = 0;
   VAR_15->state.to_ip = VAR_15->ip;
   VAR_15->state.type |= VAR_14;
   return 0;
  }

  case 144:
   return FUNC_15(VAR_15);

  case 135:
   if (VAR_15->packet.count != 0)
    FUNC_17(VAR_15);
   VAR_15->pkt_state = VAR_11;
   return FUNC_22(VAR_15);

  case 150:
   if (VAR_15->packet.count == 0) {
    FUNC_12("Skipping zero FUP",
      VAR_15->pos);
    VAR_16 = 0;
    break;
   }
   FUNC_17(VAR_15);
   if (!VAR_15->branch_enable) {
    VAR_15->ip = VAR_15->last_ip;
    if (FUNC_10(VAR_15))
     return 0;
    VAR_16 = 0;
    break;
   }
   if (VAR_15->set_fup_mwait)
    VAR_16 = 1;
   VAR_17 = FUNC_19(VAR_15);
   if (VAR_17 != -VAR_1) {
    if (VAR_17)
     return VAR_17;
    if (VAR_16)
     VAR_15->pkt_state =
      VAR_10;
    else
     VAR_15->pkt_state = VAR_9;
    return 0;
   }
   if (VAR_16) {
    VAR_16 = 0;
    break;
   }
   return FUNC_20(VAR_15);

  case 130:
   VAR_15->pge = 0;
   VAR_15->continuous_period = 0;
   FUNC_9(VAR_15);
   VAR_15->have_tma = 0;
   break;

  case 141:
   VAR_15->last_ip = 0;
   VAR_15->have_last_ip = 1;
   FUNC_8(&VAR_15->stack);
   VAR_17 = FUNC_21(VAR_15);
   if (VAR_17 == -VAR_1)
    goto next;
   if (VAR_17)
    return VAR_17;





   if (VAR_15->cbr != VAR_15->cbr_seen)
    return 0;
   break;

  case 142:
   VAR_15->cr3 = VAR_15->packet.payload & (VAR_0 - 1);
   break;

  case 146:
   FUNC_5(VAR_15);
   if (VAR_15->period_type != VAR_5)
    break;




   if (!VAR_15->mtc_insn)
    break;
   VAR_15->mtc_insn = 0;

   if (!VAR_15->timestamp)
    break;
   VAR_15->state.type = VAR_4;
   VAR_15->state.from_ip = VAR_15->ip;
   VAR_15->state.to_ip = 0;
   VAR_15->mtc_insn = 0;
   return 0;

  case 129:
   FUNC_7(VAR_15);
   break;

  case 132:
   FUNC_6(VAR_15);
   break;

  case 153:
   FUNC_4(VAR_15);
   break;

  case 154:
   FUNC_3(VAR_15);
   if (VAR_15->cbr != VAR_15->cbr_seen)
    return 0;
   break;

  case 148:
   VAR_15->exec_mode = VAR_15->packet.payload;
   break;

  case 147:

   if (!VAR_15->pge) {
    FUNC_18(VAR_15);
    break;
   }
   VAR_17 = FUNC_13(VAR_15, &VAR_16);
   if (VAR_17)
    return VAR_17;
   goto next;

  case 159:
   return FUNC_2(VAR_15);

  case 140:
  case 128:
  case 149:
  case 143:
   break;

  case 138:
   VAR_15->fup_ptw_payload = VAR_15->packet.payload;
   VAR_17 = FUNC_11(VAR_15);
   if (VAR_17)
    return VAR_17;
   if (VAR_15->packet.type == 150) {
    VAR_15->set_fup_ptw = 1;
    VAR_16 = 1;
   } else {
    FUNC_12("ERROR: Missing FUP after PTWRITE",
      VAR_15->pos);
   }
   goto next;

  case 139:
   VAR_15->state.type = VAR_6;
   VAR_15->state.from_ip = VAR_15->ip;
   VAR_15->state.to_ip = 0;
   VAR_15->state.ptw_payload = VAR_15->packet.payload;
   return 0;

  case 145:
   VAR_15->fup_mwait_payload = VAR_15->packet.payload;
   VAR_15->set_fup_mwait = 1;
   break;

  case 137:
   if (VAR_15->set_fup_mwait) {
    VAR_15->fup_pwre_payload =
       VAR_15->packet.payload;
    VAR_15->set_fup_pwre = 1;
    break;
   }
   VAR_15->state.type = VAR_7;
   VAR_15->state.from_ip = VAR_15->ip;
   VAR_15->state.to_ip = 0;
   VAR_15->state.pwrx_payload = VAR_15->packet.payload;
   return 0;

  case 151:
   VAR_17 = FUNC_11(VAR_15);
   if (VAR_17)
    return VAR_17;
   if (VAR_15->packet.type == 150) {
    VAR_15->set_fup_exstop = 1;
    VAR_16 = 1;
   } else {
    FUNC_12("ERROR: Missing FUP after EXSTOP",
      VAR_15->pos);
   }
   goto next;

  case 152:
   VAR_15->state.type = VAR_3;
   VAR_15->state.from_ip = VAR_15->ip;
   VAR_15->state.to_ip = 0;
   return 0;

  case 136:
   VAR_15->state.type = VAR_8;
   VAR_15->state.from_ip = VAR_15->ip;
   VAR_15->state.to_ip = 0;
   VAR_15->state.pwrx_payload = VAR_15->packet.payload;
   return 0;

  case 158:
   FUNC_0(VAR_15);
   break;

  case 155:
   FUNC_1(VAR_15);
   break;

  case 157:
   VAR_15->state.type = VAR_2;
   VAR_15->state.from_ip = VAR_15->ip;
   VAR_15->state.to_ip = 0;
   return 0;

  case 156:
   VAR_17 = FUNC_11(VAR_15);
   if (VAR_17)
    return VAR_17;
   if (VAR_15->packet.type == 150) {
    VAR_15->set_fup_bep = 1;
    VAR_16 = 1;
   } else {
    FUNC_12("ERROR: Missing FUP after BEP",
      VAR_15->pos);
   }
   goto next;

  default:
   return FUNC_2(VAR_15);
  }
 }
}
