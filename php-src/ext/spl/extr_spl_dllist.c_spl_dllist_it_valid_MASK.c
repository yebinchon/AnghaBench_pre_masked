
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object_iterator ;
typedef int spl_ptr_llist_element ;
struct TYPE_2__ {int * traverse_pointer; } ;
typedef TYPE_1__ spl_dllist_it ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(zend_object_iterator *VAR_2)
{
 spl_dllist_it *VAR_3 = (spl_dllist_it *)VAR_2;
 spl_ptr_llist_element *VAR_4 = VAR_3->traverse_pointer;

 return (VAR_4 != ((void*)0) ? VAR_1 : VAR_0);
}
