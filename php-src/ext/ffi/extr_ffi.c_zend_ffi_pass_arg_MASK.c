
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_long ;
typedef int zend_ffi_type_kind ;
struct TYPE_14__ {int kind; } ;
struct TYPE_15__ {int type; } ;
struct TYPE_16__ {int kind; int attr; TYPE_1__ enumeration; TYPE_2__ pointer; } ;
typedef TYPE_3__ zend_ffi_type ;
struct TYPE_17__ {void* ptr; int type; } ;
typedef TYPE_4__ zend_ffi_cdata ;
typedef int zend_execute_data ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int ffi_type ;
struct TYPE_13__ {int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_10__* FUNC_0 (int ) ;





 int const VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_8 (TYPE_10__*,int *) ;
 int VAR_20 ;
 int FUNC_9 (TYPE_3__*,TYPE_10__*) ;
 int * FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *,TYPE_3__*,size_t,int *) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int *) ;
 double FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *,int **) ;

__attribute__((used)) static int FUNC_19(zval *VAR_21, zend_ffi_type *VAR_22, ffi_type **VAR_23, void **VAR_24, uint32_t VAR_25, zend_execute_data *VAR_26)
{
 zend_long VAR_27;
 double VAR_28;
 zend_string *VAR_29, *VAR_30;
 zend_ffi_type_kind VAR_31 = VAR_22->kind;

 FUNC_3(VAR_21);

again:
    switch (VAR_31) {
  case 139:
   VAR_28 = FUNC_16(VAR_21);
   *VAR_23 = &VAR_9;
   *(float*)VAR_24[VAR_25] = (float)VAR_28;
   break;
  case 141:
   VAR_28 = FUNC_16(VAR_21);
   *VAR_23 = &VAR_8;
   *(double*)VAR_24[VAR_25] = VAR_28;
   break;







  case 128:
   VAR_27 = FUNC_17(VAR_21);
   *VAR_23 = &VAR_18;
   *(uint8_t*)VAR_24[VAR_25] = (uint8_t)VAR_27;
   break;
  case 133:
   VAR_27 = FUNC_17(VAR_21);
   *VAR_23 = &VAR_14;
   *(int8_t*)VAR_24[VAR_25] = (int8_t)VAR_27;
   break;
  case 131:
   VAR_27 = FUNC_17(VAR_21);
   *VAR_23 = &VAR_15;
   *(uint16_t*)VAR_24[VAR_25] = (uint16_t)VAR_27;
   break;
  case 136:
   VAR_27 = FUNC_17(VAR_21);
   *VAR_23 = &VAR_11;
   *(int16_t*)VAR_24[VAR_25] = (int16_t)VAR_27;
   break;
  case 130:
   VAR_27 = FUNC_17(VAR_21);
   *VAR_23 = &VAR_16;
   *(uint32_t*)VAR_24[VAR_25] = (uint32_t)VAR_27;
   break;
  case 135:
   VAR_27 = FUNC_17(VAR_21);
   *VAR_23 = &VAR_12;
   *(int32_t*)VAR_24[VAR_25] = (int32_t)VAR_27;
   break;
  case 129:
   VAR_27 = FUNC_17(VAR_21);
   *VAR_23 = &VAR_17;
   *(uint64_t*)VAR_24[VAR_25] = (uint64_t)VAR_27;
   break;
  case 134:
   VAR_27 = FUNC_17(VAR_21);
   *VAR_23 = &VAR_13;
   *(int64_t*)VAR_24[VAR_25] = (int64_t)VAR_27;
   break;
  case 137:
   *VAR_23 = &VAR_10;
   if (FUNC_7(VAR_21) == VAR_1) {
    *(void**)VAR_24[VAR_25] = ((void*)0);
    return VAR_4;
   } else if (FUNC_7(VAR_21) == VAR_3
           && ((FUNC_0(VAR_22->pointer.type)->kind == 142)
            || (FUNC_0(VAR_22->pointer.type)->kind == VAR_7))) {
    *(void**)VAR_24[VAR_25] = FUNC_6(VAR_21);
    return VAR_4;
   } else if (FUNC_7(VAR_21) == VAR_2 && FUNC_4(VAR_21) == VAR_19) {
    zend_ffi_cdata *VAR_32 = (zend_ffi_cdata*)FUNC_5(VAR_21);

    if (FUNC_9(VAR_22, FUNC_0(VAR_32->type))) {
     if (FUNC_0(VAR_32->type)->kind == 137) {
      if (!VAR_32->ptr) {
       FUNC_14(VAR_20, "NULL pointer dereference");
       return VAR_0;
      }
      *(void**)VAR_24[VAR_25] = *(void**)VAR_32->ptr;
     } else {
      *(void**)VAR_24[VAR_25] = VAR_32->ptr;
     }
     return VAR_4;
    }
   }
   FUNC_11(VAR_21, VAR_22, VAR_25, VAR_26);
   return VAR_0;
  case 143:
   *VAR_23 = &VAR_18;
   *(uint8_t*)VAR_24[VAR_25] = FUNC_13(VAR_21);
   break;
  case 142:
   VAR_29 = FUNC_18(VAR_21, &VAR_30);
   *VAR_23 = &VAR_14;
   *(char*)VAR_24[VAR_25] = FUNC_2(VAR_29)[0];
   if (FUNC_1(VAR_29) != 1) {
    FUNC_11(VAR_21, VAR_22, VAR_25, VAR_26);
   }
   FUNC_15(VAR_30);
   break;
  case 140:
   VAR_31 = VAR_22->enumeration.kind;
   goto again;
  case 132:
   if (!(VAR_22->attr & VAR_5)
    && FUNC_7(VAR_21) == VAR_2 && FUNC_4(VAR_21) == VAR_19) {
    zend_ffi_cdata *VAR_33 = (zend_ffi_cdata*)FUNC_5(VAR_21);

    if (FUNC_9(VAR_22, FUNC_0(VAR_33->type))) {

     ffi_type *VAR_34 = FUNC_10(VAR_22);
     if (VAR_34) {
      *VAR_23 = VAR_34;
      VAR_24[VAR_25] = VAR_33->ptr;
      break;
     }
    }
   }
   FUNC_11(VAR_21, VAR_22, VAR_25, VAR_26);
   return VAR_0;
  default:
   FUNC_12(VAR_22);
   return VAR_0;
 }
 return VAR_4;
}
