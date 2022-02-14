
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int type; int payload; } ;
struct intel_pt_decoder {int in_psb; int continuous_period; int pge; int cr3; int exec_mode; int have_tma; int pkt_state; int ip; TYPE_1__ packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (struct intel_pt_decoder*) ;
 int FUNC_3 (struct intel_pt_decoder*) ;
 int FUNC_4 (struct intel_pt_decoder*) ;
 int FUNC_5 (struct intel_pt_decoder*) ;
 int FUNC_6 (struct intel_pt_decoder*) ;
 int FUNC_7 (struct intel_pt_decoder*) ;
 int FUNC_8 (struct intel_pt_decoder*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (struct intel_pt_decoder*) ;
 int FUNC_12 (struct intel_pt_decoder*) ;
 int FUNC_13 (struct intel_pt_decoder*) ;

__attribute__((used)) static int FUNC_14(struct intel_pt_decoder *VAR_5)
{
 int VAR_6;

 VAR_5->in_psb = 1;

 while (1) {
  VAR_6 = FUNC_7(VAR_5);
  if (VAR_6)
   goto out;

  switch (VAR_5->packet.type) {
  case 134:
   VAR_5->continuous_period = 0;
   VAR_4;
  case 133:
  case 135:
  case 139:
  case 138:
  case 152:
  case 151:
  case 145:
  case 137:
  case 136:
  case 158:
  case 155:
  case 157:
  case 156:
   FUNC_9("ERROR: Unexpected packet\n");
   VAR_6 = -VAR_1;
   goto out;

  case 150:
   VAR_5->pge = 1;
   if (FUNC_8(VAR_5)) {
    uint64_t VAR_7 = VAR_5->ip;

    FUNC_12(VAR_5);
    if (VAR_7)
     FUNC_10("Setting IP",
       VAR_5->ip);
   }
   break;

  case 146:
   FUNC_3(VAR_5);
   break;

  case 129:
   FUNC_5(VAR_5);
   break;

  case 132:
   FUNC_4(VAR_5);
   break;

  case 153:
   FUNC_2(VAR_5);
   break;

  case 154:
   FUNC_1(VAR_5);
   break;

  case 142:
   VAR_5->cr3 = VAR_5->packet.payload & (VAR_0 - 1);
   break;

  case 148:
   VAR_5->exec_mode = VAR_5->packet.payload;
   break;

  case 147:
   FUNC_13(VAR_5);
   break;

  case 130:
   VAR_5->pge = 0;
   VAR_5->continuous_period = 0;
   FUNC_6(VAR_5);
   VAR_4;

  case 131:
   VAR_5->have_tma = 0;
   FUNC_9("ERROR: Unexpected packet\n");
   if (VAR_5->ip)
    VAR_5->pkt_state = VAR_3;
   else
    VAR_5->pkt_state = VAR_2;
   VAR_6 = -VAR_1;
   goto out;

  case 159:
   VAR_6 = FUNC_0(VAR_5);
   goto out;

  case 144:
   VAR_6 = FUNC_11(VAR_5);
   goto out;

  case 140:
   VAR_6 = 0;
   goto out;

  case 141:
  case 128:
  case 149:
  case 143:
  default:
   break;
  }
 }
out:
 VAR_5->in_psb = 0;

 return VAR_6;
}
