
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_val ;
typedef int zend_ffi_dcl ;


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
 scalar_t__ FUNC_0 (int,int,char*) ;
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
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *,char const**,size_t*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char const*,size_t,int *) ;

__attribute__((used)) static int FUNC_9(int VAR_56) {
 while (FUNC_0(VAR_56, (VAR_44,VAR_19,VAR_6,VAR_16,VAR_0,VAR_12,VAR_9,VAR_46,VAR_47,VAR_31,VAR_24,VAR_36,VAR_37,VAR_43,VAR_38,VAR_50,VAR_45,VAR_51,VAR_52,VAR_3,VAR_41,VAR_42,VAR_13,VAR_48,VAR_49,VAR_23,VAR_53,VAR_54,VAR_25,VAR_22,VAR_1,VAR_14,VAR_10,VAR_11,VAR_7,VAR_4,VAR_15,VAR_21,VAR_26,VAR_28,VAR_2,VAR_39,VAR_40,VAR_18,VAR_20,VAR_5,VAR_8), "\202\377\377\377\377\107\360\017\000\000\000\002\000")) {
  zend_ffi_dcl VAR_57 = VAR_55;
  if (VAR_56 == VAR_44) {
   VAR_56 = FUNC_1();
  }
  VAR_56 = FUNC_4(VAR_56, &VAR_57);
  if (VAR_56 == VAR_34 || VAR_56 == VAR_8 || VAR_56 == VAR_30) {
   const char *VAR_58;
   size_t VAR_59;
   zend_ffi_dcl VAR_60;
   VAR_60 = VAR_57;
   VAR_56 = FUNC_5(VAR_56, &VAR_60, &VAR_58, &VAR_59);
   if (VAR_56 == VAR_35) {
    zend_ffi_val VAR_61;
    VAR_56 = FUNC_1();
    if (VAR_56 != VAR_30) {
     FUNC_7("'(' expected, got", VAR_56);
    }
    VAR_56 = FUNC_1();
    do {
     VAR_56 = FUNC_2(VAR_56, &VAR_61);
    } while (VAR_56 == VAR_17);
    if (VAR_56 != VAR_32) {
     FUNC_7("')' expected, got", VAR_56);
    }
    VAR_56 = FUNC_1();
   }
   if (FUNC_0(VAR_56, (VAR_36,VAR_37,VAR_43,VAR_38,VAR_50,VAR_45,VAR_51,VAR_52), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
    VAR_56 = FUNC_3(VAR_56, &VAR_60);
   }
   if (VAR_56 == VAR_29) {
    VAR_56 = FUNC_6(VAR_56);
   }
   FUNC_8(VAR_58, VAR_59, &VAR_60);
   while (VAR_56 == VAR_27) {
    VAR_56 = FUNC_1();
    VAR_60 = VAR_57;
    VAR_56 = FUNC_5(VAR_56, &VAR_60, &VAR_58, &VAR_59);
    if (FUNC_0(VAR_56, (VAR_36,VAR_37,VAR_43,VAR_38,VAR_50,VAR_45,VAR_51,VAR_52), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
     VAR_56 = FUNC_3(VAR_56, &VAR_60);
    }
    if (VAR_56 == VAR_29) {
     VAR_56 = FUNC_6(VAR_56);
    }
    FUNC_8(VAR_58, VAR_59, &VAR_60);
   }
  }
  if (VAR_56 != VAR_33) {
   FUNC_7("';' expected, got", VAR_56);
  }
  VAR_56 = FUNC_1();
 }
 return VAR_56;
}
