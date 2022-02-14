
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct madera_priv {int* domain_group_ref; TYPE_1__* madera; } ;
struct TYPE_2__ {int dev; } ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;

__attribute__((used)) static bool FUNC_1(const struct madera_priv *VAR_22,
           unsigned int VAR_23)
{
 int VAR_24;

 switch (VAR_23) {
 case 147:
  VAR_24 = VAR_22->domain_group_ref[VAR_13];
  break;
 case 165:
 case 164:
  VAR_24 = VAR_22->domain_group_ref[VAR_4];
  break;
 case 163:
 case 162:
  VAR_24 = VAR_22->domain_group_ref[VAR_5];
  break;
 case 146:
 case 145:
  VAR_24 = VAR_22->domain_group_ref[VAR_14];
  break;
 case 144:
 case 143:
  VAR_24 = VAR_22->domain_group_ref[VAR_15];
  break;
 case 142:
 case 141:
  VAR_24 = VAR_22->domain_group_ref[VAR_16];
  break;
 case 140:
 case 139:
  VAR_24 = VAR_22->domain_group_ref[VAR_17];
  break;
 case 138:
  VAR_24 = VAR_22->domain_group_ref[VAR_18];
  break;
 case 128:
  VAR_24 = VAR_22->domain_group_ref[VAR_21];
  break;
 case 161:
 case 160:
  VAR_24 = VAR_22->domain_group_ref[VAR_6];
  break;
 case 159:
 case 158:
  VAR_24 = VAR_22->domain_group_ref[VAR_7];
  break;
 case 157:
 case 156:
  VAR_24 = VAR_22->domain_group_ref[VAR_8];
  break;
 case 155:
 case 154:
  VAR_24 = VAR_22->domain_group_ref[VAR_9];
  break;
 case 153:
 case 152:
  VAR_24 = VAR_22->domain_group_ref[VAR_10];
  break;
 case 151:
 case 150:
  VAR_24 = VAR_22->domain_group_ref[VAR_11];
  break;
 case 149:
 case 148:
  VAR_24 = VAR_22->domain_group_ref[VAR_12];
  break;
 case 169:
  VAR_24 = VAR_22->domain_group_ref[VAR_0];
  break;
 case 168:
  VAR_24 = VAR_22->domain_group_ref[VAR_1];
  break;
 case 167:
  VAR_24 = VAR_22->domain_group_ref[VAR_2];
  break;
 case 166:
  VAR_24 = VAR_22->domain_group_ref[VAR_3];
  break;
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_24 = VAR_22->domain_group_ref[VAR_20];
  break;
 case 137:
  VAR_24 = VAR_22->domain_group_ref[VAR_19];
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_22->madera->dev, "Rate reg 0x%x group ref %d\n", VAR_23, VAR_24);

 if (VAR_24)
  return 0;
 else
  return 1;
}
