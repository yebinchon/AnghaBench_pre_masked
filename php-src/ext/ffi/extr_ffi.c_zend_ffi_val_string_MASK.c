
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* str; size_t len; int kind; } ;
typedef TYPE_1__ zend_ffi_val ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(zend_ffi_val *VAR_2, const char *VAR_3, size_t VAR_4)
{
 if (VAR_3[0] != '\"') {
  VAR_2->kind = VAR_0;
 } else {
  VAR_2->kind = VAR_1;
  VAR_2->str = VAR_3 + 1;
  VAR_2->len = VAR_4 - 2;
 }
}
