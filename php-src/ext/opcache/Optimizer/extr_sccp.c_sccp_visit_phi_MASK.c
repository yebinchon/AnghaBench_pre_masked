
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zval ;
struct TYPE_15__ {size_t ssa_var; size_t block; scalar_t__ pi; size_t* sources; } ;
typedef TYPE_3__ zend_ssa_phi ;
struct TYPE_13__ {int* predecessors; TYPE_5__* blocks; } ;
struct TYPE_16__ {TYPE_2__* vars; TYPE_1__ cfg; } ;
typedef TYPE_4__ zend_ssa ;
struct TYPE_17__ {size_t predecessor_offset; int predecessors_count; } ;
typedef TYPE_5__ zend_basic_block ;
struct TYPE_18__ {TYPE_4__* ssa; } ;
typedef TYPE_6__ scdf_ctx ;
struct TYPE_19__ {int * values; } ;
typedef TYPE_7__ sccp_ctx ;
struct TYPE_14__ {scalar_t__ escape_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*,TYPE_7__*,size_t,int *) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(scdf_ctx *VAR_2, zend_ssa_phi *VAR_3) {
 sccp_ctx *VAR_4 = (sccp_ctx *) VAR_2;
 zend_ssa *VAR_5 = VAR_2->ssa;
 FUNC_2(VAR_3->ssa_var >= 0);
 if (!FUNC_0(&VAR_4->values[VAR_3->ssa_var])) {
  zend_basic_block *VAR_6 = &VAR_5->cfg.blocks[VAR_3->block];
  int *VAR_7 = &VAR_5->cfg.predecessors[VAR_6->predecessor_offset];

  int VAR_8;
  zval VAR_9;
  FUNC_1(&VAR_9);



  if (VAR_3->pi >= 0) {
   FUNC_2(VAR_3->sources[0] >= 0);
   if (FUNC_5(VAR_2, VAR_3->pi, VAR_3->block)) {
    FUNC_4(&VAR_9, &VAR_4->values[VAR_3->sources[0]], VAR_5->vars[VAR_3->ssa_var].escape_state != VAR_0);
   }
  } else {
   for (VAR_8 = 0; VAR_8 < VAR_6->predecessors_count; VAR_8++) {
    FUNC_2(VAR_3->sources[VAR_8] >= 0);
    if (FUNC_5(VAR_2, VAR_7[VAR_8], VAR_3->block)) {




     FUNC_4(&VAR_9, &VAR_4->values[VAR_3->sources[VAR_8]], VAR_5->vars[VAR_3->ssa_var].escape_state != VAR_0);
    } else {



    }
   }
  }




  FUNC_7(VAR_2, VAR_4, VAR_3->ssa_var, &VAR_9);
  FUNC_8(&VAR_9);
 }
}
