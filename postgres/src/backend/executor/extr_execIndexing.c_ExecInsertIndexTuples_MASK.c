
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ tts_tableOid; int tts_tid; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_32__ {TYPE_3__* es_result_relation_info; } ;
struct TYPE_31__ {TYPE_2__* ecxt_scantuple; } ;
struct TYPE_30__ {int * ii_ExclusionOps; int * ii_PredicateState; int * ii_Predicate; int ii_ReadyForInserts; } ;
struct TYPE_29__ {TYPE_1__* rd_index; } ;
struct TYPE_28__ {int ri_NumIndices; TYPE_4__* ri_RelationDesc; TYPE_6__** ri_IndexRelationInfo; TYPE_4__** ri_IndexRelationDescs; } ;
struct TYPE_26__ {scalar_t__ indimmediate; int indisunique; int indexrelid; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef TYPE_4__** RelationPtr ;
typedef TYPE_4__* Relation ;
typedef int List ;
typedef int * ItemPointer ;
typedef scalar_t__ IndexUniqueCheck ;
typedef TYPE_6__ IndexInfo ;
typedef int ExprState ;
typedef TYPE_7__ ExprContext ;
typedef TYPE_8__ EState ;
typedef int Datum ;
typedef int CEOUC_WAIT_MODE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,TYPE_8__*) ;
 int FUNC_2 (int *,TYPE_7__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_2__*,TYPE_8__*,int *,int*) ;
 TYPE_7__* FUNC_4 (TYPE_8__*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int * VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*,TYPE_6__*,int *,int *,int*,TYPE_8__*,int,int ,int,int *) ;
 int FUNC_8 (TYPE_4__*,int *,int*,int *,TYPE_4__*,scalar_t__,TYPE_6__*) ;
 int * FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int *,int ) ;

List *
FUNC_11(TupleTableSlot *VAR_8,
       EState *VAR_9,
       bool VAR_10,
       bool *VAR_11,
       List *VAR_12)
{
 ItemPointer VAR_13 = &VAR_8->tts_tid;
 List *VAR_14 = VAR_4;
 ResultRelInfo *VAR_15;
 int VAR_16;
 int VAR_17;
 RelationPtr VAR_18;
 Relation VAR_19;
 IndexInfo **VAR_20;
 ExprContext *VAR_21;
 Datum VAR_22[VAR_3];
 bool VAR_23[VAR_3];

 FUNC_0(FUNC_5(VAR_13));




 VAR_15 = VAR_9->es_result_relation_info;
 VAR_17 = VAR_15->ri_NumIndices;
 VAR_18 = VAR_15->ri_IndexRelationDescs;
 VAR_20 = VAR_15->ri_IndexRelationInfo;
 VAR_19 = VAR_15->ri_RelationDesc;


 FUNC_0(VAR_8->tts_tableOid == FUNC_6(VAR_19));





 VAR_21 = FUNC_4(VAR_9);


 VAR_21->ecxt_scantuple = VAR_8;




 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
 {
  Relation VAR_24 = VAR_18[VAR_16];
  IndexInfo *VAR_25;
  bool VAR_26;
  IndexUniqueCheck VAR_27;
  bool VAR_28;

  if (VAR_24 == ((void*)0))
   continue;

  VAR_25 = VAR_20[VAR_16];


  if (!VAR_25->ii_ReadyForInserts)
   continue;


  if (VAR_25->ii_Predicate != VAR_4)
  {
   ExprState *VAR_29;





   VAR_29 = VAR_25->ii_PredicateState;
   if (VAR_29 == ((void*)0))
   {
    VAR_29 = FUNC_1(VAR_25->ii_Predicate, VAR_9);
    VAR_25->ii_PredicateState = VAR_29;
   }


   if (!FUNC_2(VAR_29, VAR_21))
    continue;
  }





  FUNC_3(VAR_25,
        VAR_8,
        VAR_9,
        VAR_22,
        VAR_23);


  VAR_26 = VAR_10 &&
   (VAR_12 == VAR_4 ||
    FUNC_10(VAR_12,
        VAR_24->rd_index->indexrelid));
  if (!VAR_24->rd_index->indisunique)
   VAR_27 = VAR_5;
  else if (VAR_26)
   VAR_27 = VAR_6;
  else if (VAR_24->rd_index->indimmediate)
   VAR_27 = VAR_7;
  else
   VAR_27 = VAR_6;

  VAR_28 =
   FUNC_8(VAR_24,
       VAR_22,
       VAR_23,
       VAR_13,
       VAR_19,
       VAR_27,
       VAR_25);
  if (VAR_25->ii_ExclusionOps != ((void*)0))
  {
   bool VAR_30;
   CEOUC_WAIT_MODE VAR_31;

   if (VAR_26)
   {
    VAR_30 = 1;
    VAR_31 = VAR_0;
   }
   else if (!VAR_24->rd_index->indimmediate)
   {
    VAR_30 = 1;
    VAR_31 = VAR_1;
   }
   else
   {
    VAR_30 = 0;
    VAR_31 = VAR_2;
   }

   VAR_28 =
    FUNC_7(VAR_19,
              VAR_24, VAR_25,
              VAR_13, VAR_22, VAR_23,
              VAR_9, 0,
              VAR_31, VAR_30, ((void*)0));
  }

  if ((VAR_27 == VAR_6 ||
    VAR_25->ii_ExclusionOps != ((void*)0)) &&
   !VAR_28)
  {






   VAR_14 = FUNC_9(VAR_14, FUNC_6(VAR_24));
   if (VAR_24->rd_index->indimmediate && VAR_11)
    *VAR_11 = 1;
  }
 }

 return VAR_14;
}
