
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int attr; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_15, zend_ffi_dcl *VAR_16) {
 if (VAR_15 == VAR_0 || VAR_15 == VAR_4 || VAR_15 == VAR_5) {
  VAR_15 = FUNC_0();
  VAR_16->flags |= VAR_12;
  VAR_16->attr |= VAR_10;
 } else if (VAR_15 == VAR_1 || VAR_15 == VAR_6 || VAR_15 == VAR_7) {
  VAR_15 = FUNC_0();
  VAR_16->flags |= VAR_13;
 } else if (VAR_15 == VAR_2 || VAR_15 == VAR_8 || VAR_15 == VAR_9) {
  VAR_15 = FUNC_0();
  VAR_16->flags |= VAR_14;
 } else if (VAR_15 == VAR_3) {
  VAR_15 = FUNC_0();
  VAR_16->flags |= VAR_11;
 } else {
  FUNC_1("unexpected", VAR_15);
 }
 return VAR_15;
}
