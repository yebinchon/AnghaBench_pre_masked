
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spl_ptr_llist_dtor_func ;
typedef int spl_ptr_llist_ctor_func ;
struct TYPE_4__ {int ctor; int dtor; scalar_t__ count; int * tail; int * head; } ;
typedef TYPE_1__ spl_ptr_llist ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static spl_ptr_llist *FUNC_1(spl_ptr_llist_ctor_func VAR_0, spl_ptr_llist_dtor_func VAR_1)
{
 spl_ptr_llist *VAR_2 = FUNC_0(sizeof(spl_ptr_llist));

 VAR_2->head = ((void*)0);
 VAR_2->tail = ((void*)0);
 VAR_2->count = 0;
 VAR_2->dtor = VAR_1;
 VAR_2->ctor = VAR_0;

 return VAR_2;
}
