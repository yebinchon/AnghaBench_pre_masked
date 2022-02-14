
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {int * funcs; int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_10__ {scalar_t__ kind; } ;
typedef TYPE_2__ zend_ffi_type ;
struct TYPE_11__ {int by_ref; TYPE_1__ it; int value; scalar_t__ key; } ;
typedef TYPE_3__ zend_ffi_cdata_iterator ;
struct TYPE_12__ {int type; } ;
typedef TYPE_4__ zend_ffi_cdata ;
typedef int zend_class_entry ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static zend_object_iterator *FUNC_8(zend_class_entry *VAR_3, zval *VAR_4, int VAR_5)
{
 zend_ffi_cdata *VAR_6 = (zend_ffi_cdata*)FUNC_4(VAR_4);
 zend_ffi_type *VAR_7 = FUNC_0(VAR_6->type);
 zend_ffi_cdata_iterator *VAR_8;

 if (VAR_7->kind != VAR_0) {
  FUNC_7(VAR_2, "Attempt to iterate on non C array");
  return ((void*)0);
 }

 VAR_8 = FUNC_5(sizeof(zend_ffi_cdata_iterator));

 FUNC_6(&VAR_8->it);

 FUNC_3(VAR_4);
 FUNC_1(&VAR_8->it.data, FUNC_4(VAR_4));
 VAR_8->it.funcs = &VAR_1;
 VAR_8->key = 0;
 VAR_8->by_ref = VAR_5;
 FUNC_2(&VAR_8->value);

 return &VAR_8->it;
}
