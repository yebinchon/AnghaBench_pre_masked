
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; int d; } ;
typedef TYPE_1__ zend_ffi_val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *) ;

void FUNC_1(zend_ffi_val *VAR_3, const char *VAR_4, size_t VAR_5)
{
 VAR_3->d = FUNC_0(VAR_4, ((void*)0));
 if (VAR_4[VAR_5-1] == 'f' || VAR_4[VAR_5-1] == 'F') {
  VAR_3->kind = VAR_1;
 } else if (VAR_4[VAR_5-1] == 'l' || VAR_4[VAR_5-1] == 'L') {
  VAR_3->kind = VAR_2;
 } else {
  VAR_3->kind = VAR_0;
 }
}
