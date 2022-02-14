
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_21__ {int ri_NumIndices; TYPE_2__* ri_RelationDesc; TYPE_4__** ri_IndexRelationInfo; TYPE_2__** ri_IndexRelationDescs; } ;
struct TYPE_20__ {int t_self; } ;
struct TYPE_19__ {scalar_t__ ii_Expressions; scalar_t__ ii_Predicate; scalar_t__ ii_NumIndexKeyAttrs; int * ii_ExclusionOps; int ii_ReadyForInserts; } ;
struct TYPE_18__ {TYPE_1__* rd_index; } ;
struct TYPE_17__ {int indimmediate; scalar_t__ indisunique; } ;
typedef TYPE_2__** RelationPtr ;
typedef TYPE_2__* Relation ;
typedef TYPE_4__ IndexInfo ;
typedef TYPE_5__* HeapTuple ;
typedef int Datum ;
typedef TYPE_6__* CatalogIndexState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,int *,int) ;
 int FUNC_3 (TYPE_4__*,int *,int *,int *,int*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int VAR_0 ;
 int * FUNC_5 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_2__*,int *,int*,int *,TYPE_2__*,int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_10(CatalogIndexState VAR_5, HeapTuple VAR_6)
{
 int VAR_7;
 int VAR_8;
 RelationPtr VAR_9;
 Relation VAR_10;
 TupleTableSlot *VAR_11;
 IndexInfo **VAR_12;
 Datum VAR_13[VAR_0];
 bool VAR_14[VAR_0];







 if (FUNC_4(VAR_6))
  return;





 VAR_8 = VAR_5->ri_NumIndices;
 if (VAR_8 == 0)
  return;
 VAR_9 = VAR_5->ri_IndexRelationDescs;
 VAR_12 = VAR_5->ri_IndexRelationInfo;
 VAR_10 = VAR_5->ri_RelationDesc;


 VAR_11 = FUNC_5(FUNC_7(VAR_10),
         &VAR_2);
 FUNC_2(VAR_6, VAR_11, 0);




 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
 {
  IndexInfo *VAR_15;
  Relation VAR_16;

  VAR_15 = VAR_12[VAR_7];
  VAR_16 = VAR_9[VAR_7];


  if (!VAR_15->ii_ReadyForInserts)
   continue;





  FUNC_0(VAR_15->ii_Expressions == VAR_1);
  FUNC_0(VAR_15->ii_Predicate == VAR_1);
  FUNC_0(VAR_15->ii_ExclusionOps == ((void*)0));
  FUNC_0(VAR_16->rd_index->indimmediate);
  FUNC_0(VAR_15->ii_NumIndexKeyAttrs != 0);
  FUNC_3(VAR_15,
        VAR_11,
        ((void*)0),
        VAR_13,
        VAR_14);




  FUNC_9(VAR_16,
      VAR_13,
      VAR_14,
      &(VAR_6->t_self),
      VAR_10,
      VAR_16->rd_index->indisunique ?
      VAR_4 : VAR_3,
      VAR_15);
 }

 FUNC_1(VAR_11);
}
