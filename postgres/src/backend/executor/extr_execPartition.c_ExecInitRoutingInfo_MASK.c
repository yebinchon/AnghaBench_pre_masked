
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_23__ {int es_tupleTable; } ;
struct TYPE_22__ {scalar_t__ mt_oc_transition_capture; scalar_t__ mt_transition_capture; } ;
struct TYPE_21__ {int* indexes; } ;
struct TYPE_20__ {int * pi_PartitionToRootMap; int * pi_PartitionTupleSlot; int * pi_RootToPartitionMap; } ;
struct TYPE_19__ {int num_partitions; int max_partitions; TYPE_2__** partitions; int memcxt; } ;
struct TYPE_18__ {int * ri_CopyMultiInsertBuffer; TYPE_4__* ri_PartitionInfo; TYPE_1__* ri_FdwRoutine; int ri_PartitionRoot; int ri_RelationDesc; } ;
struct TYPE_17__ {int (* BeginForeignInsert ) (TYPE_6__*,TYPE_2__*) ;} ;
typedef TYPE_2__ ResultRelInfo ;
typedef int Relation ;
typedef TYPE_3__ PartitionTupleRouting ;
typedef TYPE_4__ PartitionRoutingInfo ;
typedef TYPE_5__* PartitionDispatch ;
typedef TYPE_6__ ModifyTableState ;
typedef int MemoryContext ;
typedef TYPE_7__ EState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ) ;
 TYPE_4__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__**,int) ;
 int FUNC_6 (TYPE_6__*,TYPE_2__*) ;
 int * FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(ModifyTableState *VAR_0,
     EState *VAR_1,
     PartitionTupleRouting *VAR_2,
     PartitionDispatch VAR_3,
     ResultRelInfo *VAR_4,
     int VAR_5)
{
 MemoryContext VAR_6;
 PartitionRoutingInfo *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_2->memcxt);

 VAR_7 = FUNC_4(sizeof(PartitionRoutingInfo));





 VAR_7->pi_RootToPartitionMap =
  FUNC_3(FUNC_2(VAR_4->ri_PartitionRoot),
          FUNC_2(VAR_4->ri_RelationDesc));







 if (VAR_7->pi_RootToPartitionMap != ((void*)0))
 {
  Relation VAR_9 = VAR_4->ri_RelationDesc;






  VAR_7->pi_PartitionTupleSlot =
   FUNC_7(VAR_9, &VAR_1->es_tupleTable);
 }
 else
  VAR_7->pi_PartitionTupleSlot = ((void*)0);





 if (VAR_0 &&
  (VAR_0->mt_transition_capture || VAR_0->mt_oc_transition_capture))
 {
  VAR_7->pi_PartitionToRootMap =
   FUNC_3(FUNC_2(VAR_4->ri_RelationDesc),
           FUNC_2(VAR_4->ri_PartitionRoot));
 }
 else
  VAR_7->pi_PartitionToRootMap = ((void*)0);





 if (VAR_4->ri_FdwRoutine != ((void*)0) &&
  VAR_4->ri_FdwRoutine->BeginForeignInsert != ((void*)0))
  VAR_4->ri_FdwRoutine->BeginForeignInsert(VAR_0, VAR_4);

 VAR_4->ri_PartitionInfo = VAR_7;
 VAR_4->ri_CopyMultiInsertBuffer = ((void*)0);




 FUNC_0(VAR_3->indexes[VAR_5] == -1);

 VAR_8 = VAR_2->num_partitions++;


 if (VAR_2->num_partitions >= VAR_2->max_partitions)
 {
  if (VAR_2->max_partitions == 0)
  {
   VAR_2->max_partitions = 8;
   VAR_2->partitions = (ResultRelInfo **)
    FUNC_4(sizeof(ResultRelInfo *) * VAR_2->max_partitions);
  }
  else
  {
   VAR_2->max_partitions *= 2;
   VAR_2->partitions = (ResultRelInfo **)
    FUNC_5(VAR_2->partitions, sizeof(ResultRelInfo *) *
       VAR_2->max_partitions);
  }
 }

 VAR_2->partitions[VAR_8] = VAR_4;
 VAR_3->indexes[VAR_5] = VAR_8;

 FUNC_1(VAR_6);
}
