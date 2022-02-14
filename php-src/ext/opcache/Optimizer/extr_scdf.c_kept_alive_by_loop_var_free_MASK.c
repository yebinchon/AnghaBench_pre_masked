
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* opcodes; } ;
typedef TYPE_4__ zend_op_array ;
struct TYPE_14__ {scalar_t__ opcode; scalar_t__ extended_value; } ;
typedef TYPE_5__ zend_op ;
struct TYPE_15__ {int flags; size_t* map; TYPE_7__* blocks; } ;
typedef TYPE_6__ zend_cfg ;
typedef int zend_bool ;
struct TYPE_16__ {size_t start; size_t len; } ;
typedef TYPE_7__ zend_basic_block ;
typedef size_t uint32_t ;
struct TYPE_17__ {int executable_blocks; TYPE_3__* ssa; TYPE_4__* op_array; } ;
typedef TYPE_8__ scdf_ctx ;
struct TYPE_12__ {TYPE_2__* vars; TYPE_1__* ops; TYPE_6__ cfg; } ;
struct TYPE_11__ {int definition; } ;
struct TYPE_10__ {int op1_use; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,size_t) ;

__attribute__((used)) static zend_bool FUNC_2(scdf_ctx *VAR_4, uint32_t VAR_5) {
 uint32_t VAR_6;
 const zend_op_array *VAR_7 = VAR_4->op_array;
 const zend_cfg *VAR_8 = &VAR_4->ssa->cfg;
 const zend_basic_block *VAR_9 = &VAR_8->blocks[VAR_5];
 if (!(VAR_8->flags & VAR_3)) {
  return 0;
 }
 for (VAR_6 = VAR_9->start; VAR_6 < VAR_9->start + VAR_9->len; VAR_6++) {
  zend_op *VAR_10 = &VAR_7->opcodes[VAR_6];
  if (VAR_10->opcode == VAR_0 ||
    (VAR_10->opcode == VAR_1 && VAR_10->extended_value == VAR_2)) {
   int VAR_11 = VAR_4->ssa->ops[VAR_6].op1_use;
   if (VAR_11 >= 0) {
    int VAR_12 = VAR_4->ssa->vars[VAR_11].definition;
    uint32_t VAR_13;
    FUNC_0(VAR_12 >= 0);
    VAR_13 = VAR_8->map[VAR_12];
    if (FUNC_1(VAR_4->executable_blocks, VAR_13)) {
     return 1;
    }
   }
  }
 }
 return 0;
}
