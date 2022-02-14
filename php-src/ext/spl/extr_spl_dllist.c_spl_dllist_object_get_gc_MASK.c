
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_6__ {struct TYPE_6__* next; int data; } ;
typedef TYPE_2__ spl_ptr_llist_element ;
struct TYPE_7__ {scalar_t__ gc_data_count; int * gc_data; TYPE_1__* llist; } ;
typedef TYPE_3__ spl_dllist_object ;
struct TYPE_5__ {scalar_t__ count; TYPE_2__* head; } ;
typedef int HashTable ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,scalar_t__,int,int ) ;
 TYPE_3__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static HashTable *FUNC_4(zend_object *VAR_0, zval **VAR_1, int *VAR_2)
{
 spl_dllist_object *VAR_3 = FUNC_2(VAR_0);
 spl_ptr_llist_element *VAR_4 = VAR_3->llist->head;
 int VAR_5 = 0;

 if (VAR_3->gc_data_count < VAR_3->llist->count) {
  VAR_3->gc_data_count = VAR_3->llist->count;
  VAR_3->gc_data = FUNC_1(VAR_3->gc_data, VAR_3->gc_data_count, sizeof(zval), 0);
 }

 while (VAR_4) {
  FUNC_0(&VAR_3->gc_data[VAR_5++], &VAR_4->data);
  VAR_4 = VAR_4->next;
 }

 *VAR_1 = VAR_3->gc_data;
 *VAR_2 = VAR_5;
 return FUNC_3(VAR_0);
}
