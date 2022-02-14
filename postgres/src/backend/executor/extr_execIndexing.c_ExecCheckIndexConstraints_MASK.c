
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_26__ {TYPE_2__* es_result_relation_info; } ;
struct TYPE_25__ {int * ecxt_scantuple; } ;
struct TYPE_24__ {int * ii_PredicateState; int * ii_Predicate; int ii_ReadyForInserts; int ii_ExclusionOps; int ii_Unique; } ;
struct TYPE_23__ {TYPE_1__* rd_index; } ;
struct TYPE_22__ {int ri_NumIndices; TYPE_3__* ri_RelationDesc; TYPE_5__** ri_IndexRelationInfo; TYPE_3__** ri_IndexRelationDescs; } ;
struct TYPE_21__ {int indimmediate; int indexrelid; } ;
typedef TYPE_2__ ResultRelInfo ;
typedef TYPE_3__** RelationPtr ;
typedef TYPE_3__* Relation ;
typedef int List ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef TYPE_5__ IndexInfo ;
typedef int ExprState ;
typedef TYPE_6__ ExprContext ;
typedef TYPE_7__ EState ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,TYPE_7__*) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*,int *,TYPE_7__*,int *,int*) ;
 TYPE_6__* FUNC_3 (TYPE_7__*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * VAR_4 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,TYPE_5__*,int *,int *,int*,TYPE_7__*,int,int ,int,int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int *,int ) ;

bool
FUNC_13(TupleTableSlot *VAR_5,
        EState *VAR_6, ItemPointer VAR_7,
        List *VAR_8)
{
 ResultRelInfo *VAR_9;
 int VAR_10;
 int VAR_11;
 RelationPtr VAR_12;
 Relation VAR_13;
 IndexInfo **VAR_14;
 ExprContext *VAR_15;
 Datum VAR_16[VAR_3];
 bool VAR_17[VAR_3];
 ItemPointerData VAR_18;
 bool VAR_19 = 0;

 FUNC_4(VAR_7);
 FUNC_4(&VAR_18);




 VAR_9 = VAR_6->es_result_relation_info;
 VAR_11 = VAR_9->ri_NumIndices;
 VAR_12 = VAR_9->ri_IndexRelationDescs;
 VAR_14 = VAR_9->ri_IndexRelationInfo;
 VAR_13 = VAR_9->ri_RelationDesc;





 VAR_15 = FUNC_3(VAR_6);


 VAR_15->ecxt_scantuple = VAR_5;





 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
 {
  Relation VAR_20 = VAR_12[VAR_10];
  IndexInfo *VAR_21;
  bool VAR_22;

  if (VAR_20 == ((void*)0))
   continue;

  VAR_21 = VAR_14[VAR_10];

  if (!VAR_21->ii_Unique && !VAR_21->ii_ExclusionOps)
   continue;


  if (!VAR_21->ii_ReadyForInserts)
   continue;


  if (VAR_8 != VAR_4 &&
   !FUNC_12(VAR_8,
        VAR_20->rd_index->indexrelid))
   continue;

  if (!VAR_20->rd_index->indimmediate)
   FUNC_8(VAR_2,
     (FUNC_9(VAR_1),
      FUNC_10("ON CONFLICT does not support deferrable unique constraints/exclusion constraints as arbiters"),
      FUNC_11(VAR_13,
          FUNC_5(VAR_20))));

  VAR_19 = 1;


  if (VAR_21->ii_Predicate != VAR_4)
  {
   ExprState *VAR_23;





   VAR_23 = VAR_21->ii_PredicateState;
   if (VAR_23 == ((void*)0))
   {
    VAR_23 = FUNC_0(VAR_21->ii_Predicate, VAR_6);
    VAR_21->ii_PredicateState = VAR_23;
   }


   if (!FUNC_1(VAR_23, VAR_15))
    continue;
  }





  FUNC_2(VAR_21,
        VAR_5,
        VAR_6,
        VAR_16,
        VAR_17);

  VAR_22 =
   FUNC_6(VAR_13, VAR_20,
             VAR_21, &VAR_18,
             VAR_16, VAR_17, VAR_6, 0,
             VAR_0, 1,
             VAR_7);
  if (!VAR_22)
   return 0;
 }

 if (VAR_8 != VAR_4 && !VAR_19)
  FUNC_7(VAR_2, "unexpected failure to find arbiter index");

 return 1;
}
