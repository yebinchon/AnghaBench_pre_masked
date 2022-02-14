
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; int ch; int i64; int u64; } ;
typedef TYPE_1__ zend_ffi_val ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_0(zend_ffi_val *VAR_6)
{
 if (VAR_6->kind == VAR_4 || VAR_6->kind == VAR_5) {
  VAR_6->u64 = ~VAR_6->u64;
 } else if (VAR_6->kind == VAR_2 || VAR_6->kind == VAR_3) {
  VAR_6->i64 = ~VAR_6->i64;
 } else if (VAR_6->kind == VAR_0) {
  VAR_6->ch = ~VAR_6->ch;
 } else {
  VAR_6->kind = VAR_1;
 }
}
