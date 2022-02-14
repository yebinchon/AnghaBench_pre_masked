
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
typedef int zend_class_entry ;
struct TYPE_4__ {int * funcs; int data; } ;
struct TYPE_5__ {int current; int object; TYPE_1__ intern; } ;
typedef TYPE_2__ date_period_it ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;

zend_object_iterator *FUNC_8(zend_class_entry *VAR_1, zval *VAR_2, int VAR_3)
{
 date_period_it *VAR_4;

 if (VAR_3) {
  FUNC_7(((void*)0), "An iterator cannot be used with foreach by reference");
  return ((void*)0);
 }

 VAR_4 = FUNC_5(sizeof(date_period_it));

 FUNC_6((zend_object_iterator*)VAR_4);

 FUNC_2(VAR_2);
 FUNC_0(&VAR_4->intern.data, FUNC_3(VAR_2));
 VAR_4->intern.funcs = &VAR_0;
 VAR_4->object = FUNC_4(VAR_2);
 FUNC_1(&VAR_4->current);

 return (zend_object_iterator*)VAR_4;
}
