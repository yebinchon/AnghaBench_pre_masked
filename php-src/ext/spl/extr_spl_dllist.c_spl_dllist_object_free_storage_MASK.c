
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_5__ {int traverse_pointer; TYPE_2__* llist; int * gc_data; int std; } ;
typedef TYPE_1__ spl_dllist_object ;
struct TYPE_6__ {scalar_t__ count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(zend_object *VAR_0)
{
 spl_dllist_object *VAR_1 = FUNC_2(VAR_0);
 zval VAR_2;

 FUNC_5(&VAR_1->std);

 while (VAR_1->llist->count > 0) {
  FUNC_4(VAR_1->llist, &VAR_2);
  FUNC_6(&VAR_2);
 }

 if (VAR_1->gc_data != ((void*)0)) {
  FUNC_1(VAR_1->gc_data);
 };

 FUNC_3(VAR_1->llist);
 FUNC_0(VAR_1->traverse_pointer);
}
