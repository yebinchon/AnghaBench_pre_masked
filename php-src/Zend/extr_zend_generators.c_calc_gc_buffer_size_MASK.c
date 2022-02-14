
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {size_t last_var; size_t num_args; scalar_t__ opcodes; size_t last_live_range; TYPE_3__* live_range; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_14__ {size_t start; size_t end; size_t var; } ;
typedef TYPE_3__ zend_live_range ;
struct TYPE_12__ {TYPE_4__* root; } ;
struct TYPE_17__ {scalar_t__ children; TYPE_1__ ptr; } ;
struct TYPE_15__ {TYPE_7__ node; TYPE_5__* execute_data; } ;
typedef TYPE_4__ zend_generator ;
struct TYPE_16__ {scalar_t__ opline; } ;
typedef TYPE_5__ zend_execute_data ;
typedef size_t uint32_t ;
struct TYPE_11__ {TYPE_2__ op_array; } ;


 TYPE_10__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 size_t FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_3 (TYPE_7__*,TYPE_4__*) ;

__attribute__((used)) static uint32_t FUNC_4(zend_generator *VAR_8)
{
 uint32_t VAR_9 = 4;
 if (VAR_8->execute_data) {
  zend_execute_data *VAR_10 = VAR_8->execute_data;
  zend_op_array *VAR_11 = &FUNC_0(VAR_7)->op_array;


  if (!(FUNC_1() & VAR_2)) {
   VAR_9 += VAR_11->last_var;
  }

  if (FUNC_1() & VAR_1) {
   VAR_9 += FUNC_2() - VAR_11->num_args;
  }
  VAR_9 += (FUNC_1() & VAR_3) != 0;
  VAR_9 += (FUNC_1() & VAR_0) != 0;


  if (VAR_10->opline != VAR_11->opcodes) {

   uint32_t VAR_12, VAR_13 = VAR_10->opline - VAR_11->opcodes - 1;
   for (VAR_12 = 0; VAR_12 < VAR_11->last_live_range; VAR_12++) {
    const zend_live_range *VAR_14 = &VAR_11->live_range[VAR_12];
    if (VAR_14->start > VAR_13) {

     break;
    } else if (VAR_13 < VAR_14->end) {

     uint32_t VAR_15 = VAR_14->var & VAR_5;
     if (VAR_15 == VAR_6 || VAR_15 == VAR_4) {
      VAR_9++;
     }
    }
   }
  }


  if (VAR_8->node.children == 0) {
   zend_generator *VAR_16 = VAR_8->node.ptr.root;
   while (VAR_16 != VAR_8) {
    VAR_16 = FUNC_3(&VAR_16->node, VAR_8);
    VAR_9++;
   }
  }
 }
 return VAR_9;
}
