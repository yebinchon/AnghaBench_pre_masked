
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ spl_ptr_llist_element ;
struct TYPE_5__ {TYPE_1__* head; } ;
typedef TYPE_2__ spl_ptr_llist ;



__attribute__((used)) static zval *FUNC_0(spl_ptr_llist *VAR_0)
{
 spl_ptr_llist_element *VAR_1 = VAR_0->head;

 if (VAR_1 == ((void*)0)) {
  return ((void*)0);
 } else {
  return &VAR_1->data;
 }
}
