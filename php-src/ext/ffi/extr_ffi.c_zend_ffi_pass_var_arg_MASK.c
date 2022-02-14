
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
typedef int zend_ffi_type ;
struct TYPE_2__ {int type; } ;
typedef TYPE_1__ zend_ffi_cdata ;
typedef int zend_execute_data ;
typedef int uint8_t ;
typedef size_t uint32_t ;
typedef void* int64_t ;
typedef void* int32_t ;
typedef int ffi_type ;


 int VAR_0 ;







 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 double FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *,int *,int **,void**,size_t,int *) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(zval *VAR_9, ffi_type **VAR_10, void **VAR_11, uint32_t VAR_12, zend_execute_data *VAR_13)
{
 FUNC_1(VAR_9);
 switch (FUNC_7(VAR_9)) {
  case 131:
   *VAR_10 = &VAR_3;
   *(void**)VAR_11[VAR_12] = ((void*)0);
   break;
  case 133:
   *VAR_10 = &VAR_6;
   *(uint8_t*)VAR_11[VAR_12] = 0;
   break;
  case 128:
   *VAR_10 = &VAR_6;
   *(uint8_t*)VAR_11[VAR_12] = 1;
   break;
  case 132:
   if (sizeof(zend_long) == 4) {
    *VAR_10 = &VAR_4;
    *(int32_t*)VAR_11[VAR_12] = FUNC_3(VAR_9);
   } else {
    *VAR_10 = &VAR_5;
    *(int64_t*)VAR_11[VAR_12] = FUNC_3(VAR_9);
   }
   break;
  case 134:
   *VAR_10 = &VAR_2;
   *(double*)VAR_11[VAR_12] = FUNC_2(VAR_9);
   break;
  case 129:
   *VAR_10 = &VAR_3;
   *(char**)VAR_11[VAR_12] = FUNC_6(VAR_9);
   break;
  case 130:
   if (FUNC_4(VAR_9) == VAR_7) {
    zend_ffi_cdata *VAR_14 = (zend_ffi_cdata*)FUNC_5(VAR_9);
    zend_ffi_type *VAR_15 = FUNC_0(VAR_14->type);

    return FUNC_8(VAR_9, VAR_15, VAR_10, VAR_11, VAR_12, VAR_13);
   }

  default:
   FUNC_9(VAR_8, "Unsupported argument type");
   return VAR_0;
 }
 return VAR_1;
}
