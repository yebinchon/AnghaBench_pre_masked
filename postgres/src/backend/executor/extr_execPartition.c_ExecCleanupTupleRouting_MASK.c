
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int state; } ;
struct TYPE_16__ {TYPE_2__ ps; } ;
struct TYPE_15__ {scalar_t__ tupslot; int reldesc; } ;
struct TYPE_14__ {int num_dispatch; int num_partitions; TYPE_3__** partitions; TYPE_5__** partition_dispatch_info; int * subplan_resultrel_htab; } ;
struct TYPE_13__ {int ri_RelationDesc; TYPE_1__* ri_FdwRoutine; } ;
struct TYPE_11__ {int (* EndForeignInsert ) (int ,TYPE_3__*) ;} ;
typedef TYPE_3__ ResultRelInfo ;
typedef TYPE_4__ PartitionTupleRouting ;
typedef TYPE_5__* PartitionDispatch ;
typedef int Oid ;
typedef TYPE_6__ ModifyTableState ;
typedef int HTAB ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ,int*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(ModifyTableState *VAR_2,
      PartitionTupleRouting *VAR_3)
{
 HTAB *VAR_4 = VAR_3->subplan_resultrel_htab;
 int VAR_5;
 for (VAR_5 = 1; VAR_5 < VAR_3->num_dispatch; VAR_5++)
 {
  PartitionDispatch VAR_6 = VAR_3->partition_dispatch_info[VAR_5];

  FUNC_5(VAR_6->reldesc, VAR_1);

  if (VAR_6->tupslot)
   FUNC_1(VAR_6->tupslot);
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_partitions; VAR_5++)
 {
  ResultRelInfo *VAR_7 = VAR_3->partitions[VAR_5];


  if (VAR_7->ri_FdwRoutine != ((void*)0) &&
   VAR_7->ri_FdwRoutine->EndForeignInsert != ((void*)0))
   VAR_7->ri_FdwRoutine->EndForeignInsert(VAR_2->ps.state,
                 VAR_7);





  if (VAR_4)
  {
   Oid VAR_8;
   bool VAR_9;

   VAR_8 = FUNC_2(VAR_7->ri_RelationDesc);

   (void) FUNC_3(VAR_4, &VAR_8, VAR_0, &VAR_9);
   if (VAR_9)
    continue;
  }

  FUNC_0(VAR_7);
  FUNC_5(VAR_7->ri_RelationDesc, VAR_1);
 }
}
