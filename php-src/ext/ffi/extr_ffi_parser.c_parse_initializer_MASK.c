
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,char*) ;
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
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int VAR_26 ;
 unsigned char const* VAR_27 ;
 unsigned char const* VAR_28 ;

__attribute__((used)) static int FUNC_5(int VAR_29) {
 int VAR_30;
 const unsigned char *VAR_31;
 const unsigned char *VAR_32;
 int VAR_33;
 int VAR_34;
 zend_ffi_val VAR_35;
 if (VAR_29 != VAR_12) {
  FUNC_4("'=' expected, got", VAR_29);
 }
 VAR_29 = FUNC_1();
 if (FUNC_0(VAR_29, (VAR_15,VAR_4,VAR_5,VAR_1,VAR_3,VAR_2,VAR_7,VAR_0,VAR_19,VAR_17,VAR_9,VAR_22,VAR_18,VAR_16,VAR_23,VAR_10,VAR_6,VAR_8,VAR_24,VAR_25), "\010\000\000\000\000\000\001\000\004\030\377\376\000")) {
  VAR_29 = FUNC_2(VAR_29, &VAR_35);
 } else if (VAR_29 == VAR_13) {
  VAR_29 = FUNC_1();
  if (VAR_29 == VAR_14 || VAR_29 == VAR_20) {
   VAR_29 = FUNC_3(VAR_29);
  }
  VAR_29 = FUNC_5(VAR_29);
  while (1) {
   VAR_31 = VAR_27;
   VAR_32 = VAR_28;
   VAR_33 = VAR_26;
   VAR_34 = -2;
   VAR_30 = VAR_29;
   if (VAR_30 == VAR_11) {
    VAR_30 = FUNC_1();
    goto _yy_state_343_1;
   } else if (VAR_30 == VAR_21) {
    VAR_34 = 348;
    goto _yy_state_343;
   } else {
    FUNC_4("unexpected", VAR_30);
   }
_yy_state_343_1:
   if (VAR_30 == VAR_14 || VAR_30 == VAR_20 || VAR_30 == VAR_12) {
    VAR_34 = 344;
    goto _yy_state_343;
   } else if (VAR_30 == VAR_21) {
    VAR_34 = 347;
    goto _yy_state_343;
   } else {
    FUNC_4("unexpected", VAR_30);
   }
_yy_state_343:
   VAR_27 = VAR_31;
   VAR_28 = VAR_32;
   VAR_26 = VAR_33;
   if (VAR_34 != 344) {
    break;
   }
   VAR_29 = FUNC_1();
   if (VAR_29 == VAR_14 || VAR_29 == VAR_20) {
    VAR_29 = FUNC_3(VAR_29);
   }
   VAR_29 = FUNC_5(VAR_29);
  }
  if (VAR_34 == 347) {
   VAR_29 = FUNC_1();
  }
  if (VAR_29 != VAR_21) {
   FUNC_4("'}' expected, got", VAR_29);
  }
  VAR_29 = FUNC_1();
 } else {
  FUNC_4("unexpected", VAR_29);
 }
 return VAR_29;
}
