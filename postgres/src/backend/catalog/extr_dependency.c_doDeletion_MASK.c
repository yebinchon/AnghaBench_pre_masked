
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectId; int objectSubId; } ;
typedef TYPE_1__ ObjectAddress ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ,char*) ;
 int FUNC_37 (TYPE_1__ const*) ;
 char FUNC_38 (int ) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ,int,int) ;

__attribute__((used)) static void
FUNC_41(const ObjectAddress *VAR_6, int VAR_7)
{
 switch (FUNC_37(VAR_6))
 {
  case 161:
   {
    char VAR_8 = FUNC_38(VAR_6->objectId);

    if (VAR_8 == VAR_3 ||
     VAR_8 == VAR_4)
    {
     bool VAR_9 = ((VAR_7 & VAR_1) != 0);
     bool VAR_10 = ((VAR_7 & VAR_2) != 0);

     FUNC_0(VAR_6->objectSubId == 0);
     FUNC_40(VAR_6->objectId, VAR_9, VAR_10);
    }
    else
    {
     if (VAR_6->objectSubId != 0)
      FUNC_10(VAR_6->objectId,
           VAR_6->objectSubId);
     else
      FUNC_39(VAR_6->objectId);
    }





    if (VAR_8 == VAR_5)
     FUNC_1(VAR_6->objectId);
    break;
   }

  case 144:
   FUNC_19(VAR_6->objectId);
   break;

  case 129:
   FUNC_34(VAR_6->objectId);
   break;

  case 162:
   FUNC_2(VAR_6->objectId);
   break;

  case 160:
   FUNC_11(VAR_6->objectId);
   break;

  case 159:
   FUNC_12(VAR_6->objectId);
   break;

  case 158:
   FUNC_13(VAR_6->objectId);
   break;

  case 155:
   FUNC_9(VAR_6->objectId);
   break;

  case 150:
   FUNC_3(VAR_6->objectId);
   break;

  case 149:
   FUNC_5(VAR_6->objectId);
   break;

  case 147:
   FUNC_22(VAR_6->objectId);
   break;

  case 148:
   FUNC_20(VAR_6->objectId);
   break;

  case 146:
   FUNC_21(VAR_6->objectId);
   break;

  case 165:
   FUNC_6(VAR_6->objectId);
   break;

  case 164:
   FUNC_7(VAR_6->objectId);
   break;

  case 163:
   FUNC_8(VAR_6->objectId);
   break;

  case 141:
   FUNC_26(VAR_6->objectId);
   break;

  case 134:
   FUNC_33(VAR_6->objectId);
   break;

  case 139:
   FUNC_27(VAR_6->objectId);
   break;

  case 138:
   FUNC_28(VAR_6->objectId);
   break;

  case 131:
   FUNC_31(VAR_6->objectId);
   break;

  case 132:
   FUNC_30(VAR_6->objectId);
   break;

  case 130:
   FUNC_32(VAR_6->objectId);
   break;

  case 133:
   FUNC_29(VAR_6->objectId);
   break;






  case 152:
   FUNC_17(VAR_6->objectId);
   break;

  case 151:
   FUNC_18(VAR_6->objectId);
   break;

  case 128:
   FUNC_35(VAR_6->objectId);
   break;

  case 156:
   FUNC_14(VAR_6->objectId);
   break;

  case 153:
   FUNC_16(VAR_6->objectId);
   break;

  case 154:
   FUNC_15(VAR_6->objectId);
   break;

  case 145:
   FUNC_23(VAR_6->objectId);
   break;

  case 143:
   FUNC_24(VAR_6->objectId);
   break;

  case 142:
   FUNC_25(VAR_6->objectId);
   break;

  case 135:
   FUNC_4(VAR_6->objectId);
   break;




  case 140:
  case 157:
  case 136:
  case 137:
   FUNC_36(VAR_0, "global objects cannot be deleted by doDeletion");
   break;





 }
}
