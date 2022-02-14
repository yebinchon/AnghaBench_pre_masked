
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_5__ {TYPE_1__* heap; } ;
typedef TYPE_2__ spl_heap_object ;
struct TYPE_4__ {int count; scalar_t__ elements; } ;
typedef int HashTable ;


 TYPE_2__* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static HashTable *FUNC_2(zend_object *VAR_0, zval **VAR_1, int *VAR_2)
{
 spl_heap_object *VAR_3 = FUNC_0(VAR_0);
 *VAR_1 = (zval *) VAR_3->heap->elements;
 *VAR_2 = VAR_3->heap->count;

 return FUNC_1(VAR_0);
}
