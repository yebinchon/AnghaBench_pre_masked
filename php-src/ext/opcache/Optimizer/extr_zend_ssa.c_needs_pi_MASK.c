
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* blocks; } ;
struct TYPE_8__ {TYPE_6__ cfg; } ;
typedef TYPE_1__ zend_ssa ;
typedef int zend_op_array ;
struct TYPE_9__ {int size; int in; } ;
typedef TYPE_2__ zend_dfg ;
typedef int zend_bool ;
struct TYPE_10__ {int successors_count; int* successors; int predecessors_count; } ;
typedef TYPE_3__ zend_basic_block ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,TYPE_3__*,int,int) ;

__attribute__((used)) static zend_bool FUNC_3(const zend_op_array *VAR_0, zend_dfg *VAR_1, zend_ssa *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 zend_basic_block *VAR_6, *VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_1->in, VAR_1->size, VAR_4, VAR_5)) {

  return 0;
 }



 VAR_6 = &VAR_2->cfg.blocks[VAR_3];
 FUNC_1(VAR_6->successors_count == 2);
 if (VAR_6->successors[0] == VAR_6->successors[1]) {
  return 0;
 }

 VAR_7 = &VAR_2->cfg.blocks[VAR_4];
 if (VAR_7->predecessors_count == 1) {

  return 1;
 }



 VAR_8 = VAR_6->successors[0] == VAR_4
  ? VAR_6->successors[1] : VAR_6->successors[0];
 return !FUNC_2(&VAR_2->cfg, VAR_7, VAR_8, VAR_3);
}
