
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int type; int payload; } ;
struct intel_pt_decoder {int continuous_period; int pge; int cr3; int exec_mode; int have_tma; int have_last_ip; TYPE_2__ state; int ip; int stack; int last_ip; TYPE_1__ packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (struct intel_pt_decoder*) ;
 int FUNC_3 (struct intel_pt_decoder*) ;
 int FUNC_4 (struct intel_pt_decoder*) ;
 int FUNC_5 (struct intel_pt_decoder*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct intel_pt_decoder*) ;
 int FUNC_8 (struct intel_pt_decoder*) ;
 int FUNC_9 (struct intel_pt_decoder*) ;
 int FUNC_10 (struct intel_pt_decoder*) ;
 int FUNC_11 (struct intel_pt_decoder*) ;
 int FUNC_12 (struct intel_pt_decoder*) ;
 int FUNC_13 (struct intel_pt_decoder*) ;
 int FUNC_14 (struct intel_pt_decoder*) ;

__attribute__((used)) static int FUNC_15(struct intel_pt_decoder *VAR_3)
{
 int VAR_4;

 while (1) {
  VAR_4 = FUNC_8(VAR_3);
  if (VAR_4)
   return VAR_4;

  switch (VAR_3->packet.type) {
  case 134:
   VAR_3->continuous_period = 0;
   VAR_3->pge = 0;
   if (FUNC_9(VAR_3))
    FUNC_12(VAR_3);
   if (!VAR_3->ip)
    break;
   VAR_3->state.type |= VAR_2;
   return 0;

  case 133:
   VAR_3->pge = 1;
   FUNC_10(VAR_3);
   if (FUNC_9(VAR_3))
    FUNC_12(VAR_3);
   if (!VAR_3->ip)
    break;
   VAR_3->state.type |= VAR_1;
   return 0;

  case 135:
   VAR_3->pge = 1;
   if (FUNC_9(VAR_3))
    FUNC_12(VAR_3);
   if (!VAR_3->ip)
    break;
   return 0;

  case 150:
   if (FUNC_9(VAR_3))
    FUNC_12(VAR_3);
   if (VAR_3->ip)
    return 0;
   break;

  case 146:
   FUNC_3(VAR_3);
   break;

  case 129:
   FUNC_5(VAR_3);
   break;

  case 132:
   FUNC_4(VAR_3);
   break;

  case 153:
   FUNC_2(VAR_3);
   break;

  case 154:
   FUNC_1(VAR_3);
   break;

  case 142:
   VAR_3->cr3 = VAR_3->packet.payload & (VAR_0 - 1);
   break;

  case 148:
   VAR_3->exec_mode = VAR_3->packet.payload;
   break;

  case 147:
   FUNC_13(VAR_3);
   break;

  case 144:
   return FUNC_11(VAR_3);

  case 159:
   return FUNC_0(VAR_3);

  case 130:
   VAR_3->pge = 0;
   VAR_3->continuous_period = 0;
   FUNC_7(VAR_3);
   VAR_3->have_tma = 0;
   break;

  case 141:
   VAR_3->last_ip = 0;
   VAR_3->have_last_ip = 1;
   FUNC_6(&VAR_3->stack);
   VAR_4 = FUNC_14(VAR_3);
   if (VAR_4)
    return VAR_4;
   if (VAR_3->ip) {

    VAR_3->state.type = 0;
    return 0;
   }
   break;

  case 131:
  case 140:
  case 128:
  case 149:
  case 143:
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
  default:
   break;
  }
 }
}
