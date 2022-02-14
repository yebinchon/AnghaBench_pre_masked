
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_33__ {int vars_count; scalar_t__ var_info; } ;
typedef TYPE_7__ zend_ssa ;
struct TYPE_34__ {int last; int num_args; int last_var; int T; int line_start; int line_end; int last_live_range; int last_try_catch; TYPE_6__* try_catch_array; TYPE_5__* live_range; int * opcodes; TYPE_1__* filename; } ;
typedef TYPE_8__ zend_op_array ;
typedef int zend_op ;
struct TYPE_30__ {int range; int is_instanceof; int ce; int type; } ;
struct TYPE_35__ {int flags; scalar_t__ num_args; int return_value_used; TYPE_4__ return_info; TYPE_3__* arg_info; } ;
typedef TYPE_9__ zend_func_info ;
struct TYPE_24__ {int blocks_count; int* map; TYPE_11__* blocks; } ;
typedef TYPE_10__ zend_cfg ;
struct TYPE_25__ {int flags; int start; int len; } ;
typedef TYPE_11__ zend_basic_block ;
typedef int uint32_t ;
struct TYPE_32__ {size_t try_op; int catch_op; int finally_op; int finally_end; } ;
struct TYPE_31__ {int var; int start; int end; } ;
struct TYPE_28__ {int range; int is_instanceof; int ce; int type; } ;
struct TYPE_29__ {TYPE_2__ info; } ;
struct TYPE_27__ {int flags; } ;
struct TYPE_26__ {char* val; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_9__* FUNC_2 (TYPE_8__ const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

 int VAR_19 ;




 int FUNC_3 (int ,char*,...) ;
 TYPE_21__* VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (TYPE_10__ const*,TYPE_8__ const*,TYPE_7__ const*,int,int) ;
 int FUNC_5 (TYPE_8__ const*,TYPE_11__*,int const*,int,void const*) ;
 int FUNC_6 (TYPE_8__ const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_8__ const*,TYPE_7__ const*,int,int ,int,int) ;
 int FUNC_9 (int ,int ,int ,int) ;

void FUNC_10(const zend_op_array *VAR_22, uint32_t VAR_23, const char *VAR_24, const void *VAR_25)
{
 int VAR_26;
 const zend_cfg *VAR_27 = ((void*)0);
 const zend_ssa *VAR_28 = ((void*)0);
 zend_func_info *VAR_29 = ((void*)0);
 uint32_t VAR_30 = 0;

 if (VAR_23 & (VAR_2|VAR_5)) {
  VAR_27 = (const zend_cfg*)VAR_25;
  if (!VAR_27->blocks) {
   VAR_27 = VAR_25 = ((void*)0);
  }
 }
 if (VAR_23 & VAR_5) {
  VAR_28 = (const zend_ssa*)VAR_25;
 }

 VAR_29 = FUNC_2(VAR_22);
 if (VAR_29) {
  VAR_30 = VAR_29->flags;
 }

 FUNC_3(VAR_21, "\n");
 FUNC_6(VAR_22);
 FUNC_3(VAR_21, ": ; (lines=%d, args=%d",
  VAR_22->last,
  VAR_22->num_args);
 if (VAR_29 && VAR_29->num_args >= 0) {
  FUNC_3(VAR_21, "/%ld", VAR_29->num_args);
 }
 FUNC_3(VAR_21, ", vars=%d, tmps=%d", VAR_22->last_var, VAR_22->T);
 if (VAR_28) {
  FUNC_3(VAR_21, ", ssa_vars=%d", VAR_28->vars_count);
 }
 if (VAR_30 & VAR_8) {
  FUNC_3(VAR_21, ", dynamic");
 }
 if (VAR_30 & VAR_11) {
  FUNC_3(VAR_21, ", recursive");
  if (VAR_30 & VAR_12) {
   FUNC_3(VAR_21, " directly");
  }
  if (VAR_30 & VAR_13) {
   FUNC_3(VAR_21, " indirectly");
  }
 }
 if (VAR_30 & VAR_9) {
  FUNC_3(VAR_21, ", irreducable");
 }
 if (VAR_30 & VAR_10) {
  FUNC_3(VAR_21, ", no_loops");
 }
 if (VAR_30 & VAR_7) {
  FUNC_3(VAR_21, ", extended_stmt");
 }
 if (VAR_30 & VAR_6) {
  FUNC_3(VAR_21, ", extended_fcall");
 }
 if (VAR_29 && VAR_29->return_value_used == 0) {
  FUNC_3(VAR_21, ", no_return_value");
 } else if (VAR_29 && VAR_29->return_value_used == 1) {
  FUNC_3(VAR_21, ", return_value");
 }
 FUNC_3(VAR_21, ")\n");
 if (VAR_24) {
  FUNC_3(VAR_21, "    ; (%s)\n", VAR_24);
 }
 FUNC_3(VAR_21, "    ; %s:%u-%u\n", VAR_22->filename->val, VAR_22->line_start, VAR_22->line_end);

 if (VAR_29 && VAR_29->num_args > 0) {
  uint32_t VAR_31;

  for (VAR_31 = 0; VAR_31 < FUNC_1(VAR_22->num_args, VAR_29->num_args ); VAR_31++) {
   FUNC_3(VAR_21, "    ; arg %d ", VAR_31);
   FUNC_9(VAR_29->arg_info[VAR_31].info.type, VAR_29->arg_info[VAR_31].info.ce, VAR_29->arg_info[VAR_31].info.is_instanceof, VAR_23);
   FUNC_7(&VAR_29->arg_info[VAR_31].info.range);
   FUNC_3(VAR_21, "\n");
  }
 }

 if (VAR_29) {
  FUNC_3(VAR_21, "    ; return ");
  FUNC_9(VAR_29->return_info.type, VAR_29->return_info.ce, VAR_29->return_info.is_instanceof, VAR_23);
  FUNC_7(&VAR_29->return_info.range);
  FUNC_3(VAR_21, "\n");
 }

 if (VAR_28 && VAR_28->var_info) {
  for (VAR_26 = 0; VAR_26 < VAR_22->last_var; VAR_26++) {
   FUNC_3(VAR_21, "    ; ");
   FUNC_8(VAR_22, VAR_28, VAR_26, VAR_0, VAR_26, VAR_23);
   FUNC_3(VAR_21, "\n");
  }
 }

 if (VAR_27) {
  int VAR_32;
  zend_basic_block *VAR_33;

  for (VAR_32 = 0; VAR_32 < VAR_27->blocks_count; VAR_32++) {
   VAR_33 = VAR_27->blocks + VAR_32;
   if (!(VAR_23 & VAR_3) || (VAR_33->flags & VAR_1)) {
    const zend_op *VAR_34;
    const zend_op *VAR_35;

    FUNC_4(VAR_27, VAR_22, VAR_28, VAR_32, VAR_23);
    VAR_34 = VAR_22->opcodes + VAR_33->start;
    VAR_35 = VAR_34 + VAR_33->len;
    while (VAR_34 < VAR_35) {
     FUNC_5(VAR_22, VAR_33, VAR_34, VAR_23, VAR_25);
     VAR_34++;
    }
   }
  }
  if (VAR_22->last_live_range && (VAR_23 & VAR_4)) {
   FUNC_3(VAR_21, "LIVE RANGES:\n");
   for (VAR_26 = 0; VAR_26 < VAR_22->last_live_range; VAR_26++) {
    FUNC_3(VAR_21, "        %u: L%u - L%u ",
     FUNC_0(VAR_22->live_range[VAR_26].var & ~VAR_19),
     VAR_22->live_range[VAR_26].start,
     VAR_22->live_range[VAR_26].end);
    switch (VAR_22->live_range[VAR_26].var & VAR_19) {
     case 128:
      FUNC_3(VAR_21, "(tmp/var)\n");
      break;
     case 132:
      FUNC_3(VAR_21, "(loop)\n");
      break;
     case 129:
      FUNC_3(VAR_21, "(silence)\n");
      break;
     case 130:
      FUNC_3(VAR_21, "(rope)\n");
      break;
     case 131:
      FUNC_3(VAR_21, "(new)\n");
      break;
    }
   }
  }
  if (VAR_22->last_try_catch) {
   FUNC_3(VAR_21, "EXCEPTION TABLE:\n");
   for (VAR_26 = 0; VAR_26 < VAR_22->last_try_catch; VAR_26++) {
    FUNC_3(VAR_21, "        BB%u",
     VAR_27->map[VAR_22->try_catch_array[VAR_26].try_op]);
    if (VAR_22->try_catch_array[VAR_26].catch_op) {
     FUNC_3(VAR_21, ", BB%u",
      VAR_27->map[VAR_22->try_catch_array[VAR_26].catch_op]);
    } else {
     FUNC_3(VAR_21, ", -");
    }
    if (VAR_22->try_catch_array[VAR_26].finally_op) {
     FUNC_3(VAR_21, ", BB%u",
      VAR_27->map[VAR_22->try_catch_array[VAR_26].finally_op]);
    } else {
     FUNC_3(VAR_21, ", -");
    }
    if (VAR_22->try_catch_array[VAR_26].finally_end) {
     FUNC_3(VAR_21, ", BB%u\n",
      VAR_27->map[VAR_22->try_catch_array[VAR_26].finally_end]);
    } else {
     FUNC_3(VAR_21, ", -\n");
    }
   }
  }
 } else {
  const zend_op *VAR_36 = VAR_22->opcodes;
  const zend_op *VAR_37 = VAR_36 + VAR_22->last;

  while (VAR_36 < VAR_37) {
   FUNC_5(VAR_22, ((void*)0), VAR_36, VAR_23, VAR_25);
   VAR_36++;
  }
  if (VAR_22->last_live_range && (VAR_23 & VAR_4)) {
   FUNC_3(VAR_21, "LIVE RANGES:\n");
   for (VAR_26 = 0; VAR_26 < VAR_22->last_live_range; VAR_26++) {
    FUNC_3(VAR_21, "        %u: L%u - L%u ",
     FUNC_0(VAR_22->live_range[VAR_26].var & ~VAR_19),
     VAR_22->live_range[VAR_26].start,
     VAR_22->live_range[VAR_26].end);
    switch (VAR_22->live_range[VAR_26].var & VAR_19) {
     case 128:
      FUNC_3(VAR_21, "(tmp/var)\n");
      break;
     case 132:
      FUNC_3(VAR_21, "(loop)\n");
      break;
     case 129:
      FUNC_3(VAR_21, "(silence)\n");
      break;
     case 130:
      FUNC_3(VAR_21, "(rope)\n");
      break;
     case 131:
      FUNC_3(VAR_21, "(new)\n");
      break;
    }
   }
  }
  if (VAR_22->last_try_catch) {
   FUNC_3(VAR_21, "EXCEPTION TABLE:\n");
   for (VAR_26 = 0; VAR_26 < VAR_22->last_try_catch; VAR_26++) {
    FUNC_3(VAR_21, "        L%zu",
     VAR_22->try_catch_array[VAR_26].try_op);
    if (VAR_22->try_catch_array[VAR_26].catch_op) {
     FUNC_3(VAR_21, ", L%u",
      VAR_22->try_catch_array[VAR_26].catch_op);
    } else {
     FUNC_3(VAR_21, ", -");
    }
    if (VAR_22->try_catch_array[VAR_26].finally_op) {
     FUNC_3(VAR_21, ", L%u",
      VAR_22->try_catch_array[VAR_26].finally_op);
    } else {
     FUNC_3(VAR_21, ", -");
    }
    if (VAR_22->try_catch_array[VAR_26].finally_end) {
     FUNC_3(VAR_21, ", L%u\n",
      VAR_22->try_catch_array[VAR_26].finally_end);
    } else {
     FUNC_3(VAR_21, ", -\n");
    }
   }
  }
 }
}
