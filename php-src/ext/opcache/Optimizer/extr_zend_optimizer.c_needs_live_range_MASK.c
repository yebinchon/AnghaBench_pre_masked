
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t result_def; } ;
typedef TYPE_3__ zend_ssa_op ;
struct TYPE_12__ {int * opcodes; } ;
typedef TYPE_4__ zend_op_array ;
typedef int zend_op ;
struct TYPE_9__ {TYPE_2__* var_info; TYPE_3__* ops; } ;
struct TYPE_13__ {TYPE_1__ ssa; } ;
typedef TYPE_5__ zend_func_info ;
typedef int zend_bool ;
typedef int uint32_t ;
struct TYPE_10__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static zend_bool FUNC_1(zend_op_array *VAR_5, zend_op *VAR_6) {
 zend_func_info *VAR_7 = FUNC_0(VAR_5);
 zend_ssa_op *VAR_8 = &VAR_7->ssa.ops[VAR_6 - VAR_5->opcodes];
 if (VAR_8->result_def >= 0) {
  uint32_t VAR_9 = VAR_7->ssa.var_info[VAR_8->result_def].type;
  return (VAR_9 & (VAR_4|VAR_0|VAR_1|VAR_3|VAR_2)) != 0;
 }
 return 1;
}
