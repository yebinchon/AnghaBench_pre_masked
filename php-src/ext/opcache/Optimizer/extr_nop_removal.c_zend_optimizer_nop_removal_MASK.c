
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_2__* script; } ;
typedef TYPE_4__ zend_optimizer_ctx ;
struct TYPE_20__ {int last; int last_try_catch; int fn_flags; TYPE_6__* opcodes; TYPE_1__* try_catch_array; } ;
typedef TYPE_5__ zend_op_array ;
struct TYPE_18__ {int opline_num; } ;
struct TYPE_21__ {scalar_t__ opcode; TYPE_3__ result; } ;
typedef TYPE_6__ zend_op ;
typedef int uint32_t ;
struct TYPE_17__ {int first_early_binding_opline; TYPE_5__ main_op_array; } ;
struct TYPE_16__ {size_t try_op; size_t catch_op; int finally_op; size_t finally_end; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int*,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*,int*) ;

void FUNC_7(zend_op_array *VAR_4, zend_optimizer_ctx *VAR_5)
{
 zend_op *VAR_6, *VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;
 int VAR_11;
 uint32_t *VAR_12;
 FUNC_0(VAR_3);

 VAR_12 = (uint32_t *)FUNC_3(sizeof(uint32_t) * VAR_4->last, VAR_3);
 VAR_9 = VAR_8 = VAR_10 = 0;
 VAR_6 = VAR_4->opcodes + VAR_4->last;
 for (VAR_7 = VAR_4->opcodes; VAR_7 < VAR_6; VAR_7++) {


  if (VAR_7->opcode == VAR_1 && FUNC_2(VAR_7) > VAR_4->opcodes + VAR_9) {

   zend_op *VAR_13 = FUNC_2(VAR_7) - 1;

   while (VAR_13->opcode == VAR_2) {
    VAR_13--;
   }
   if (VAR_13 == VAR_7) {

    VAR_7->opcode = VAR_2;
   }
  }

  VAR_12[VAR_9++] = VAR_10;
  if (VAR_7->opcode == VAR_2) {
   VAR_10++;
  } else {
   if (VAR_10) {
    zend_op *VAR_14 = VAR_4->opcodes + VAR_8;

    *VAR_14 = *VAR_7;
    FUNC_5(VAR_4, VAR_14, VAR_7);
   }
   VAR_8++;
  }
 }

 if (VAR_10) {
  VAR_4->last = VAR_8;
  VAR_6 = VAR_4->opcodes + VAR_4->last;


  for (VAR_7 = VAR_4->opcodes; VAR_7<VAR_6; VAR_7++) {
   FUNC_6(VAR_4, VAR_7, VAR_12);
  }


  for (VAR_11 = 0; VAR_11 < VAR_4->last_try_catch; VAR_11++) {
   VAR_4->try_catch_array[VAR_11].try_op -= VAR_12[VAR_4->try_catch_array[VAR_11].try_op];
   VAR_4->try_catch_array[VAR_11].catch_op -= VAR_12[VAR_4->try_catch_array[VAR_11].catch_op];
   if (VAR_4->try_catch_array[VAR_11].finally_op) {
    VAR_4->try_catch_array[VAR_11].finally_op -= VAR_12[VAR_4->try_catch_array[VAR_11].finally_op];
    VAR_4->try_catch_array[VAR_11].finally_end -= VAR_12[VAR_4->try_catch_array[VAR_11].finally_end];
   }
  }


  if (VAR_4->fn_flags & VAR_0) {
   uint32_t *VAR_15 = &VAR_5->script->first_early_binding_opline;

   FUNC_1(VAR_4 == &VAR_5->script->main_op_array);
   do {
    *VAR_15 -= VAR_12[*VAR_15];
    VAR_15 = &VAR_4->opcodes[*VAR_15].result.opline_num;
   } while (*VAR_15 != (uint32_t)-1);
  }
 }
 FUNC_4(VAR_12, VAR_3);
}
