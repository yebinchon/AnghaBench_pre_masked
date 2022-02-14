
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* ret_type; } ;
struct TYPE_14__ {int length; TYPE_4__* type; } ;
struct TYPE_13__ {TYPE_4__* type; } ;
struct TYPE_16__ {int kind; int size; TYPE_3__ func; int align; TYPE_2__ array; TYPE_1__ pointer; } ;
typedef TYPE_4__ zend_ffi_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;



 TYPE_4__ VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(zend_ffi_type *VAR_3, zend_ffi_type *VAR_4)
{
 VAR_4 = FUNC_1(VAR_4);
 switch (VAR_4->kind) {
  case 128:

   if (VAR_4->pointer.type == &VAR_2) {
    VAR_4->pointer.type = VAR_3;
    return FUNC_4(FUNC_1(VAR_3));
   } else {
    return FUNC_5(VAR_3, VAR_4->pointer.type);
   }
   break;
  case 130:

   if (VAR_4->array.type == &VAR_2) {
    VAR_4->array.type = VAR_3;
    if (FUNC_2(FUNC_1(VAR_3)) != VAR_1) {
     return VAR_0;
    }
   } else {
    if (FUNC_5(VAR_3, VAR_4->array.type) != VAR_1) {
     return VAR_0;
    }
   }
   VAR_4->size = VAR_4->array.length * FUNC_1(VAR_4->array.type)->size;
   VAR_4->align = FUNC_1(VAR_4->array.type)->align;
   return VAR_1;
   break;
  case 129:

   if (VAR_4->func.ret_type == &VAR_2) {
    VAR_4->func.ret_type = VAR_3;
    return FUNC_3(FUNC_1(VAR_3));
   } else {
    return FUNC_5(VAR_3, VAR_4->func.ret_type);
   }
   break;
  default:
   FUNC_0(0);
 }
}
