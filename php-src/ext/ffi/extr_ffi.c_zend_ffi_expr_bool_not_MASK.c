
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; int i64; } ;
typedef TYPE_1__ zend_ffi_val ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(zend_ffi_val *VAR_1)
{
 FUNC_0(VAR_1);
 if (VAR_1->kind == VAR_0) {
  VAR_1->i64 = !VAR_1->i64;
 }
}
