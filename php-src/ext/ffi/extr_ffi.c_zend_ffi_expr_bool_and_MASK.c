
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; int i64; } ;
typedef TYPE_1__ zend_ffi_val ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(zend_ffi_val *VAR_2, zend_ffi_val *VAR_3)
{
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 if (VAR_2->kind == VAR_1 && VAR_3->kind == VAR_1) {
  VAR_2->i64 = VAR_2->i64 && VAR_3->i64;
 } else {
  VAR_2->kind = VAR_0;
 }
}
