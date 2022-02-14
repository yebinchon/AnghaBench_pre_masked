
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ps_ExprContext; } ;
struct TYPE_8__ {TYPE_6__ ps; scalar_t__ ss_ScanTupleSlot; } ;
struct TYPE_9__ {int numaggs; scalar_t__ aggcontext; scalar_t__ partcontext; TYPE_4__* peragg; TYPE_4__* perfunc; TYPE_1__ ss; int tmpcontext; scalar_t__ frametail_slot; scalar_t__ framehead_slot; scalar_t__ temp_slot_2; scalar_t__ temp_slot_1; scalar_t__ agg_row_slot; scalar_t__ first_part_slot; } ;
typedef TYPE_2__ WindowAggState ;
struct TYPE_10__ {scalar_t__ aggcontext; } ;
typedef int PlanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(WindowAggState *VAR_0)
{
 PlanState *VAR_1;
 int VAR_2;

 FUNC_6(VAR_0);

 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);
 FUNC_0(VAR_0->first_part_slot);
 FUNC_0(VAR_0->agg_row_slot);
 FUNC_0(VAR_0->temp_slot_1);
 FUNC_0(VAR_0->temp_slot_2);
 if (VAR_0->framehead_slot)
  FUNC_0(VAR_0->framehead_slot);
 if (VAR_0->frametail_slot)
  FUNC_0(VAR_0->frametail_slot);




 FUNC_2(&VAR_0->ss.ps);
 VAR_0->ss.ps.ps_ExprContext = VAR_0->tmpcontext;
 FUNC_2(&VAR_0->ss.ps);

 for (VAR_2 = 0; VAR_2 < VAR_0->numaggs; VAR_2++)
 {
  if (VAR_0->peragg[VAR_2].aggcontext != VAR_0->aggcontext)
   FUNC_3(VAR_0->peragg[VAR_2].aggcontext);
 }
 FUNC_3(VAR_0->partcontext);
 FUNC_3(VAR_0->aggcontext);

 FUNC_5(VAR_0->perfunc);
 FUNC_5(VAR_0->peragg);

 VAR_1 = FUNC_4(VAR_0);
 FUNC_1(VAR_1);
}
