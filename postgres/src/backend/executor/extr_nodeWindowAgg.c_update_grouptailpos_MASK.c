
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* ps_ExprContext; scalar_t__ plan; } ;
struct TYPE_11__ {int ss_ScanTupleSlot; TYPE_2__ ps; } ;
struct TYPE_12__ {int grouptail_valid; int grouptailpos; int spooled_rows; int currentpos; int temp_slot_2; TYPE_3__ ss; int buffer; int grouptail_ptr; } ;
typedef TYPE_4__ WindowAggState ;
struct TYPE_13__ {scalar_t__ ordNumCols; } ;
typedef TYPE_5__ WindowAgg ;
struct TYPE_9__ {int ecxt_per_query_memory; } ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(WindowAggState *VAR_0)
{
 WindowAgg *VAR_1 = (WindowAgg *) VAR_0->ss.ps.plan;
 MemoryContext VAR_2;

 if (VAR_0->grouptail_valid)
  return;


 VAR_2 = FUNC_2(VAR_0->ss.ps.ps_ExprContext->ecxt_per_query_memory);


 if (VAR_1->ordNumCols == 0)
 {
  FUNC_4(VAR_0, -1);
  VAR_0->grouptailpos = VAR_0->spooled_rows;
  VAR_0->grouptail_valid = 1;
  FUNC_2(VAR_2);
  return;
 }
 FUNC_0(VAR_0->grouptailpos <= VAR_0->currentpos);
 FUNC_6(VAR_0->buffer,
           VAR_0->grouptail_ptr);
 for (;;)
 {

  VAR_0->grouptailpos++;
  FUNC_4(VAR_0, VAR_0->grouptailpos);
  if (!FUNC_5(VAR_0->buffer, 1, 1,
          VAR_0->temp_slot_2))
   break;
  if (VAR_0->grouptailpos > VAR_0->currentpos &&
   !FUNC_3(VAR_0, VAR_0->temp_slot_2,
        VAR_0->ss.ss_ScanTupleSlot))
   break;
 }
 FUNC_1(VAR_0->temp_slot_2);
 VAR_0->grouptail_valid = 1;

 FUNC_2(VAR_2);
}
