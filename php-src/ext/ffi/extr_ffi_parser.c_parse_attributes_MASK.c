
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ffi_val ;
typedef int zend_ffi_dcl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int,char const**,size_t*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,char const*,size_t,int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(int VAR_9, zend_ffi_dcl *VAR_10) {
 const char *VAR_11;
 size_t VAR_12;
 zend_ffi_val VAR_13;
 do {
  switch (VAR_9) {
   case 135:
   case 134:
    VAR_9 = FUNC_1();
    if (VAR_9 != VAR_2) {
     FUNC_5("'(' expected, got", VAR_9);
    }
    VAR_9 = FUNC_1();
    if (VAR_9 != VAR_2) {
     FUNC_5("'(' expected, got", VAR_9);
    }
    VAR_9 = FUNC_1();
    VAR_9 = FUNC_4(VAR_9, VAR_10);
    while (VAR_9 == VAR_1) {
     VAR_9 = FUNC_1();
     VAR_9 = FUNC_4(VAR_9, VAR_10);
    }
    if (VAR_9 != VAR_3) {
     FUNC_5("')' expected, got", VAR_9);
    }
    VAR_9 = FUNC_1();
    if (VAR_9 != VAR_3) {
     FUNC_5("')' expected, got", VAR_9);
    }
    VAR_9 = FUNC_1();
    break;
   case 132:
    VAR_9 = FUNC_1();
    if (VAR_9 != VAR_2) {
     FUNC_5("'(' expected, got", VAR_9);
    }
    VAR_9 = FUNC_1();
    do {
     VAR_9 = FUNC_2(VAR_9, &VAR_11, &VAR_12);
     if (VAR_9 == VAR_2) {
      VAR_9 = FUNC_1();
      VAR_9 = FUNC_3(VAR_9, &VAR_13);
      FUNC_6(VAR_10, VAR_11, VAR_12, &VAR_13);
      if (VAR_9 != VAR_3) {
       FUNC_5("')' expected, got", VAR_9);
      }
      VAR_9 = FUNC_1();
     }
    } while (VAR_9 == VAR_0);
    if (VAR_9 != VAR_3) {
     FUNC_5("')' expected, got", VAR_9);
    }
    VAR_9 = FUNC_1();
    break;
   case 133:
    VAR_9 = FUNC_1();
    FUNC_7(VAR_10, VAR_4);
    break;
   case 130:
    VAR_9 = FUNC_1();
    FUNC_7(VAR_10, VAR_6);
    break;
   case 131:
    VAR_9 = FUNC_1();
    FUNC_7(VAR_10, VAR_5);
    break;
   case 129:
    VAR_9 = FUNC_1();
    FUNC_7(VAR_10, VAR_7);
    break;
   case 128:
    VAR_9 = FUNC_1();
    FUNC_7(VAR_10, VAR_8);
    break;
   default:
    FUNC_5("unexpected", VAR_9);
  }
 } while (FUNC_0(VAR_9, (135,134,132,133,130,131,129,128), "\000\000\000\000\000\000\360\017\000\000\000\000\000"));
 return VAR_9;
}
