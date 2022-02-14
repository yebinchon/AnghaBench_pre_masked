
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_11__ {int * es_query_dsa; } ;
struct TYPE_8__ {TYPE_4__* state; } ;
struct TYPE_10__ {scalar_t__ nreaders; int need_to_scan_locally; TYPE_2__* pei; TYPE_1__ ps; int * funnel_slot; } ;
struct TYPE_9__ {int * area; } ;
typedef int PlanState ;
typedef int HeapTuple ;
typedef TYPE_3__ GatherState ;
typedef TYPE_4__ EState ;


 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_8(GatherState *VAR_0)
{
 PlanState *VAR_1 = FUNC_7(VAR_0);
 TupleTableSlot *VAR_2;
 TupleTableSlot *VAR_3 = VAR_0->funnel_slot;
 HeapTuple VAR_4;

 while (VAR_0->nreaders > 0 || VAR_0->need_to_scan_locally)
 {
  FUNC_0();

  if (VAR_0->nreaders > 0)
  {
   VAR_4 = FUNC_6(VAR_0);

   if (FUNC_4(VAR_4))
   {
    FUNC_3(VAR_4,
           VAR_3,
           1);
    return VAR_3;
   }
  }

  if (VAR_0->need_to_scan_locally)
  {
   EState *VAR_5 = VAR_0->ps.state;


   VAR_5->es_query_dsa =
    VAR_0->pei ? VAR_0->pei->area : ((void*)0);
   VAR_2 = FUNC_2(VAR_1);
   VAR_5->es_query_dsa = ((void*)0);

   if (!FUNC_5(VAR_2))
    return VAR_2;

   VAR_0->need_to_scan_locally = 0;
  }
 }

 return FUNC_1(VAR_3);
}
