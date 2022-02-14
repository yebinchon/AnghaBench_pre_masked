
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ spl_ptr_llist_element ;
struct TYPE_4__ {TYPE_1__* traverse_pointer; } ;
typedef TYPE_2__ spl_dllist_it ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static zval *FUNC_1(zend_object_iterator *VAR_0)
{
 spl_dllist_it *VAR_1 = (spl_dllist_it *)VAR_0;
 spl_ptr_llist_element *VAR_2 = VAR_1->traverse_pointer;

 if (VAR_2 == ((void*)0) || FUNC_0(VAR_2->data)) {
  return ((void*)0);
 }

 return &VAR_2->data;
}
