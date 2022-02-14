
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int type; int payload; int count; } ;
struct intel_pt_decoder {int in_psb; int have_tma; int exec_mode; int cr3; int pge; TYPE_2__ state; int period_type; TYPE_1__ packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (struct intel_pt_decoder*) ;
 int FUNC_3 (struct intel_pt_decoder*) ;
 int FUNC_4 (struct intel_pt_decoder*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct intel_pt_decoder*) ;
 int FUNC_7 (struct intel_pt_decoder*) ;
 int FUNC_8 (struct intel_pt_decoder*) ;

__attribute__((used)) static int FUNC_9(struct intel_pt_decoder *VAR_4)
{
 int VAR_5;

 VAR_4->in_psb = 1;

 while (1) {
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5)
   goto out;

  switch (VAR_4->packet.type) {
  case 140:
   VAR_5 = 0;
   goto out;

  case 134:
  case 133:
  case 135:
  case 131:
  case 130:
  case 159:
  case 141:
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
   VAR_4->have_tma = 0;
   FUNC_5("ERROR: Unexpected packet\n");
   VAR_5 = -VAR_1;
   goto out;

  case 144:
   VAR_5 = FUNC_6(VAR_4);
   goto out;

  case 129:
   FUNC_3(VAR_4);
   break;

  case 132:
   FUNC_2(VAR_4);
   break;

  case 154:
   FUNC_0(VAR_4);
   break;

  case 148:
   VAR_4->exec_mode = VAR_4->packet.payload;
   break;

  case 142:
   VAR_4->cr3 = VAR_4->packet.payload & (VAR_0 - 1);
   break;

  case 150:
   VAR_4->pge = 1;
   if (VAR_4->packet.count)
    FUNC_7(VAR_4);
   break;

  case 147:
   FUNC_8(VAR_4);
   break;

  case 146:
   FUNC_1(VAR_4);
   if (VAR_4->period_type == VAR_3)
    VAR_4->state.type |= VAR_2;
   break;

  case 153:
  case 128:
  case 149:
  case 143:
  default:
   break;
  }
 }
out:
 VAR_4->in_psb = 0;

 return VAR_5;
}
