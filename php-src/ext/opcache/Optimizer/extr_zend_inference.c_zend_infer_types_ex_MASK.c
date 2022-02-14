
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int is_instanceof; int type; int * ce; } ;
typedef TYPE_3__ zend_ssa_var_info ;
struct TYPE_15__ {int definition; TYPE_6__* definition_phi; } ;
typedef TYPE_4__ zend_ssa_var ;
struct TYPE_16__ {int type_mask; int * ce; } ;
typedef TYPE_5__ zend_ssa_type_constraint ;
struct TYPE_13__ {TYPE_5__ type; } ;
struct TYPE_17__ {scalar_t__ pi; size_t* sources; size_t block; TYPE_2__ constraint; int has_range_constraint; } ;
typedef TYPE_6__ zend_ssa_phi ;
struct TYPE_12__ {TYPE_8__* blocks; } ;
struct TYPE_18__ {int vars_count; TYPE_3__* var_info; TYPE_4__* vars; TYPE_1__ cfg; } ;
typedef TYPE_7__ zend_ssa ;
typedef int zend_script ;
typedef int zend_op_array ;
typedef int zend_long ;
typedef int zend_class_entry ;
typedef int zend_bitset ;
struct TYPE_19__ {int predecessors_count; } ;
typedef TYPE_8__ zend_basic_block ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,size_t) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int const*,TYPE_7__*,int const*,int ,int,int ) ;

int FUNC_11(const zend_op_array *VAR_8, const zend_script *VAR_9, zend_ssa *VAR_10, zend_bitset VAR_11, zend_long VAR_12)
{
 zend_basic_block *VAR_13 = VAR_10->cfg.blocks;
 zend_ssa_var *VAR_14 = VAR_10->vars;
 zend_ssa_var_info *VAR_15 = VAR_10->var_info;
 int VAR_16 = VAR_10->vars_count;
 int VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20 = FUNC_9(VAR_16);

 while (!FUNC_6(VAR_11, VAR_20)) {
  VAR_18 = FUNC_8(VAR_11, VAR_20);
  FUNC_7(VAR_11, VAR_18);
  if (VAR_14[VAR_18].definition_phi) {
   zend_ssa_phi *VAR_21 = VAR_14[VAR_18].definition_phi;
   if (VAR_21->pi >= 0) {
    zend_class_entry *VAR_22 = VAR_15[VAR_21->sources[0]].ce;
    int VAR_23 = VAR_15[VAR_21->sources[0]].is_instanceof;
    VAR_19 = FUNC_3(VAR_10, VAR_21->sources[0]);

    if (!VAR_21->has_range_constraint) {
     zend_ssa_type_constraint *VAR_24 = &VAR_21->constraint.type;
     VAR_19 &= VAR_24->type_mask;
     if (!(VAR_19 & (VAR_6|VAR_1|VAR_2|VAR_5))) {
      VAR_19 &= ~(VAR_3|VAR_4);
     }
     if ((VAR_19 & VAR_2) && VAR_24->ce && VAR_22 != VAR_24->ce) {
      if (!VAR_22) {
       VAR_22 = VAR_24->ce;
       VAR_23 = 1;
      } else if (VAR_23 && FUNC_4(VAR_24->ce, VAR_22)) {
       VAR_22 = VAR_24->ce;
      } else {


      }
     }
    }

    FUNC_1(VAR_19, VAR_18);
    FUNC_0(VAR_22, VAR_23, VAR_18);
   } else {
    int VAR_25 = 1;
    int VAR_26 = 0;
    zend_class_entry *VAR_27 = ((void*)0);

    VAR_19 = 0;
    for (VAR_17 = 0; VAR_17 < VAR_13[VAR_21->block].predecessors_count; VAR_17++) {
     VAR_19 |= FUNC_3(VAR_10, VAR_21->sources[VAR_17]);
    }
    FUNC_1(VAR_19, VAR_18);
    for (VAR_17 = 0; VAR_17 < VAR_13[VAR_21->block].predecessors_count; VAR_17++) {
     zend_ssa_var_info *VAR_28;

     FUNC_2(VAR_21->sources[VAR_17] >= 0);
     VAR_28 = &VAR_15[VAR_21->sources[VAR_17]];
     if (VAR_28->type & VAR_2) {
      if (VAR_25) {
       VAR_27 = VAR_28->ce;
       VAR_26 = VAR_28->is_instanceof;
       VAR_25 = 0;
      } else {
       VAR_26 |= VAR_28->is_instanceof;
       VAR_27 = FUNC_5(VAR_27, VAR_28->ce, &VAR_26);
      }
     }
    }
    FUNC_0(VAR_27, VAR_27 ? VAR_26 : 0, VAR_18);
   }
  } else if (VAR_14[VAR_18].definition >= 0) {
   VAR_17 = VAR_14[VAR_18].definition;
   if (FUNC_10(VAR_8, VAR_10, VAR_9, VAR_11, VAR_17, VAR_12) == VAR_0) {
    return VAR_0;
   }
  }
 }
 return VAR_7;
}
