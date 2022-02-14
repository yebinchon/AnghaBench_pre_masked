
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
 int FUNC_1 () ;
 int FUNC_2 (int,char const**,size_t*) ;
 int FUNC_3 (int,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(int VAR_14, zend_ffi_dcl *VAR_15, const char **VAR_16, size_t *VAR_17) {
 zend_ffi_dcl VAR_18 = {&VAR_13, 0, 0, 0, ((void*)0)};
 zend_bool VAR_19 = 0;
 if (VAR_14 == VAR_4) {
  VAR_14 = FUNC_5(VAR_14, VAR_15);
 }
 if (VAR_14 == VAR_0) {
  VAR_14 = FUNC_2(VAR_14, VAR_16, VAR_17);
 } else if (VAR_14 == VAR_2) {
  VAR_14 = FUNC_1();
  if (FUNC_0(VAR_14, (VAR_5,VAR_6,VAR_8,VAR_7,VAR_10,VAR_9,VAR_11,VAR_12), "\000\000\000\000\000\000\360\017\000\000\000\000\000")) {
   VAR_14 = FUNC_4(VAR_14, &VAR_18);
  }
  VAR_14 = FUNC_8(VAR_14, &VAR_18, VAR_16, VAR_17);
  if (VAR_14 != VAR_3) {
   FUNC_6("')' expected, got", VAR_14);
  }
  VAR_14 = FUNC_1();
  VAR_19 = 1;
 } else {
  FUNC_6("unexpected", VAR_14);
 }
 if (VAR_14 == VAR_1 || VAR_14 == VAR_2) {
  VAR_14 = FUNC_3(VAR_14, VAR_15, &VAR_18);
 }
 if (VAR_19) FUNC_7(VAR_15, &VAR_18);
 return VAR_14;
}
