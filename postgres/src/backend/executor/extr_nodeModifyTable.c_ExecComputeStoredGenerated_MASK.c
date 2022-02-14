
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {int* tts_isnull; int* tts_values; } ;
typedef TYPE_2__ TupleTableSlot ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_28__ {int es_query_cxt; TYPE_4__* es_result_relation_info; } ;
struct TYPE_27__ {TYPE_2__* ecxt_scantuple; } ;
struct TYPE_26__ {scalar_t__ attgenerated; int attlen; int attbyval; } ;
struct TYPE_25__ {int ** ri_GeneratedExprs; int ri_RelationDesc; } ;
struct TYPE_24__ {int natts; TYPE_1__* constr; } ;
struct TYPE_22__ {scalar_t__ has_generated_stored; } ;
typedef TYPE_4__ ResultRelInfo ;
typedef int Relation ;
typedef int MemoryContext ;
typedef TYPE_5__* Form_pg_attribute ;
typedef int ExprState ;
typedef TYPE_6__ ExprContext ;
typedef int Expr ;
typedef TYPE_7__ EState ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_6__*,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (int *,TYPE_7__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_6__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_5__* FUNC_11 (TYPE_3__*,int) ;
 scalar_t__ FUNC_12 (int ,int) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (int ,char*,int,int ) ;
 int FUNC_15 (int*,int*,int) ;
 int* FUNC_16 (int) ;
 int FUNC_17 (TYPE_2__*) ;

void
FUNC_18(EState *VAR_2, TupleTableSlot *VAR_3)
{
 ResultRelInfo *VAR_4 = VAR_2->es_result_relation_info;
 Relation VAR_5 = VAR_4->ri_RelationDesc;
 TupleDesc VAR_6 = FUNC_9(VAR_5);
 int VAR_7 = VAR_6->natts;
 MemoryContext VAR_8;
 Datum *VAR_9;
 bool *VAR_10;

 FUNC_0(VAR_6->constr && VAR_6->constr->has_generated_stored);






 if (VAR_4->ri_GeneratedExprs == ((void*)0))
 {
  VAR_8 = FUNC_8(VAR_2->es_query_cxt);

  VAR_4->ri_GeneratedExprs =
   (ExprState **) FUNC_16(VAR_7 * sizeof(ExprState *));

  for (int VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  {
   if (FUNC_11(VAR_6, VAR_11)->attgenerated == VAR_0)
   {
    Expr *VAR_12;

    VAR_12 = (Expr *) FUNC_12(VAR_5, VAR_11 + 1);
    if (VAR_12 == ((void*)0))
     FUNC_14(VAR_1, "no generation expression found for column number %d of table \"%s\"",
       VAR_11 + 1, FUNC_10(VAR_5));

    VAR_4->ri_GeneratedExprs[VAR_11] = FUNC_4(VAR_12, VAR_2);
   }
  }

  FUNC_8(VAR_8);
 }

 VAR_8 = FUNC_8(FUNC_7(VAR_2));

 VAR_9 = FUNC_16(sizeof(*VAR_9) * VAR_7);
 VAR_10 = FUNC_16(sizeof(*VAR_10) * VAR_7);

 FUNC_17(VAR_3);
 FUNC_15(VAR_10, VAR_3->tts_isnull, sizeof(*VAR_10) * VAR_7);

 for (int VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
 {
  Form_pg_attribute VAR_14 = FUNC_11(VAR_6, VAR_13);

  if (VAR_14->attgenerated == VAR_0)
  {
   ExprContext *VAR_15;
   Datum VAR_16;
   bool VAR_17;

   VAR_15 = FUNC_6(VAR_2);
   VAR_15->ecxt_scantuple = VAR_3;

   VAR_16 = FUNC_2(VAR_4->ri_GeneratedExprs[VAR_13], VAR_15, &VAR_17);

   VAR_9[VAR_13] = VAR_16;
   VAR_10[VAR_13] = VAR_17;
  }
  else
  {
   if (!VAR_10[VAR_13])
    VAR_9[VAR_13] = FUNC_13(VAR_3->tts_values[VAR_13], VAR_14->attbyval, VAR_14->attlen);
  }
 }

 FUNC_1(VAR_3);
 FUNC_15(VAR_3->tts_values, VAR_9, sizeof(*VAR_9) * VAR_7);
 FUNC_15(VAR_3->tts_isnull, VAR_10, sizeof(*VAR_10) * VAR_7);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);

 FUNC_8(VAR_8);
}
