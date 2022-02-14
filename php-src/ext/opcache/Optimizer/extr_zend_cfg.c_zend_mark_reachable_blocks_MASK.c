
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int last_try_catch; TYPE_3__* opcodes; TYPE_1__* try_catch_array; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_16__ {scalar_t__ opcode; scalar_t__ extended_value; } ;
typedef TYPE_3__ zend_op ;
struct TYPE_17__ {int* map; int flags; int blocks_count; TYPE_5__* blocks; } ;
typedef TYPE_4__ zend_cfg ;
struct TYPE_18__ {int flags; int start; int len; } ;
typedef TYPE_5__ zend_basic_block ;
typedef int uint32_t ;
struct TYPE_14__ {size_t try_op; int catch_op; int finally_op; int finally_end; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__ const*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(const zend_op_array *VAR_11, zend_cfg *VAR_12, int VAR_13)
{
 zend_basic_block *VAR_14 = VAR_12->blocks;

 VAR_14[VAR_13].flags = VAR_4;
 FUNC_1(VAR_11->opcodes, VAR_12, VAR_14 + VAR_13);

 if (VAR_11->last_try_catch) {
  zend_basic_block *VAR_15;
  int VAR_16, VAR_17;
  uint32_t *VAR_18 = VAR_12->map;

  do {
   VAR_17 = 0;


   for (VAR_16 = 0; VAR_16 < VAR_11->last_try_catch; VAR_16++) {


    VAR_15 = VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].try_op];
    if (!(VAR_15->flags & VAR_3)) {
     zend_basic_block *VAR_19;

     if (VAR_11->try_catch_array[VAR_16].catch_op) {
      VAR_19 = VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].catch_op];
      while (VAR_15 != VAR_19) {
       if (VAR_15->flags & VAR_3) {
        VAR_11->try_catch_array[VAR_16].try_op = VAR_15->start;
        break;
       }
       VAR_15++;
      }
     }
     VAR_15 = VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].try_op];
     if (!(VAR_15->flags & VAR_3)) {
      if (VAR_11->try_catch_array[VAR_16].finally_op) {
       VAR_19 = VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].finally_op];
       while (VAR_15 != VAR_19) {
        if (VAR_15->flags & VAR_3) {
         VAR_11->try_catch_array[VAR_16].try_op = VAR_11->try_catch_array[VAR_16].catch_op;
         VAR_17 = 1;
         FUNC_1(VAR_11->opcodes, VAR_12, VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].try_op]);
         break;
        }
        VAR_15++;
       }
      }
     }
    }

    VAR_15 = VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].try_op];
    if (VAR_15->flags & VAR_3) {
     VAR_15->flags |= VAR_5;
     if (VAR_11->try_catch_array[VAR_16].catch_op) {
      VAR_15 = VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].catch_op];
      VAR_15->flags |= VAR_0;
      if (!(VAR_15->flags & VAR_3)) {
       VAR_17 = 1;
       FUNC_1(VAR_11->opcodes, VAR_12, VAR_15);
      }
     }
     if (VAR_11->try_catch_array[VAR_16].finally_op) {
      VAR_15 = VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].finally_op];
      VAR_15->flags |= VAR_1;
      if (!(VAR_15->flags & VAR_3)) {
       VAR_17 = 1;
       FUNC_1(VAR_11->opcodes, VAR_12, VAR_15);
      }
     }
     if (VAR_11->try_catch_array[VAR_16].finally_end) {
      VAR_15 = VAR_14 + VAR_18[VAR_11->try_catch_array[VAR_16].finally_end];
      VAR_15->flags |= VAR_2;
      if (!(VAR_15->flags & VAR_3)) {
       VAR_17 = 1;
       FUNC_1(VAR_11->opcodes, VAR_12, VAR_15);
      }
     }
    } else {
     if (VAR_11->try_catch_array[VAR_16].catch_op) {
      FUNC_0(!(VAR_14[VAR_18[VAR_11->try_catch_array[VAR_16].catch_op]].flags & VAR_3));
     }
     if (VAR_11->try_catch_array[VAR_16].finally_op) {
      FUNC_0(!(VAR_14[VAR_18[VAR_11->try_catch_array[VAR_16].finally_op]].flags & VAR_3));
     }
     if (VAR_11->try_catch_array[VAR_16].finally_end) {
      FUNC_0(!(VAR_14[VAR_18[VAR_11->try_catch_array[VAR_16].finally_end]].flags & VAR_3));
     }
    }
   }
  } while (VAR_17);
 }

 if (VAR_12->flags & VAR_10) {
  zend_basic_block *VAR_20;
  int VAR_21;
  uint32_t *VAR_22 = VAR_12->map;


  for (VAR_20 = VAR_14; VAR_20 < VAR_14 + VAR_12->blocks_count; VAR_20++) {
   if (VAR_20->flags & VAR_3) {
    continue;
   }

   for (VAR_21 = VAR_20->start; VAR_21 < VAR_20->start + VAR_20->len; VAR_21++) {
    zend_op *VAR_23 = &VAR_11->opcodes[VAR_21];
    if (VAR_23->opcode == VAR_7 ||
     (VAR_23->opcode == VAR_8 && VAR_23->extended_value == VAR_9)
    ) {
     zend_op *VAR_24 = FUNC_2(VAR_11, VAR_23);
     if (VAR_24) {
      uint32_t VAR_25 = VAR_22[VAR_24 - VAR_11->opcodes];
      if (VAR_14[VAR_25].flags & VAR_3) {
       VAR_20->flags |= VAR_6;
       break;
      }
     }
    }
   }
  }
 }
}
