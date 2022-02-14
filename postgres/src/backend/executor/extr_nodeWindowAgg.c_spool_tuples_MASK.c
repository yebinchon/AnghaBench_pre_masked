
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_11__ {TYPE_1__* ps_ExprContext; scalar_t__ plan; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;
struct TYPE_13__ {int partition_spooled; int spooled_rows; int more_partitions; int buffer; int first_part_slot; int partEqfunction; TYPE_6__* tmpcontext; TYPE_3__ ss; } ;
typedef TYPE_4__ WindowAggState ;
struct TYPE_14__ {scalar_t__ partNumCols; } ;
typedef TYPE_5__ WindowAgg ;
typedef int TupleTableSlot ;
struct TYPE_15__ {int * ecxt_outertuple; int ecxt_innertuple; } ;
struct TYPE_10__ {int ecxt_per_query_memory; } ;
typedef int PlanState ;
typedef int MemoryContext ;
typedef TYPE_6__ ExprContext ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(WindowAggState *VAR_0, int64 VAR_1)
{
 WindowAgg *VAR_2 = (WindowAgg *) VAR_0->ss.ps.plan;
 PlanState *VAR_3;
 TupleTableSlot *VAR_4;
 MemoryContext VAR_5;

 if (!VAR_0->buffer)
  return;
 if (VAR_0->partition_spooled)
  return;
 if (!FUNC_6(VAR_0->buffer))
  VAR_1 = -1;

 VAR_3 = FUNC_5(VAR_0);


 VAR_5 = FUNC_3(VAR_0->ss.ps.ps_ExprContext->ecxt_per_query_memory);

 while (VAR_0->spooled_rows <= VAR_1 || VAR_1 == -1)
 {
  VAR_4 = FUNC_1(VAR_3);
  if (FUNC_4(VAR_4))
  {

   VAR_0->partition_spooled = 1;
   VAR_0->more_partitions = 0;
   break;
  }

  if (VAR_2->partNumCols > 0)
  {
   ExprContext *VAR_6 = VAR_0->tmpcontext;

   VAR_6->ecxt_innertuple = VAR_0->first_part_slot;
   VAR_6->ecxt_outertuple = VAR_4;


   if (!FUNC_2(VAR_0->partEqfunction, VAR_6))
   {



    FUNC_0(VAR_0->first_part_slot, VAR_4);
    VAR_0->partition_spooled = 1;
    VAR_0->more_partitions = 1;
    break;
   }
  }


  FUNC_7(VAR_0->buffer, VAR_4);
  VAR_0->spooled_rows++;
 }

 FUNC_3(VAR_5);
}
