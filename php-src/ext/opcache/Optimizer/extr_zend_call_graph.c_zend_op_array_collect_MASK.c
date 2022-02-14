
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_op_array ;
struct TYPE_5__ {size_t num; int num_args; int return_value_used; } ;
typedef TYPE_1__ zend_func_info ;
struct TYPE_6__ {int op_arrays_count; int ** op_arrays; TYPE_1__* func_infos; } ;
typedef TYPE_2__ zend_call_graph ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(zend_call_graph *VAR_1, zend_op_array *VAR_2)
{
    zend_func_info *VAR_3 = VAR_1->func_infos + VAR_1->op_arrays_count;

 FUNC_0(VAR_2, VAR_3);
 VAR_1->op_arrays[VAR_1->op_arrays_count] = VAR_2;
 VAR_3->num = VAR_1->op_arrays_count;
 VAR_3->num_args = -1;
 VAR_3->return_value_used = -1;
 VAR_1->op_arrays_count++;
 return VAR_0;
}
