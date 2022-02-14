
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_val ;
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
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *,char const**,size_t*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,char const*,size_t,int *,int *) ;
 int FUNC_7 (int *,char const*,size_t,int *) ;

__attribute__((used)) static int FUNC_8(int VAR_15, zend_ffi_dcl *VAR_16, zend_ffi_dcl *VAR_17) {
 const char *VAR_18 = ((void*)0);
 size_t VAR_19 = 0;
 zend_ffi_val VAR_20;
 if (VAR_15 == VAR_6 || VAR_15 == VAR_0 || VAR_15 == VAR_3) {
  VAR_15 = FUNC_4(VAR_15, VAR_17, &VAR_18, &VAR_19);
  if (VAR_15 == VAR_1) {
   VAR_15 = FUNC_1();
   VAR_15 = FUNC_3(VAR_15, &VAR_20);
   if (FUNC_0(VAR_15, (VAR_7,VAR_8,VAR_10,VAR_9,VAR_12,VAR_11,VAR_13,VAR_14), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
    VAR_15 = FUNC_2(VAR_15, VAR_17);
   }
   FUNC_6(VAR_16, VAR_18, VAR_19, VAR_17, &VAR_20);
  } else if (FUNC_0(VAR_15, (VAR_7,VAR_8,VAR_10,VAR_9,VAR_12,VAR_11,VAR_13,VAR_14,VAR_2,VAR_5,VAR_4), "\140\000\000\000\000\020\360\017\000\000\000\000\000")) {
   if (FUNC_0(VAR_15, (VAR_7,VAR_8,VAR_10,VAR_9,VAR_12,VAR_11,VAR_13,VAR_14), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
    VAR_15 = FUNC_2(VAR_15, VAR_17);
   }
   FUNC_7(VAR_16, VAR_18, VAR_19, VAR_17);
  } else {
   FUNC_5("unexpected", VAR_15);
  }
 } else if (VAR_15 == VAR_1) {
  VAR_15 = FUNC_1();
  VAR_15 = FUNC_3(VAR_15, &VAR_20);
  FUNC_6(VAR_16, ((void*)0), 0, VAR_17, &VAR_20);
 } else {
  FUNC_5("unexpected", VAR_15);
 }
 return VAR_15;
}
