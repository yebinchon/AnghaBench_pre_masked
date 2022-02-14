
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int classId; scalar_t__ objectSubId; } ;
typedef int ObjectClass ;
typedef TYPE_1__ ObjectAddress ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (int ,char*,int) ;

ObjectClass
FUNC_1(const ObjectAddress *VAR_39)
{

 if (VAR_39->classId != 140 &&
  VAR_39->objectSubId != 0)
  FUNC_0(VAR_0, "invalid non-zero objectSubId for object class %u",
    VAR_39->classId);

 switch (VAR_39->classId)
 {
  case 140:

   return VAR_5;

  case 143:
   return VAR_22;

  case 129:
   return VAR_37;

  case 160:
   return VAR_4;

  case 159:
   return VAR_6;

  case 158:
   return VAR_7;

  case 157:
   return VAR_8;

  case 162:
   return VAR_11;

  case 150:
   return VAR_16;

  case 149:
   return VAR_17;

  case 145:
   return VAR_19;

  case 147:
   return VAR_18;

  case 146:
   return VAR_20;

  case 163:
   return VAR_1;

  case 165:
   return VAR_2;

  case 164:
   return VAR_3;

  case 139:
   return VAR_25;

  case 130:
   return VAR_32;

  case 148:
   return VAR_27;

  case 138:
   return VAR_28;

  case 134:
   return VAR_35;

  case 135:
   return VAR_34;

  case 133:
   return VAR_36;

  case 136:
   return VAR_33;

  case 161:
   return VAR_26;

  case 156:
   return VAR_9;

  case 132:
   return VAR_30;

  case 152:
   return VAR_14;

  case 151:
   return VAR_15;

  case 128:
   return VAR_38;

  case 155:
   return VAR_10;

  case 153:
   return VAR_13;

  case 154:
   return VAR_12;

  case 144:
   return VAR_21;

  case 141:
   return VAR_23;

  case 142:
   return VAR_24;

  case 137:
   return VAR_29;

  case 131:
   return VAR_31;
 }


 FUNC_0(VAR_0, "unrecognized object class: %u", VAR_39->classId);
 return VAR_5;
}
