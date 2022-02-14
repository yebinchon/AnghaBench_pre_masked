
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; int i64; } ;
typedef TYPE_1__ zend_ffi_val ;
struct TYPE_6__ {int align; } ;
typedef TYPE_2__ zend_ffi_dcl ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(zend_ffi_dcl *VAR_5, const char *VAR_6, size_t VAR_7, zend_ffi_val *VAR_8)
{
 if (VAR_7 == sizeof("align")-1 && FUNC_1(VAR_6, "align", sizeof("align")-1) == 0) {
  if ((VAR_8->kind == VAR_0 || VAR_8->kind == VAR_2 || VAR_8->kind == VAR_1 || VAR_8->kind == VAR_3)
   && VAR_8->i64 > 0 && VAR_8->i64 <= 0x80000000 && (VAR_8->i64 & (VAR_8->i64 - 1)) == 0) {
   VAR_5->align = VAR_8->i64;
  } else {
   FUNC_2("incorrect 'alignment' value at line %d", FUNC_0(VAR_4));
  }
 } else {

 }
}
