
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_val ;
typedef int zend_ffi_dcl ;







 int FUNC_0 (int,int const,char*) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,char const**,size_t*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char const*,size_t,int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(int VAR_3, zend_ffi_val *VAR_4) {
 const char *VAR_5;
 size_t VAR_6;
 zend_ffi_dcl VAR_7 = VAR_2;
 switch (VAR_3) {
  case 146:
   VAR_3 = FUNC_6(VAR_3, &VAR_5, &VAR_6);
   FUNC_24(VAR_5, VAR_6, VAR_4);
   while (FUNC_0(VAR_3, (139,138,132,136,133,135), "\010\000\000\000\000\000\002\020\000\200\003\000\000")) {
    switch (VAR_3) {
     case 139:
      VAR_3 = FUNC_1();
      VAR_3 = FUNC_10(VAR_3);
      if (VAR_3 != VAR_0) {
       FUNC_15("']' expected, got", VAR_3);
      }
      VAR_3 = FUNC_1();
      break;
     case 138:
      VAR_3 = FUNC_1();
      if (FUNC_0(VAR_3, (138,146,145,149,147,148,143,150,133,135,141,131,134,137,130,140,144,142,129,128), "\010\000\000\000\000\000\001\000\004\030\377\376\000")) {
       VAR_3 = FUNC_10(VAR_3);
      }
      if (VAR_3 != VAR_1) {
       FUNC_15("')' expected, got", VAR_3);
      }
      VAR_3 = FUNC_1();
      break;
     case 132:
      VAR_3 = FUNC_1();
      VAR_3 = FUNC_6(VAR_3, &VAR_5, &VAR_6);
      break;
     case 136:
      VAR_3 = FUNC_1();
      VAR_3 = FUNC_6(VAR_3, &VAR_5, &VAR_6);
      break;
     case 133:
      VAR_3 = FUNC_1();
      break;
     default:
      VAR_3 = FUNC_1();
      break;
    }
    FUNC_25(VAR_4);
   }
   break;
  case 145:
   VAR_3 = FUNC_7(VAR_3, VAR_4);
   break;
  case 149:
   VAR_3 = FUNC_3(VAR_3, VAR_4);
   break;
  case 147:
   VAR_3 = FUNC_5(VAR_3, VAR_4);
   break;
  case 148:
   VAR_3 = FUNC_4(VAR_3, VAR_4);
   break;
  case 143:
   VAR_3 = FUNC_8(VAR_3, VAR_4);
   break;
  case 150:
   VAR_3 = FUNC_2(VAR_3, VAR_4);
   break;
  case 138:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_11(VAR_3, VAR_4);
   if (VAR_3 != VAR_1) {
    FUNC_15("')' expected, got", VAR_3);
   }
   VAR_3 = FUNC_1();
   break;
  case 133:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_26(VAR_3, VAR_4);
   FUNC_25(VAR_4);
   break;
  case 135:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_26(VAR_3, VAR_4);
   FUNC_25(VAR_4);
   break;
  case 141:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_9(VAR_3, VAR_4);
   FUNC_25(VAR_4);
   break;
  case 131:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_9(VAR_3, VAR_4);
   FUNC_25(VAR_4);
   break;
  case 134:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_9(VAR_3, VAR_4);
   FUNC_21(VAR_4);
   break;
  case 137:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_9(VAR_3, VAR_4);
   FUNC_20(VAR_4);
   break;
  case 130:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_9(VAR_3, VAR_4);
   FUNC_19(VAR_4);
   break;
  case 140:
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_9(VAR_3, VAR_4);
   FUNC_18(VAR_4);
   break;
  case 144:
   VAR_3 = FUNC_1();
   if ((VAR_3 == 138) && FUNC_13(VAR_3)) {
    VAR_3 = FUNC_1();
    VAR_3 = FUNC_12(VAR_3, &VAR_7);
    if (VAR_3 != VAR_1) {
     FUNC_15("')' expected, got", VAR_3);
    }
    VAR_3 = FUNC_1();
    FUNC_22(VAR_4, &VAR_7);
   } else if (FUNC_0(VAR_3, (146,145,149,147,148,143,150,138,133,135,141,131,134,137,130,140,144,142,129,128), "\010\000\000\000\000\000\001\000\004\030\377\376\000")) {
    VAR_3 = FUNC_26(VAR_3, VAR_4);
    FUNC_23(VAR_4);
   } else {
    FUNC_15("unexpected", VAR_3);
   }
   break;
  case 142:
   VAR_3 = FUNC_1();
   if (VAR_3 != 138) {
    FUNC_15("'(' expected, got", VAR_3);
   }
   VAR_3 = FUNC_1();
   VAR_3 = FUNC_12(VAR_3, &VAR_7);
   if (VAR_3 != VAR_1) {
    FUNC_15("')' expected, got", VAR_3);
   }
   VAR_3 = FUNC_1();
   FUNC_16(VAR_4, &VAR_7);
   break;
  case 129:
  case 128:
   VAR_3 = FUNC_1();
   if ((VAR_3 == 138) && FUNC_14(VAR_3)) {
    VAR_3 = FUNC_1();
    VAR_3 = FUNC_12(VAR_3, &VAR_7);
    if (VAR_3 != VAR_1) {
     FUNC_15("')' expected, got", VAR_3);
    }
    VAR_3 = FUNC_1();
    FUNC_16(VAR_4, &VAR_7);
   } else if (FUNC_0(VAR_3, (146,145,149,147,148,143,150,138,133,135,141,131,134,137,130,140,144,142,129,128), "\010\000\000\000\000\000\001\000\004\030\377\376\000")) {
    VAR_3 = FUNC_26(VAR_3, VAR_4);
    FUNC_17(VAR_4);
   } else {
    FUNC_15("unexpected", VAR_3);
   }
   break;
  default:
   FUNC_15("unexpected", VAR_3);
 }
 return VAR_3;
}
