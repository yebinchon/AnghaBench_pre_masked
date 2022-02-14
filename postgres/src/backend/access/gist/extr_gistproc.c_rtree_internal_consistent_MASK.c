
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StrategyNumber ;
typedef int BOX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
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
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static bool
FUNC_4(BOX *VAR_11, BOX *VAR_12, StrategyNumber VAR_13)
{
 bool VAR_14;

 switch (VAR_13)
 {
  case 137:
   VAR_14 = !FUNC_0(FUNC_1(VAR_9,
                FUNC_2(VAR_11),
                FUNC_2(VAR_12)));
   break;
  case 132:
   VAR_14 = !FUNC_0(FUNC_1(VAR_10,
                FUNC_2(VAR_11),
                FUNC_2(VAR_12)));
   break;
  case 130:
   VAR_14 = FUNC_0(FUNC_1(VAR_7,
               FUNC_2(VAR_11),
               FUNC_2(VAR_12)));
   break;
  case 131:
   VAR_14 = !FUNC_0(FUNC_1(VAR_4,
                FUNC_2(VAR_11),
                FUNC_2(VAR_12)));
   break;
  case 129:
   VAR_14 = !FUNC_0(FUNC_1(VAR_8,
                FUNC_2(VAR_11),
                FUNC_2(VAR_12)));
   break;
  case 128:
  case 138:
  case 135:
   VAR_14 = FUNC_0(FUNC_1(VAR_3,
               FUNC_2(VAR_11),
               FUNC_2(VAR_12)));
   break;
  case 139:
  case 136:
   VAR_14 = FUNC_0(FUNC_1(VAR_7,
               FUNC_2(VAR_11),
               FUNC_2(VAR_12)));
   break;
  case 133:
   VAR_14 = !FUNC_0(FUNC_1(VAR_1,
                FUNC_2(VAR_11),
                FUNC_2(VAR_12)));
   break;
  case 140:
   VAR_14 = !FUNC_0(FUNC_1(VAR_5,
                FUNC_2(VAR_11),
                FUNC_2(VAR_12)));
   break;
  case 141:
   VAR_14 = !FUNC_0(FUNC_1(VAR_6,
                FUNC_2(VAR_11),
                FUNC_2(VAR_12)));
   break;
  case 134:
   VAR_14 = !FUNC_0(FUNC_1(VAR_2,
                FUNC_2(VAR_11),
                FUNC_2(VAR_12)));
   break;
  default:
   FUNC_3(VAR_0, "unrecognized strategy number: %d", VAR_13);
   VAR_14 = 0;
   break;
 }
 return VAR_14;
}
