
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_uchar ;
typedef int zend_long ;
struct TYPE_11__ {int type; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_12__ {scalar_t__ kind; scalar_t__ size; TYPE_2__ array; TYPE_1__ pointer; } ;
typedef TYPE_3__ zend_ffi_type ;
struct TYPE_13__ {char* ptr; int type; int std; } ;
typedef TYPE_4__ zend_ffi_cdata ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(zend_uchar VAR_8, zval *VAR_9, zval *VAR_10, zval *VAR_11)
{
 zend_long VAR_12;

 FUNC_2(VAR_10);
 FUNC_2(VAR_11);
 if (FUNC_7(VAR_10) == VAR_1 && FUNC_5(VAR_10) == VAR_7) {
  zend_ffi_cdata *VAR_13 = (zend_ffi_cdata*)FUNC_6(VAR_10);
  zend_ffi_type *VAR_14 = FUNC_1(VAR_13->type);

  if (VAR_14->kind == VAR_5 || VAR_14->kind == VAR_4) {
   if (VAR_8 == VAR_3) {
    VAR_12 = FUNC_10(VAR_11);
    FUNC_4(VAR_9, FUNC_8(VAR_13, VAR_14, VAR_12));
    if (VAR_9 == VAR_10) {
     FUNC_0(&VAR_13->std);
    }
    return VAR_2;
   } else if (VAR_8 == VAR_6) {
    if (FUNC_7(VAR_11) == VAR_1 && FUNC_5(VAR_11) == VAR_7) {
     zend_ffi_cdata *VAR_15 = (zend_ffi_cdata*)FUNC_6(VAR_11);
     zend_ffi_type *VAR_16 = FUNC_1(VAR_15->type);

     if (VAR_16->kind == VAR_5 || VAR_16->kind == VAR_4) {
      zend_ffi_type *VAR_17, *VAR_18;
      char *VAR_19, *VAR_20;

      if (VAR_14->kind == VAR_5) {
       VAR_17 = FUNC_1(VAR_14->pointer.type);
       VAR_19 = (char*)(*(void**)VAR_13->ptr);
      } else {
       VAR_17 = FUNC_1(VAR_14->array.type);
       VAR_19 = VAR_13->ptr;
      }
      if (VAR_16->kind == VAR_5) {
       VAR_18 = FUNC_1(VAR_16->pointer.type);
       VAR_20 = (char*)(*(void**)VAR_15->ptr);
      } else {
       VAR_18 = FUNC_1(VAR_16->array.type);
       VAR_20 = VAR_15->ptr;
      }
      if (FUNC_9(VAR_17, VAR_18)) {
       FUNC_3(VAR_9,
        (zend_long)(VAR_19 - VAR_20) / (zend_long)VAR_17->size);
       return VAR_2;
      }
     }
    }
    VAR_12 = FUNC_10(VAR_11);
    FUNC_4(VAR_9, FUNC_8(VAR_13, VAR_14, -VAR_12));
    if (VAR_9 == VAR_10) {
     FUNC_0(&VAR_13->std);
    }
    return VAR_2;
   }
  }
 } else if (FUNC_7(VAR_11) == VAR_1 && FUNC_5(VAR_11) == VAR_7) {
  zend_ffi_cdata *VAR_21 = (zend_ffi_cdata*)FUNC_6(VAR_11);
  zend_ffi_type *VAR_22 = FUNC_1(VAR_21->type);

  if (VAR_22->kind == VAR_5 || VAR_22->kind == VAR_4) {
   if (VAR_8 == VAR_3) {
    VAR_12 = FUNC_10(VAR_10);
    FUNC_4(VAR_9, FUNC_8(VAR_21, VAR_22, VAR_12));
    return VAR_2;
   }
  }
 }

 return VAR_0;
}
