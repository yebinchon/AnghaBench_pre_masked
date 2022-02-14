
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_0 ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(char *VAR_1, st32 VAR_2, ut32 VAR_3,
 ut32 *VAR_4, int *VAR_5) {
 char VAR_6;
 char *VAR_7;

 VAR_6 = *VAR_1;
 VAR_7 = ((void*)0);



 switch (VAR_6) {
  case 33:
   VAR_7 = FUNC_2((VAR_3 >> 1) |
           ((VAR_3 & 1) << 6));
   break;
  case 100:
   if (FUNC_5(VAR_1, "d(ALLx", 6)) {
    FUNC_1(VAR_0, "invalid register! %s\n", VAR_1);
    *VAR_5 = -1;
    return ((void*)0);
   }
   VAR_7 = (FUNC_0(VAR_3, VAR_5) != 0 && *VAR_5 == 0)? FUNC_6("dbl(") : ((void*)0);
   if (*VAR_5 < 0) {
    return ((void*)0);
   }
   break;
  case 41:
   if (FUNC_5(VAR_1, ")ALLx", 5)) {
    FUNC_1(VAR_0, "invalid register! %s\n", VAR_1);
    *VAR_5 = -1;
    return ((void*)0);
   }
   VAR_7 = (FUNC_0(VAR_3, VAR_5) && *VAR_5 == 0)? FUNC_6(")") : ((void*)0);
   if (*VAR_5 < 0) {
    return ((void*)0);
   }
   break;
  case 65:
   if (!FUNC_5(VAR_1, "ACLH", 4)) {
    VAR_7 = FUNC_2(VAR_3 + 64);
   } else if (!FUNC_5(VAR_1, "ACxP", 4)) {
    VAR_7 = FUNC_2(VAR_3 + 1);
   } else if (!FUNC_5(VAR_1, "ACx", 3) ||
      !FUNC_5(VAR_1, "ADR", 3) ||
      !FUNC_5(VAR_1, "ALL", 3)
     ) {
    VAR_7 = FUNC_2(VAR_3);
   }
   if (VAR_2 == 0xDF || VAR_2 == 0xE0) {
    *VAR_4 = VAR_3;
   }
   break;
  case 68:
   VAR_7 = FUNC_2(VAR_3 + 32);
   break;
  case 77:
   if (!FUNC_5(VAR_1, "MA", 2) || !FUNC_5(VAR_1, "MR", 2)) {
    VAR_7 = FUNC_2(VAR_3);
   } else {
    VAR_7 = FUNC_3(VAR_3);
   }
   break;
  case 83:
   VAR_7 = FUNC_2(VAR_3);
   break;
  case 82:
   if (!FUNC_5(VAR_1, "RA", 2) || !FUNC_5(VAR_1, "RL", 2)) {
    VAR_7 = FUNC_2(VAR_3);
   } else if (!FUNC_5(VAR_1, "RLP", 3) || !FUNC_5(VAR_1, "RxP", 3)) {
    VAR_7 = FUNC_2(VAR_3 + 1);
   } else if (!FUNC_5(VAR_1, "RX", 2)) {
    VAR_7 = FUNC_2(VAR_3);
   } else {
    VAR_7 = FUNC_3(VAR_3);
   }
   break;
  case 84:
   VAR_7 = FUNC_2(VAR_3 + 48);
   break;
  case 87:
   if (!FUNC_5(VAR_1, "WD", 2)) {
    VAR_7 = FUNC_3(VAR_3);
   } else if (!FUNC_5(VAR_1, "WA", 2)) {
    VAR_7 = FUNC_2(VAR_3);
   } else {
    VAR_7 = ((void*)0);
   }
   break;
  case 88:
   if (!FUNC_5(VAR_1, "XR", 2)) {
    VAR_7 = FUNC_4(VAR_3);
   } else if (!FUNC_5(VAR_1, "XD", 2)) {
    VAR_7 = FUNC_3(VAR_3 + 32);
   } else {
    VAR_7 = ((void*)0);
   }
   break;
  default:
   VAR_7 = ((void*)0);
   break;
 }

 return VAR_7;
}
