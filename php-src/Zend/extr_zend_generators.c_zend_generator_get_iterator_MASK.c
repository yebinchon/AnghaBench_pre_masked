
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_12__ {int data; int * funcs; } ;
typedef TYPE_4__ zend_object_iterator ;
struct TYPE_13__ {TYPE_4__* iterator; TYPE_3__* execute_data; } ;
typedef TYPE_5__ zend_generator ;
typedef int zend_class_entry ;
struct TYPE_11__ {TYPE_2__* func; } ;
struct TYPE_9__ {int fn_flags; } ;
struct TYPE_10__ {TYPE_1__ op_array; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,char*,int ) ;

zend_object_iterator *FUNC_7(zend_class_entry *VAR_2, zval *VAR_3, int VAR_4)
{
 zend_object_iterator *VAR_5;
 zend_generator *VAR_6 = (zend_generator*)FUNC_3(VAR_3);

 if (!VAR_6->execute_data) {
  FUNC_6(((void*)0), "Cannot traverse an already closed generator", 0);
  return ((void*)0);
 }

 if (FUNC_0(VAR_4) && !(VAR_6->execute_data->func->op_array.fn_flags & VAR_0)) {
  FUNC_6(((void*)0), "You can only iterate a generator by-reference if it declared that it yields by-reference", 0);
  return ((void*)0);
 }

 VAR_5 = VAR_6->iterator = FUNC_4(sizeof(zend_object_iterator));

 FUNC_5(VAR_5);

 VAR_5->funcs = &VAR_1;
 FUNC_2(VAR_3);
 FUNC_1(&VAR_5->data, FUNC_3(VAR_3));

 return VAR_5;
}
