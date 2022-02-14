
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TriggerEvent ;
struct TYPE_14__ {scalar_t__ tgenabled; scalar_t__ tgnattr; int tgqual; scalar_t__* tgattr; } ;
typedef TYPE_2__ Trigger ;
struct TYPE_17__ {int es_query_cxt; } ;
struct TYPE_16__ {int * ecxt_outertuple; int * ecxt_innertuple; } ;
struct TYPE_15__ {int ** ri_TrigWhenExprs; TYPE_1__* ri_TrigDesc; } ;
struct TYPE_13__ {TYPE_2__* triggers; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef int Node ;
typedef int MemoryContext ;
typedef int List ;
typedef int ExprState ;
typedef TYPE_4__ ExprContext ;
typedef int Expr ;
typedef TYPE_5__ EState ;
typedef int Bitmapset ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int * FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_4 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static bool
FUNC_10(EState *VAR_10, ResultRelInfo *VAR_11,
      Trigger *VAR_12, TriggerEvent VAR_13,
      Bitmapset *VAR_14,
      TupleTableSlot *VAR_15, TupleTableSlot *VAR_16)
{

 if (VAR_6 == VAR_5)
 {
  if (VAR_12->tgenabled == VAR_8 ||
   VAR_12->tgenabled == VAR_7)
   return 0;
 }
 else
 {
  if (VAR_12->tgenabled == VAR_9 ||
   VAR_12->tgenabled == VAR_7)
   return 0;
 }





 if (VAR_12->tgnattr > 0 && FUNC_6(VAR_13))
 {
  int VAR_17;
  bool VAR_18;

  VAR_18 = 0;
  for (VAR_17 = 0; VAR_17 < VAR_12->tgnattr; VAR_17++)
  {
   if (FUNC_7(VAR_12->tgattr[VAR_17] - VAR_0,
         VAR_14))
   {
    VAR_18 = 1;
    break;
   }
  }
  if (!VAR_18)
   return 0;
 }


 if (VAR_12->tgqual)
 {
  ExprState **VAR_19;
  ExprContext *VAR_20;
  MemoryContext VAR_21;
  int VAR_22;

  FUNC_0(VAR_10 != ((void*)0));





  VAR_22 = VAR_12 - VAR_11->ri_TrigDesc->triggers;
  VAR_19 = &VAR_11->ri_TrigWhenExprs[VAR_22];






  if (*VAR_19 == ((void*)0))
  {
   Node *VAR_23;

   VAR_21 = FUNC_5(VAR_10->es_query_cxt);
   VAR_23 = FUNC_9(VAR_12->tgqual);

   FUNC_1(VAR_23, VAR_4, VAR_1, 0);
   FUNC_1(VAR_23, VAR_3, VAR_2, 0);

   VAR_23 = (Node *) FUNC_8((Expr *) VAR_23);
   *VAR_19 = FUNC_2((List *) VAR_23, VAR_10);
   FUNC_5(VAR_21);
  }





  VAR_20 = FUNC_4(VAR_10);





  VAR_20->ecxt_innertuple = VAR_15;
  VAR_20->ecxt_outertuple = VAR_16;
  if (!FUNC_3(*VAR_19, VAR_20))
   return 0;
 }

 return 1;
}
