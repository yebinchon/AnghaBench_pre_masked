
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ length; int type; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_9__ {scalar_t__ kind; TYPE_2__ array; TYPE_1__ pointer; } ;
typedef TYPE_3__ zend_ffi_type ;


 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(zend_ffi_type *VAR_3, zend_ffi_type *VAR_4)
{
 while (1) {
  if (VAR_3 == VAR_4) {
   return 1;
  } else if (VAR_3->kind == VAR_4->kind) {
   if (VAR_3->kind < VAR_1) {
    return 1;
   } else if (VAR_3->kind == VAR_1) {
    VAR_3 = FUNC_0(VAR_3->pointer.type);
    VAR_4 = FUNC_0(VAR_4->pointer.type);
    if (VAR_3->kind == VAR_2 ||
        VAR_4->kind == VAR_2) {
        return 1;
    }
   } else if (VAR_3->kind == VAR_0 &&
              (VAR_3->array.length == VAR_4->array.length ||
               VAR_3->array.length == 0)) {
    VAR_3 = FUNC_0(VAR_3->array.type);
    VAR_4 = FUNC_0(VAR_4->array.type);
   } else {
    break;
   }
  } else if (VAR_3->kind == VAR_1 &&
             VAR_4->kind == VAR_0) {
   VAR_3 = FUNC_0(VAR_3->pointer.type);
   VAR_4 = FUNC_0(VAR_4->array.type);
   if (VAR_3->kind == VAR_2) {
       return 1;
   }
  } else {
   break;
  }
 }
 return 0;
}
