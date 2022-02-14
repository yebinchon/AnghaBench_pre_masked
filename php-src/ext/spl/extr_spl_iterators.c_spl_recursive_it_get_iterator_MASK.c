
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
typedef int zend_class_entry ;
struct TYPE_7__ {int * iterators; } ;
typedef TYPE_2__ spl_recursive_it_object ;
struct TYPE_6__ {int * funcs; int data; } ;
struct TYPE_8__ {TYPE_1__ intern; } ;
typedef TYPE_3__ spl_recursive_it_iterator ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static zend_object_iterator *FUNC_8(zend_class_entry *VAR_3, zval *VAR_4, int VAR_5)
{
 spl_recursive_it_iterator *VAR_6;
 spl_recursive_it_object *VAR_7;

 if (VAR_5) {
  FUNC_7(VAR_1, "An iterator cannot be used with foreach by reference", 0);
  return ((void*)0);
 }
 VAR_6 = FUNC_4(sizeof(spl_recursive_it_iterator));
 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7->iterators == ((void*)0)) {
  FUNC_5(VAR_0, "The object to be iterated is in an invalid state: "
    "the parent constructor has not been called");
 }

 FUNC_6((zend_object_iterator*)VAR_6);

 FUNC_1(VAR_4);
 FUNC_0(&VAR_6->intern.data, FUNC_2(VAR_4));
 VAR_6->intern.funcs = &VAR_2;
 return (zend_object_iterator*)VAR_6;
}
