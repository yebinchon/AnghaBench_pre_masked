
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {int type; int count; } ;
typedef enum intel_pt_pkt_ctx { ____Placeholder_intel_pt_pkt_ctx } intel_pt_pkt_ctx ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
void FUNC_0(const struct intel_pt_pkt *VAR_3,
     enum intel_pt_pkt_ctx *VAR_4)
{
 switch (VAR_3->type) {
 case 159:
 case 143:
 case 129:
 case 132:
 case 146:
 case 150:
 case 153:
 case 154:
 case 149:
 case 152:
 case 151:
 case 137:
 case 136:
 case 155:
  break;
 case 131:
 case 135:
 case 134:
 case 133:
 case 148:
 case 147:
 case 142:
 case 144:
 case 128:
 case 130:
 case 141:
 case 140:
 case 139:
 case 138:
 case 145:
 case 157:
 case 156:
  *VAR_4 = VAR_2;
  break;
 case 158:
  if (VAR_3->count)
   *VAR_4 = VAR_0;
  else
   *VAR_4 = VAR_1;
  break;
 default:
  break;
 }
}
