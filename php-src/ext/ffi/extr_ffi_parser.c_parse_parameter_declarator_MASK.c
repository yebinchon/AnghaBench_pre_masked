
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ zend_ffi_dcl ;
typedef int zend_bool ;


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
 int FUNC_2 (int,char const**,size_t*) ;
 int FUNC_3 (int,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(int VAR_15, zend_ffi_dcl *VAR_16, const char **VAR_17, size_t *VAR_18) {
 zend_ffi_dcl VAR_19 = {&VAR_14, 0, 0, 0, ((void*)0)};
 zend_bool VAR_20 = 0;
 if (VAR_15 == VAR_5) {
  VAR_15 = FUNC_5(VAR_15, VAR_16);
 }
 if ((VAR_15 == VAR_3) && FUNC_6(VAR_15)) {
  VAR_15 = FUNC_1();
  if (FUNC_0(VAR_15, (VAR_6,VAR_7,VAR_9,VAR_8,VAR_11,VAR_10,VAR_12,VAR_13), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
   VAR_15 = FUNC_4(VAR_15, &VAR_19);
  }
  VAR_15 = FUNC_9(VAR_15, &VAR_19, VAR_17, VAR_18);
  if (VAR_15 != VAR_4) {
   FUNC_7("')' expected, got", VAR_15);
  }
  VAR_15 = FUNC_1();
  VAR_20 = 1;
 } else if (VAR_15 == VAR_0) {
  VAR_15 = FUNC_2(VAR_15, VAR_17, VAR_18);
 } else if (VAR_15 == VAR_2 || VAR_15 == VAR_3 || VAR_15 == VAR_4 || VAR_15 == VAR_1) {
 } else {
  FUNC_7("unexpected", VAR_15);
 }
 if (VAR_15 == VAR_2 || VAR_15 == VAR_3) {
  VAR_15 = FUNC_3(VAR_15, VAR_16, &VAR_19);
 }
 if (VAR_20) FUNC_8(VAR_16, &VAR_19);
 return VAR_15;
}
