
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ zend_ffi_dcl ;


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
 scalar_t__ FUNC_0 (int,int ,char*) ;
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
 int VAR_56 ;
 int FUNC_1 () ;
 int FUNC_2 (int,char const**,size_t*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char const*,size_t,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(int VAR_57, zend_ffi_dcl *VAR_58) {
 if (VAR_57 != VAR_5) {
  FUNC_5("'enum' expected, got", VAR_57);
 }
 VAR_57 = FUNC_1();
 VAR_58->flags |= VAR_56;
 if (FUNC_0(VAR_57, (VAR_38,VAR_39,VAR_45,VAR_40,VAR_51,VAR_46,VAR_52,VAR_53), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
  VAR_57 = FUNC_3(VAR_57, VAR_58);
 }
 if (VAR_57 == VAR_9) {
  const char *VAR_59;
  size_t VAR_60;
  VAR_57 = FUNC_2(VAR_57, &VAR_59, &VAR_60);
  if (VAR_57 == VAR_30) {
   FUNC_6(VAR_59, VAR_60, VAR_58, 0);
   VAR_57 = FUNC_1();
   VAR_57 = FUNC_4(VAR_57, VAR_58);
   if (VAR_57 != VAR_34) {
    FUNC_5("'}' expected, got", VAR_57);
   }
   VAR_57 = FUNC_1();
   if (FUNC_0(VAR_57, (VAR_38,VAR_39,VAR_45,VAR_40,VAR_51,VAR_46,VAR_52,VAR_53), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
    VAR_57 = FUNC_3(VAR_57, VAR_58);
   }
  } else if (FUNC_0(VAR_57, (VAR_19,VAR_7,VAR_17,VAR_0,VAR_13,VAR_10,VAR_47,VAR_48,VAR_33,VAR_24,VAR_38,VAR_39,VAR_45,VAR_40,VAR_51,VAR_46,VAR_52,VAR_53,VAR_3,VAR_43,VAR_44,VAR_14,VAR_49,VAR_50,VAR_23,VAR_54,VAR_55,VAR_25,VAR_22,VAR_1,VAR_15,VAR_11,VAR_12,VAR_8,VAR_4,VAR_16,VAR_21,VAR_26,VAR_29,VAR_2,VAR_41,VAR_42,VAR_18,VAR_20,VAR_5,VAR_9,VAR_37,VAR_32,VAR_36,VAR_27,VAR_31,VAR_34,VAR_28,VAR_35,VAR_6), "\371\377\377\377\377\167\363\017\000\000\000\002\000")) {
   FUNC_6(VAR_59, VAR_60, VAR_58, 1);
  } else {
   FUNC_5("unexpected", VAR_57);
  }
 } else if (VAR_57 == VAR_30) {
  VAR_57 = FUNC_1();
  FUNC_7(VAR_58);
  VAR_57 = FUNC_4(VAR_57, VAR_58);
  if (VAR_57 != VAR_34) {
   FUNC_5("'}' expected, got", VAR_57);
  }
  VAR_57 = FUNC_1();
  if (FUNC_0(VAR_57, (VAR_38,VAR_39,VAR_45,VAR_40,VAR_51,VAR_46,VAR_52,VAR_53), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
   VAR_57 = FUNC_3(VAR_57, VAR_58);
  }
 } else {
  FUNC_5("unexpected", VAR_57);
 }
 return VAR_57;
}
