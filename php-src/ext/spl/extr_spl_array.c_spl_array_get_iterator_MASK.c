
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {int * funcs; int data; } ;
struct TYPE_8__ {TYPE_2__ it; int value; int * ce; } ;
typedef TYPE_1__ zend_user_iterator ;
typedef TYPE_2__ zend_object_iterator ;
typedef int zend_class_entry ;
struct TYPE_10__ {int ar_flags; } ;
typedef TYPE_3__ spl_array_object ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,char*,int ) ;

zend_object_iterator *FUNC_8(zend_class_entry *VAR_3, zval *VAR_4, int VAR_5)
{
 zend_user_iterator *VAR_6;
 spl_array_object *VAR_7 = FUNC_4(VAR_4);

 if (VAR_5 && (VAR_7->ar_flags & VAR_0)) {
  FUNC_7(VAR_2, "An iterator cannot be used with foreach by reference", 0);
  return ((void*)0);
 }

 VAR_6 = FUNC_5(sizeof(zend_user_iterator));

 FUNC_6(&VAR_6->it);

 FUNC_2(VAR_4);
 FUNC_0(&VAR_6->it.data, FUNC_3(VAR_4));
 VAR_6->it.funcs = &VAR_1;
 VAR_6->ce = VAR_3;
 FUNC_1(&VAR_6->value);

 return &VAR_6->it;
}
