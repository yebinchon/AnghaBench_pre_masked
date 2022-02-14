
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_34__ {int var; int scc; int definition; int use_chain; int alias; TYPE_11__* phi_use_chain; TYPE_11__* sym_use_chain; TYPE_11__* definition_phi; } ;
typedef TYPE_9__ zend_ssa_var ;
struct TYPE_21__ {size_t min_ssa_var; size_t max_ssa_var; } ;
typedef TYPE_10__ zend_ssa_range_constraint ;
struct TYPE_31__ {TYPE_10__ range; } ;
struct TYPE_22__ {int block; size_t ssa_var; int var; scalar_t__ pi; size_t* sources; struct TYPE_22__* next; struct TYPE_22__** use_chains; struct TYPE_22__* sym_use_chain; TYPE_6__ constraint; scalar_t__ has_range_constraint; } ;
typedef TYPE_11__ zend_ssa_phi ;
struct TYPE_23__ {size_t op1_use; int op1_use_chain; size_t op2_use; int op2_use_chain; size_t result_use; int res_use_chain; size_t op1_def; size_t op2_def; size_t result_def; } ;
typedef TYPE_12__ zend_ssa_op ;
struct TYPE_33__ {int blocks_count; int flags; TYPE_7__* blocks; } ;
struct TYPE_24__ {int vars_count; TYPE_8__ cfg; TYPE_5__* blocks; TYPE_12__* ops; TYPE_9__* vars; } ;
typedef TYPE_13__ zend_ssa ;
struct TYPE_25__ {int last_var; int last; int * vars; TYPE_4__* opcodes; } ;
typedef TYPE_14__ zend_op_array ;
typedef int zend_arena ;
struct TYPE_32__ {int predecessors_count; } ;
struct TYPE_30__ {TYPE_11__* phis; } ;
struct TYPE_28__ {int var; } ;
struct TYPE_27__ {int var; } ;
struct TYPE_26__ {int var; } ;
struct TYPE_29__ {TYPE_3__ result; TYPE_2__ op2; TYPE_1__ op1; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 TYPE_9__* FUNC_2 (int **,int,int) ;
 TYPE_11__* FUNC_3 (TYPE_13__*,size_t,TYPE_11__*) ;
 scalar_t__ FUNC_4 (int ,char*) ;

int FUNC_5(zend_arena **VAR_4, const zend_op_array *VAR_5, zend_ssa *VAR_6)
{
 zend_ssa_var *VAR_7;
 int VAR_8;

 if (!VAR_6->vars) {
  VAR_6->vars = FUNC_2(VAR_4, VAR_6->vars_count, sizeof(zend_ssa_var));
 }
 VAR_7 = VAR_6->vars;

 for (VAR_8 = 0; VAR_8 < VAR_5->last_var; VAR_8++) {
  VAR_7[VAR_8].var = VAR_8;
  VAR_7[VAR_8].scc = -1;
  VAR_7[VAR_8].definition = -1;
  VAR_7[VAR_8].use_chain = -1;
 }
 for (VAR_8 = VAR_5->last_var; VAR_8 < VAR_6->vars_count; VAR_8++) {
  VAR_7[VAR_8].var = -1;
  VAR_7[VAR_8].scc = -1;
  VAR_7[VAR_8].definition = -1;
  VAR_7[VAR_8].use_chain = -1;
 }

 for (VAR_8 = VAR_5->last - 1; VAR_8 >= 0; VAR_8--) {
  zend_ssa_op *VAR_9 = VAR_6->ops + VAR_8;

  if (VAR_9->op1_use >= 0) {
   VAR_9->op1_use_chain = VAR_7[VAR_9->op1_use].use_chain;
   VAR_7[VAR_9->op1_use].use_chain = VAR_8;
  }
  if (VAR_9->op2_use >= 0 && VAR_9->op2_use != VAR_9->op1_use) {
   VAR_9->op2_use_chain = VAR_7[VAR_9->op2_use].use_chain;
   VAR_7[VAR_9->op2_use].use_chain = VAR_8;
  }
  if (VAR_9->result_use >= 0 && VAR_9->result_use != VAR_9->op1_use && VAR_9->result_use != VAR_9->op2_use) {
   VAR_9->res_use_chain = VAR_7[VAR_9->result_use].use_chain;
   VAR_7[VAR_9->result_use].use_chain = VAR_8;
  }
  if (VAR_9->op1_def >= 0) {
   VAR_7[VAR_9->op1_def].var = FUNC_0(VAR_5->opcodes[VAR_8].op1.var);
   VAR_7[VAR_9->op1_def].definition = VAR_8;
  }
  if (VAR_9->op2_def >= 0) {
   VAR_7[VAR_9->op2_def].var = FUNC_0(VAR_5->opcodes[VAR_8].op2.var);
   VAR_7[VAR_9->op2_def].definition = VAR_8;
  }
  if (VAR_9->result_def >= 0) {
   VAR_7[VAR_9->result_def].var = FUNC_0(VAR_5->opcodes[VAR_8].result.var);
   VAR_7[VAR_9->result_def].definition = VAR_8;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->cfg.blocks_count; VAR_8++) {
  zend_ssa_phi *VAR_10 = VAR_6->blocks[VAR_8].phis;
  while (VAR_10) {
   VAR_10->block = VAR_8;
   VAR_7[VAR_10->ssa_var].var = VAR_10->var;
   VAR_7[VAR_10->ssa_var].definition_phi = VAR_10;
   if (VAR_10->pi >= 0) {
    zend_ssa_phi *VAR_11;

    FUNC_1(VAR_10->sources[0] >= 0);
    VAR_11 = VAR_7[VAR_10->sources[0]].phi_use_chain;
    while (VAR_11 && VAR_11 != VAR_10) {
     VAR_11 = FUNC_3(VAR_6, VAR_10->sources[0], VAR_11);
    }
    if (!VAR_11) {
     VAR_10->use_chains[0] = VAR_7[VAR_10->sources[0]].phi_use_chain;
     VAR_7[VAR_10->sources[0]].phi_use_chain = VAR_10;
    }
    if (VAR_10->has_range_constraint) {

     zend_ssa_range_constraint *VAR_12 = &VAR_10->constraint.range;
     if (VAR_12->min_ssa_var >= 0) {
      VAR_10->sym_use_chain = VAR_7[VAR_12->min_ssa_var].sym_use_chain;
      VAR_7[VAR_12->min_ssa_var].sym_use_chain = VAR_10;
     } else if (VAR_12->max_ssa_var >= 0) {
      VAR_10->sym_use_chain = VAR_7[VAR_12->max_ssa_var].sym_use_chain;
      VAR_7[VAR_12->max_ssa_var].sym_use_chain = VAR_10;
     }
    }
   } else {
    int VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_6->cfg.blocks[VAR_8].predecessors_count; VAR_13++) {
     zend_ssa_phi *VAR_14;

     FUNC_1(VAR_10->sources[VAR_13] >= 0);
     VAR_14 = VAR_7[VAR_10->sources[VAR_13]].phi_use_chain;
     while (VAR_14 && VAR_14 != VAR_10) {
      VAR_14 = FUNC_3(VAR_6, VAR_10->sources[VAR_13], VAR_14);
     }
     if (!VAR_14) {
      VAR_10->use_chains[VAR_13] = VAR_7[VAR_10->sources[VAR_13]].phi_use_chain;
      VAR_7[VAR_10->sources[VAR_13]].phi_use_chain = VAR_10;
     }
    }
   }
   VAR_10 = VAR_10->next;
  }
 }


 for (VAR_8 = 0; VAR_8 < VAR_5->last_var; VAR_8++) {
  if ((VAR_6->cfg.flags & VAR_3)) {
   VAR_7[VAR_8].alias = VAR_2;
  } else if (FUNC_4(VAR_5->vars[VAR_8], "http_response_header")) {
   VAR_7[VAR_8].alias = VAR_0;
  }
 }
 for (VAR_8 = VAR_5->last_var; VAR_8 < VAR_6->vars_count; VAR_8++) {
  if (VAR_7[VAR_8].var < VAR_5->last_var) {
   VAR_7[VAR_8].alias = VAR_7[VAR_7[VAR_8].var].alias;
  }
 }

 return VAR_1;
}
