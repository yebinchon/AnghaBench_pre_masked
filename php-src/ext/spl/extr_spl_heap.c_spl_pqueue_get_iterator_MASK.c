
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {int * funcs; int data; } ;
typedef TYPE_2__ zend_object_iterator ;
typedef int zend_class_entry ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_3__ spl_heap_object ;
struct TYPE_9__ {TYPE_2__ it; int value; int * ce; } ;
struct TYPE_12__ {TYPE_1__ intern; int flags; } ;
typedef TYPE_4__ spl_heap_it ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,char*,int ) ;

zend_object_iterator *FUNC_8(zend_class_entry *VAR_2, zval *VAR_3, int VAR_4)
{
 spl_heap_it *VAR_5;
 spl_heap_object *VAR_6 = FUNC_4(VAR_3);

 if (VAR_4) {
  FUNC_7(VAR_0, "An iterator cannot be used with foreach by reference", 0);
  return ((void*)0);
 }

 VAR_5 = FUNC_5(sizeof(spl_heap_it));

 FUNC_6((zend_object_iterator*)VAR_5);

 FUNC_2(VAR_3);
 FUNC_0(&VAR_5->intern.it.data, FUNC_3(VAR_3));
 VAR_5->intern.it.funcs = &VAR_1;
 VAR_5->intern.ce = VAR_2;
 VAR_5->flags = VAR_6->flags;

 FUNC_1(&VAR_5->intern.value);

 return &VAR_5->intern.it;
}
