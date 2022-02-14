
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ int64 ;
typedef TYPE_3__* WindowStatePerAgg ;
typedef TYPE_4__* WindowObject ;
struct TYPE_21__ {TYPE_6__* ps_ExprContext; } ;
struct TYPE_23__ {TYPE_1__ ps; } ;
struct TYPE_26__ {int numaggs; scalar_t__ frameheadpos; scalar_t__ aggregatedbase; int frameOptions; scalar_t__ currentpos; scalar_t__ aggregatedupto; scalar_t__ aggcontext; int * perfunc; TYPE_3__* peragg; TYPE_20__* tmpcontext; int * temp_slot_1; int * agg_row_slot; TYPE_4__* agg_winobj; TYPE_2__ ss; } ;
typedef TYPE_5__ WindowAggState ;
typedef int TupleTableSlot ;
struct TYPE_27__ {void** ecxt_aggvalues; int* ecxt_aggnulls; } ;
struct TYPE_25__ {scalar_t__ markptr; } ;
struct TYPE_24__ {int wfuncno; void* resultValue; int resultValueIsNull; int restart; scalar_t__ aggcontext; int resulttypeLen; int resulttypeByVal; int invtransfn_oid; } ;
struct TYPE_22__ {int * ecxt_outertuple; } ;
typedef scalar_t__ MemoryContext ;
typedef TYPE_6__ ExprContext ;
typedef void* Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_20__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,scalar_t__) ;
 int FUNC_9 (TYPE_5__*,int *,TYPE_3__*) ;
 int FUNC_10 (TYPE_5__*,int *,TYPE_3__*) ;
 void* FUNC_11 (void*,int ,int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (TYPE_5__*,int *,TYPE_3__*,void**,int*) ;
 int FUNC_14 (TYPE_5__*,int *,TYPE_3__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_5__*,scalar_t__,int *) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_4__*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_19(WindowAggState *VAR_4)
{
 WindowStatePerAgg VAR_5;
 int VAR_6,
    VAR_7,
    VAR_8,
    VAR_9;
 int64 VAR_10;
 MemoryContext VAR_11;
 ExprContext *VAR_12;
 WindowObject VAR_13;
 TupleTableSlot *VAR_14;
 TupleTableSlot *VAR_15;

 VAR_7 = VAR_4->numaggs;
 if (VAR_7 == 0)
  return;


 VAR_12 = VAR_4->ss.ps.ps_ExprContext;
 VAR_13 = VAR_4->agg_winobj;
 VAR_14 = VAR_4->agg_row_slot;
 VAR_15 = VAR_4->temp_slot_1;
 FUNC_17(VAR_4);
 if (VAR_4->frameheadpos < VAR_4->aggregatedbase)
  FUNC_12(VAR_0, "window frame head moved backward");
 if (VAR_4->aggregatedbase == VAR_4->frameheadpos &&
  (VAR_4->frameOptions & (VAR_2 |
           VAR_1)) &&
  !(VAR_4->frameOptions & VAR_3) &&
  VAR_4->aggregatedbase <= VAR_4->currentpos &&
  VAR_4->aggregatedupto > VAR_4->currentpos)
 {
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  {
   VAR_5 = &VAR_4->peragg[VAR_9];
   VAR_6 = VAR_5->wfuncno;
   VAR_12->ecxt_aggvalues[VAR_6] = VAR_5->resultValue;
   VAR_12->ecxt_aggnulls[VAR_6] = VAR_5->resultValueIsNull;
  }
  return;
 }
 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  VAR_5 = &VAR_4->peragg[VAR_9];
  if (VAR_4->currentpos == 0 ||
   (VAR_4->aggregatedbase != VAR_4->frameheadpos &&
    !FUNC_5(VAR_5->invtransfn_oid)) ||
   (VAR_4->frameOptions & VAR_3) ||
   VAR_4->aggregatedupto <= VAR_4->frameheadpos)
  {
   VAR_5->restart = 1;
   VAR_8++;
  }
  else
   VAR_5->restart = 0;
 }
 while (VAR_8 < VAR_7 &&
     VAR_4->aggregatedbase < VAR_4->frameheadpos)
 {




  if (!FUNC_18(VAR_13, VAR_4->aggregatedbase,
         VAR_15))
   FUNC_12(VAR_0, "could not re-fetch previously fetched frame row");


  VAR_4->tmpcontext->ecxt_outertuple = VAR_15;





  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  {
   bool VAR_16;

   VAR_5 = &VAR_4->peragg[VAR_9];
   if (VAR_5->restart)
    continue;

   VAR_6 = VAR_5->wfuncno;
   VAR_16 = FUNC_10(VAR_4,
             &VAR_4->perfunc[VAR_6],
             VAR_5);
   if (!VAR_16)
   {

    VAR_5->restart = 1;
    VAR_8++;
   }
  }


  FUNC_6(VAR_4->tmpcontext);


  VAR_4->aggregatedbase++;
  FUNC_2(VAR_15);
 }






 VAR_4->aggregatedbase = VAR_4->frameheadpos;





 if (VAR_13->markptr >= 0)
  FUNC_8(VAR_13, VAR_4->frameheadpos);
 if (VAR_8 > 0)
  FUNC_3(VAR_4->aggcontext);
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  VAR_5 = &VAR_4->peragg[VAR_9];


  FUNC_0(VAR_5->aggcontext != VAR_4->aggcontext ||
      VAR_8 == 0 ||
      VAR_5->restart);

  if (VAR_5->restart)
  {
   VAR_6 = VAR_5->wfuncno;
   FUNC_14(VAR_4,
            &VAR_4->perfunc[VAR_6],
            VAR_5);
  }
  else if (!VAR_5->resultValueIsNull)
  {
   if (!VAR_5->resulttypeByVal)
    FUNC_15(FUNC_1(VAR_5->resultValue));
   VAR_5->resultValue = (Datum) 0;
   VAR_5->resultValueIsNull = 1;
  }
 }
 VAR_10 = VAR_4->aggregatedupto;
 if (VAR_8 > 0 &&
  VAR_4->aggregatedupto != VAR_4->frameheadpos)
 {
  VAR_4->aggregatedupto = VAR_4->frameheadpos;
  FUNC_2(VAR_14);
 }
 for (;;)
 {
  int VAR_17;


  if (FUNC_7(VAR_14))
  {
   if (!FUNC_18(VAR_13, VAR_4->aggregatedupto,
          VAR_14))
    break;
  }





  VAR_17 = FUNC_16(VAR_4, VAR_4->aggregatedupto, VAR_14);
  if (VAR_17 < 0)
   break;
  if (VAR_17 == 0)
   goto next_tuple;


  VAR_4->tmpcontext->ecxt_outertuple = VAR_14;


  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  {
   VAR_5 = &VAR_4->peragg[VAR_9];


   if (!VAR_5->restart &&
    VAR_4->aggregatedupto < VAR_10)
    continue;

   VAR_6 = VAR_5->wfuncno;
   FUNC_9(VAR_4,
         &VAR_4->perfunc[VAR_6],
         VAR_5);
  }

next_tuple:

  FUNC_6(VAR_4->tmpcontext);


  VAR_4->aggregatedupto++;
  FUNC_2(VAR_14);
 }


 FUNC_0(VAR_10 <= VAR_4->aggregatedupto);




 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  Datum *VAR_18;
  bool *VAR_19;

  VAR_5 = &VAR_4->peragg[VAR_9];
  VAR_6 = VAR_5->wfuncno;
  VAR_18 = &VAR_12->ecxt_aggvalues[VAR_6];
  VAR_19 = &VAR_12->ecxt_aggnulls[VAR_6];
  FUNC_13(VAR_4,
         &VAR_4->perfunc[VAR_6],
         VAR_5,
         VAR_18, VAR_19);
  if (!VAR_5->resulttypeByVal && !*VAR_19)
  {
   VAR_11 = FUNC_4(VAR_5->aggcontext);
   VAR_5->resultValue =
    FUNC_11(*VAR_18,
        VAR_5->resulttypeByVal,
        VAR_5->resulttypeLen);
   FUNC_4(VAR_11);
  }
  else
  {
   VAR_5->resultValue = *VAR_18;
  }
  VAR_5->resultValueIsNull = *VAR_19;
 }
}
