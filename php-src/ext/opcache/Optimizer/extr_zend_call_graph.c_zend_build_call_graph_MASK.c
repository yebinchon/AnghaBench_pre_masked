
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_script ;
typedef int zend_op_array ;
typedef int zend_func_info ;
struct TYPE_4__ {scalar_t__ op_arrays_count; int * func_infos; int ** op_arrays; } ;
typedef TYPE_1__ zend_call_graph ;
typedef int zend_arena ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int **,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(zend_arena **VAR_4, zend_script *VAR_5, zend_call_graph *VAR_6)
{
 VAR_6->op_arrays_count = 0;
 if (FUNC_1(VAR_6, VAR_5, VAR_2) != VAR_1) {
  return VAR_0;
 }
 VAR_6->op_arrays = (zend_op_array**)FUNC_0(VAR_4, VAR_6->op_arrays_count, sizeof(zend_op_array*));
 VAR_6->func_infos = (zend_func_info*)FUNC_0(VAR_4, VAR_6->op_arrays_count, sizeof(zend_func_info));
 VAR_6->op_arrays_count = 0;
 if (FUNC_1(VAR_6, VAR_5, VAR_3) != VAR_1) {
  return VAR_0;
 }

 return VAR_1;
}
