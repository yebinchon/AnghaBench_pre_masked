
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ zend_ffi_dcl ;
typedef int zend_bool ;


 scalar_t__ FUNC_0 (int,int ,char*) ;
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
 int VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (int,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(int VAR_13, zend_ffi_dcl *VAR_14) {
 zend_ffi_dcl VAR_15 = {&VAR_12, 0, 0, 0, ((void*)0)};
 zend_bool VAR_16 = 0;
 if (VAR_13 == VAR_3) {
  VAR_13 = FUNC_4(VAR_13, VAR_14);
 }
 if ((VAR_13 == VAR_1) && FUNC_5(VAR_13)) {
  VAR_13 = FUNC_1();
  if (FUNC_0(VAR_13, (VAR_4,VAR_5,VAR_7,VAR_6,VAR_9,VAR_8,VAR_10,VAR_11), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
   VAR_13 = FUNC_3(VAR_13, &VAR_15);
  }
  VAR_13 = FUNC_8(VAR_13, &VAR_15);
  if (VAR_13 != VAR_2) {
   FUNC_6("')' expected, got", VAR_13);
  }
  VAR_13 = FUNC_1();
  VAR_16 = 1;
 }
 if (VAR_13 == VAR_0 || VAR_13 == VAR_1) {
  VAR_13 = FUNC_2(VAR_13, VAR_14, &VAR_15);
 }
 if (VAR_16) FUNC_7(VAR_14, &VAR_15);
 return VAR_13;
}
