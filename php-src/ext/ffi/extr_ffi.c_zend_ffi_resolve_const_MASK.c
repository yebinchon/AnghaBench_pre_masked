
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* str; size_t len; int kind; int i64; } ;
typedef TYPE_2__ zend_ffi_val ;
struct TYPE_8__ {scalar_t__ kind; TYPE_1__* type; int value; } ;
typedef TYPE_3__ zend_ffi_symbol ;
struct TYPE_6__ {int kind; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_3 (scalar_t__,char const*,size_t) ;

void FUNC_4(const char *VAR_9, size_t VAR_10, zend_ffi_val *VAR_11)
{
 zend_ffi_symbol *VAR_12;

 if (FUNC_1(FUNC_0(VAR_7))) {
  VAR_11->kind = VAR_4;
  VAR_11->str = VAR_9;
  VAR_11->len = VAR_10;
  return;
 } else if (FUNC_0(VAR_8)) {
  VAR_12 = FUNC_3(FUNC_0(VAR_8), VAR_9, VAR_10);
  if (VAR_12 && VAR_12->kind == VAR_0) {
   VAR_11->i64 = VAR_12->value;
   switch (VAR_12->type->kind) {
    case 132:
    case 135:
    case 134:
     VAR_11->kind = VAR_2;
     break;
    case 133:
     VAR_11->kind = VAR_3;
     break;
    case 128:
    case 131:
    case 130:
     VAR_11->kind = VAR_5;
     break;
    case 129:
     VAR_11->kind = VAR_6;
     break;
    default:
     FUNC_2(0);
   }
   return;
  }
 }
 VAR_11->kind = VAR_1;
}
