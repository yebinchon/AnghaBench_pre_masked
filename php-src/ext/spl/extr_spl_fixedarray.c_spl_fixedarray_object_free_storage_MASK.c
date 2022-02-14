
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
typedef size_t zend_long ;
struct TYPE_4__ {scalar_t__ size; int * elements; } ;
struct TYPE_5__ {int std; TYPE_1__ array; } ;
typedef TYPE_2__ spl_fixedarray_object ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zend_object *VAR_0)
{
 spl_fixedarray_object *VAR_1 = FUNC_1(VAR_0);
 zend_long VAR_2;

 if (VAR_1->array.size > 0) {
  for (VAR_2 = 0; VAR_2 < VAR_1->array.size; VAR_2++) {
   FUNC_3(&(VAR_1->array.elements[VAR_2]));
  }

  if (VAR_1->array.size > 0 && VAR_1->array.elements) {
   FUNC_0(VAR_1->array.elements);
  }
 }

 FUNC_2(&VAR_1->std);
}
