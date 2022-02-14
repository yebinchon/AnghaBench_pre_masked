
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ zend_ffi_type ;
struct TYPE_5__ {scalar_t__ ptr; int type; } ;
typedef TYPE_2__ zend_ffi_cdata ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(zval *VAR_4, zval *VAR_5)
{
 if (FUNC_3(VAR_4) == VAR_0 && FUNC_1(VAR_4) == VAR_2 &&
     FUNC_3(VAR_5) == VAR_0 && FUNC_1(VAR_5) == VAR_2) {
  zend_ffi_cdata *VAR_6 = (zend_ffi_cdata*)FUNC_2(VAR_4);
  zend_ffi_cdata *VAR_7 = (zend_ffi_cdata*)FUNC_2(VAR_5);
  zend_ffi_type *VAR_8 = FUNC_0(VAR_6->type);
  zend_ffi_type *VAR_9 = FUNC_0(VAR_7->type);

  if (VAR_8->kind == VAR_1 && VAR_9->kind == VAR_1) {
   void *VAR_10 = *(void**)VAR_6->ptr;
   void *VAR_11 = *(void**)VAR_7->ptr;

   if (!VAR_10 || !VAR_11) {
    FUNC_4(VAR_3, "NULL pointer dereference");
    return 0;
   }
   return VAR_10 == VAR_11 ? 0 : (VAR_10 < VAR_11 ? -1 : 1);
  }
 }
 FUNC_4(VAR_3, "Comparison of incompatible C types");
 return 0;
}
