
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
struct TYPE_11__ {int flags; int traverse_pointer; int traverse_position; } ;
typedef TYPE_3__ spl_dllist_object ;
struct TYPE_9__ {TYPE_2__ it; int value; int * ce; } ;
struct TYPE_12__ {int flags; TYPE_1__ intern; int traverse_pointer; int traverse_position; } ;
typedef TYPE_4__ spl_dllist_it ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 TYPE_4__* FUNC_6 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,char*,int ) ;

zend_object_iterator *FUNC_9(zend_class_entry *VAR_3, zval *VAR_4, int VAR_5)
{
 spl_dllist_it *VAR_6;
 spl_dllist_object *VAR_7 = FUNC_5(VAR_4);

 if (VAR_5) {
  FUNC_8(VAR_1, "An iterator cannot be used with foreach by reference", 0);
  return ((void*)0);
 }

 VAR_6 = FUNC_6(sizeof(spl_dllist_it));

 FUNC_7((zend_object_iterator*)VAR_6);

 FUNC_3(VAR_4);
 FUNC_1(&VAR_6->intern.it.data, FUNC_4(VAR_4));
 VAR_6->intern.it.funcs = &VAR_2;
 VAR_6->intern.ce = VAR_3;
 VAR_6->traverse_position = VAR_7->traverse_position;
 VAR_6->traverse_pointer = VAR_7->traverse_pointer;
 VAR_6->flags = VAR_7->flags & VAR_0;
 FUNC_2(&VAR_6->intern.value);

 FUNC_0(VAR_6->traverse_pointer);

 return &VAR_6->intern.it;
}
