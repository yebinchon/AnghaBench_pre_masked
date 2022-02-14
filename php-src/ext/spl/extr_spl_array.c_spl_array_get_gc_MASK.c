
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_3__ {int array; } ;
typedef TYPE_1__ spl_array_object ;
typedef int HashTable ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static HashTable *FUNC_2(zend_object *VAR_0, zval **VAR_1, int *VAR_2)
{
 spl_array_object *VAR_3 = FUNC_0(VAR_0);
 *VAR_1 = &VAR_3->array;
 *VAR_2 = 1;
 return FUNC_1(VAR_0);
}
