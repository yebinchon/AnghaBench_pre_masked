
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
typedef int zend_ffi_type_kind ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int kind; } ;
struct TYPE_8__ {int kind; int attr; TYPE_2__ pointer; TYPE_1__ enumeration; } ;
typedef TYPE_3__ zend_ffi_type ;
struct TYPE_9__ {void* ptr; int type; } ;
typedef TYPE_4__ zend_ffi_cdata ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,long double) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(zend_object *VAR_4, zval *VAR_5, int VAR_6)
{
 if (VAR_6 == VAR_1) {
  zend_ffi_cdata *VAR_7 = (zend_ffi_cdata*)VAR_4;
  zend_ffi_type *VAR_8 = FUNC_0(VAR_7->type);
  void *VAR_9 = VAR_7->ptr;
  zend_ffi_type_kind VAR_10 = VAR_8->kind;

again:
     switch (VAR_10) {
   case 138:
    FUNC_3(VAR_5, *(float*)VAR_9);
    break;
   case 140:
    FUNC_3(VAR_5, *(double*)VAR_9);
    break;





   case 128:
    FUNC_5(VAR_5, *(uint8_t*)VAR_9);
    break;
   case 132:
    FUNC_5(VAR_5, *(int8_t*)VAR_9);
    break;
   case 131:
    FUNC_5(VAR_5, *(uint16_t*)VAR_9);
    break;
   case 135:
    FUNC_5(VAR_5, *(int16_t*)VAR_9);
    break;
   case 130:
    FUNC_5(VAR_5, *(uint32_t*)VAR_9);
    break;
   case 134:
    FUNC_5(VAR_5, *(int32_t*)VAR_9);
    break;
   case 129:
    FUNC_5(VAR_5, *(uint64_t*)VAR_9);
    break;
   case 133:
    FUNC_5(VAR_5, *(int64_t*)VAR_9);
    break;
   case 142:
    FUNC_2(VAR_5, *(uint8_t*)VAR_9);
    break;
   case 141:
    FUNC_4(VAR_5, FUNC_1(*(unsigned char*)VAR_9));
    return VAR_2;
   case 139:
    VAR_10 = VAR_8->enumeration.kind;
    goto again;
   case 136:
    if (*(void**)VAR_9 == ((void*)0)) {
     FUNC_6(VAR_5);
     break;
    } else if ((VAR_8->attr & VAR_3) && FUNC_0(VAR_8->pointer.type)->kind == 141) {
     FUNC_7(VAR_5, *(char**)VAR_9);
     return VAR_2;
    }
    return VAR_0;
   default:
    return VAR_0;
  }
  FUNC_8(VAR_5);
  return VAR_2;
 }

 return VAR_0;
}
