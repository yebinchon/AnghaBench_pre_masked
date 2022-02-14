
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_script ;
struct TYPE_5__ {int op_arrays_count; scalar_t__ func_infos; int * op_arrays; } ;
typedef TYPE_1__ zend_call_graph ;
typedef int zend_arena ;


 int FUNC_0 (int **,int *,int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(zend_arena **VAR_0, zend_script *VAR_1, zend_call_graph *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->op_arrays_count; VAR_3++) {
  FUNC_0(VAR_0, VAR_1, 0, VAR_2->op_arrays[VAR_3], VAR_2->func_infos + VAR_3);
 }
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
}
