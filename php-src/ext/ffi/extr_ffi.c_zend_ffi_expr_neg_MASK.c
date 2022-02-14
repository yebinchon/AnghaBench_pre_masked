
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; int ch; int d; int i64; int u64; } ;
typedef TYPE_1__ zend_ffi_val ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_0(zend_ffi_val *VAR_9)
{
 if (VAR_9->kind == VAR_7 || VAR_9->kind == VAR_8) {
  VAR_9->u64 = -VAR_9->u64;
 } else if (VAR_9->kind == VAR_4 || VAR_9->kind == VAR_5) {
  VAR_9->i64 = -VAR_9->i64;
 } else if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_1 || VAR_9->kind == VAR_6) {
  VAR_9->d = -VAR_9->d;
 } else if (VAR_9->kind == VAR_0) {
  VAR_9->ch = -VAR_9->ch;
 } else {
  VAR_9->kind = VAR_2;
 }
}
