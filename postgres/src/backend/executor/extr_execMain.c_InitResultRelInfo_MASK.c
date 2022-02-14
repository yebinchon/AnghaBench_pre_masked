
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {TYPE_1__* rd_rel; int trigdesc; } ;
struct TYPE_13__ {int ri_usesFdwDirectModify; int * ri_CopyMultiInsertBuffer; int * ri_PartitionInfo; TYPE_3__* ri_PartitionRoot; int * ri_PartitionCheck; int * ri_TrigNewSlot; int * ri_TrigOldSlot; int * ri_ReturningSlot; int * ri_onConflict; void* ri_onConflictArbiterIndexes; int * ri_projectReturning; int * ri_junkFilter; int * ri_GeneratedExprs; int * ri_ConstraintExprs; int * ri_FdwState; int * ri_FdwRoutine; int * ri_TrigInstrument; int ** ri_TrigWhenExprs; int * ri_TrigFunctions; TYPE_10__* ri_TrigDesc; int * ri_IndexRelationInfo; int * ri_IndexRelationDescs; scalar_t__ ri_NumIndices; TYPE_3__* ri_RelationDesc; int ri_RangeTableIndex; int type; } ;
struct TYPE_12__ {scalar_t__ relkind; } ;
struct TYPE_11__ {int numtriggers; } ;
typedef TYPE_2__ ResultRelInfo ;
typedef TYPE_3__* Relation ;
typedef int List ;
typedef int Index ;
typedef int FmgrInfo ;
typedef int ExprState ;


 TYPE_10__* FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_3__*,int) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6(ResultRelInfo *VAR_3,
      Relation VAR_4,
      Index VAR_5,
      Relation VAR_6,
      int VAR_7)
{
 List *VAR_8 = VAR_0;

 FUNC_3(VAR_3, 0, sizeof(ResultRelInfo));
 VAR_3->type = VAR_2;
 VAR_3->ri_RangeTableIndex = VAR_5;
 VAR_3->ri_RelationDesc = VAR_4;
 VAR_3->ri_NumIndices = 0;
 VAR_3->ri_IndexRelationDescs = ((void*)0);
 VAR_3->ri_IndexRelationInfo = ((void*)0);

 VAR_3->ri_TrigDesc = FUNC_0(VAR_4->trigdesc);
 if (VAR_3->ri_TrigDesc)
 {
  int VAR_9 = VAR_3->ri_TrigDesc->numtriggers;

  VAR_3->ri_TrigFunctions = (FmgrInfo *)
   FUNC_5(VAR_9 * sizeof(FmgrInfo));
  VAR_3->ri_TrigWhenExprs = (ExprState **)
   FUNC_5(VAR_9 * sizeof(ExprState *));
  if (VAR_7)
   VAR_3->ri_TrigInstrument = FUNC_2(VAR_9, VAR_7);
 }
 else
 {
  VAR_3->ri_TrigFunctions = ((void*)0);
  VAR_3->ri_TrigWhenExprs = ((void*)0);
  VAR_3->ri_TrigInstrument = ((void*)0);
 }
 if (VAR_4->rd_rel->relkind == VAR_1)
  VAR_3->ri_FdwRoutine = FUNC_1(VAR_4, 1);
 else
  VAR_3->ri_FdwRoutine = ((void*)0);


 VAR_3->ri_FdwState = ((void*)0);
 VAR_3->ri_usesFdwDirectModify = 0;
 VAR_3->ri_ConstraintExprs = ((void*)0);
 VAR_3->ri_GeneratedExprs = ((void*)0);
 VAR_3->ri_junkFilter = ((void*)0);
 VAR_3->ri_projectReturning = ((void*)0);
 VAR_3->ri_onConflictArbiterIndexes = VAR_0;
 VAR_3->ri_onConflict = ((void*)0);
 VAR_3->ri_ReturningSlot = ((void*)0);
 VAR_3->ri_TrigOldSlot = ((void*)0);
 VAR_3->ri_TrigNewSlot = ((void*)0);
 VAR_8 = FUNC_4(VAR_4);

 VAR_3->ri_PartitionCheck = VAR_8;
 VAR_3->ri_PartitionRoot = VAR_6;
 VAR_3->ri_PartitionInfo = ((void*)0);
 VAR_3->ri_CopyMultiInsertBuffer = ((void*)0);
}
