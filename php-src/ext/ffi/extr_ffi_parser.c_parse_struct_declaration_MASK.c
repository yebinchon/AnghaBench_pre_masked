
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_dcl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,char*) ;
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
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *,int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(int VAR_16, zend_ffi_dcl *VAR_17) {
 zend_ffi_dcl VAR_18 = VAR_15;
 VAR_16 = FUNC_3(VAR_16, &VAR_18);
 if (VAR_16 == VAR_5 || VAR_16 == VAR_4) {
  FUNC_6(VAR_17, &VAR_18);
 } else if (VAR_16 == VAR_6 || VAR_16 == VAR_0 || VAR_16 == VAR_3 || VAR_16 == VAR_1) {
  VAR_16 = FUNC_4(VAR_16, VAR_17, &VAR_18);
  while (VAR_16 == VAR_2) {
   VAR_16 = FUNC_1();
   zend_ffi_dcl VAR_19 = VAR_18;
   if (FUNC_0(VAR_16, (VAR_7,VAR_8,VAR_10,VAR_9,VAR_12,VAR_11,VAR_13,VAR_14), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
    VAR_16 = FUNC_2(VAR_16, &VAR_19);
   }
   VAR_16 = FUNC_4(VAR_16, VAR_17, &VAR_19);
  }
 } else {
  FUNC_5("unexpected", VAR_16);
 }
 return VAR_16;
}
