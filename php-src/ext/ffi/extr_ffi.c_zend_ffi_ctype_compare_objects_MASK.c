
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_ffi_type ;
struct TYPE_2__ {int type; } ;
typedef TYPE_1__ zend_ffi_ctype ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(zval *VAR_3, zval *VAR_4)
{
 if (FUNC_3(VAR_3) == VAR_0 && FUNC_1(VAR_3) == VAR_1 &&
     FUNC_3(VAR_4) == VAR_0 && FUNC_1(VAR_4) == VAR_1) {
  zend_ffi_ctype *VAR_5 = (zend_ffi_ctype*)FUNC_2(VAR_3);
  zend_ffi_ctype *VAR_6 = (zend_ffi_ctype*)FUNC_2(VAR_4);
  zend_ffi_type *VAR_7 = FUNC_0(VAR_5->type);
  zend_ffi_type *VAR_8 = FUNC_0(VAR_6->type);

  if (FUNC_4(VAR_7, VAR_8)) {
   return 0;
  } else {
   return 1;
  }
 }
 FUNC_5(VAR_2, "Comparison of incompatible C types");
 return 0;
}
