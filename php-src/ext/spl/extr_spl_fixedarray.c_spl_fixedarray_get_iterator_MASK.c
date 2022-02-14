
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {int * funcs; int data; } ;
typedef TYPE_2__ zend_object_iterator ;
typedef int zend_class_entry ;
struct TYPE_7__ {TYPE_2__ it; int value; int * ce; } ;
struct TYPE_9__ {TYPE_1__ intern; } ;
typedef TYPE_3__ spl_fixedarray_it ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,char*,int ) ;

zend_object_iterator *FUNC_7(zend_class_entry *VAR_2, zval *VAR_3, int VAR_4)
{
 spl_fixedarray_it *VAR_5;

 if (VAR_4) {
  FUNC_6(VAR_0, "An iterator cannot be used with foreach by reference", 0);
  return ((void*)0);
 }

 VAR_5 = FUNC_4(sizeof(spl_fixedarray_it));

 FUNC_5((zend_object_iterator*)VAR_5);

 FUNC_2(VAR_3);
 FUNC_0(&VAR_5->intern.it.data, FUNC_3(VAR_3));
 VAR_5->intern.it.funcs = &VAR_1;
 VAR_5->intern.ce = VAR_2;
 FUNC_1(&VAR_5->intern.value);

 return &VAR_5->intern.it;
}
