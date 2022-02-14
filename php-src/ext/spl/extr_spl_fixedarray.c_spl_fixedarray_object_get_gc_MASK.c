
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_4__ {scalar_t__ size; int * elements; } ;
struct TYPE_5__ {TYPE_1__ array; } ;
typedef TYPE_2__ spl_fixedarray_object ;
typedef int HashTable ;


 TYPE_2__* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static HashTable* FUNC_2(zend_object *VAR_0, zval **VAR_1, int *VAR_2)
{
 spl_fixedarray_object *VAR_3 = FUNC_0(VAR_0);
 HashTable *VAR_4 = FUNC_1(VAR_0);

 *VAR_1 = VAR_3->array.elements;
 *VAR_2 = (int)VAR_3->array.size;

 return VAR_4;
}
