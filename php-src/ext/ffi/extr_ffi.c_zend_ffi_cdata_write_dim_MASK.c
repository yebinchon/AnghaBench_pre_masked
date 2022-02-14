
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef int zend_object ;
typedef int zend_long ;
struct TYPE_8__ {int type; } ;
struct TYPE_7__ {scalar_t__ length; int type; } ;
struct TYPE_9__ {scalar_t__ kind; int attr; int size; TYPE_2__ pointer; TYPE_1__ array; } ;
typedef TYPE_3__ zend_ffi_type ;
typedef int zend_ffi_flags ;
struct TYPE_10__ {int flags; scalar_t__ ptr; int type; } ;
typedef TYPE_4__ zend_ffi_cdata ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*,TYPE_3__*,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zend_object *VAR_5, zval *VAR_6, zval *VAR_7)
{
 zend_ffi_cdata *VAR_8 = (zend_ffi_cdata*)VAR_5;
 zend_ffi_type *VAR_9 = FUNC_2(VAR_8->type);
 zend_long VAR_10;
 void *VAR_11;
 zend_ffi_flags VAR_12;

 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_4, "Cannot add next element to object of type FFI\\CData");
  return;
 }

 VAR_10 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_9->kind == VAR_2)) {
  if (FUNC_1((zend_ulong)(VAR_10) >= (zend_ulong)VAR_9->array.length)
   && (FUNC_1(VAR_10 < 0) || FUNC_1(VAR_9->array.length != 0))) {
   FUNC_4(VAR_4, "C array index out of bounds");
   return;
  }

  VAR_12 = (VAR_8->flags & VAR_1) | (zend_ffi_flags)(VAR_9->attr & VAR_0);
  VAR_9 = FUNC_2(VAR_9->array.type);






  VAR_11 = (void*)(((char*)VAR_8->ptr) + VAR_9->size * VAR_10);
 } else if (FUNC_0(VAR_9->kind == VAR_3)) {
  VAR_12 = (VAR_8->flags & VAR_1) | (zend_ffi_flags)(VAR_9->attr & VAR_0);
  VAR_9 = FUNC_2(VAR_9->pointer.type);
  if (FUNC_1(!VAR_8->ptr)) {
   FUNC_4(VAR_4, "NULL pointer dereference");
   return;
  }
  VAR_11 = (void*)((*(char**)VAR_8->ptr) + VAR_9->size * VAR_10);
 } else {
  FUNC_4(VAR_4, "Attempt to assign element of non C array");
  return;
 }

 if (FUNC_1(VAR_12)) {
  FUNC_4(VAR_4, "Attempt to assign read-only location");
  return;
 }

 FUNC_3(VAR_11, VAR_9, VAR_7);
}
