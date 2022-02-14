
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int* tts_isnull; int * tts_values; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_22__ {int * es_result_relation_info; } ;
struct TYPE_21__ {int t_data; int t_self; } ;
struct TYPE_20__ {int* attnoMap; int ctidAttno; scalar_t__ hasSystemCols; int resultRel; } ;
struct TYPE_19__ {int natts; } ;
typedef int ResultRelInfo ;
typedef TYPE_3__ PgFdwDirectModifyState ;
typedef int * ItemPointer ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__ EState ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_4__* FUNC_2 (TYPE_1__*,int,int *) ;
 TYPE_1__* FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_10(PgFdwDirectModifyState *VAR_1,
        TupleTableSlot *VAR_2,
        EState *VAR_3)
{
 ResultRelInfo *VAR_4 = VAR_3->es_result_relation_info;
 TupleDesc VAR_5 = FUNC_8(VAR_1->resultRel);
 TupleTableSlot *VAR_6;
 Datum *VAR_7;
 bool *VAR_8;
 Datum *VAR_9;
 bool *VAR_10;
 int VAR_11;




 VAR_6 = FUNC_3(VAR_3, VAR_4);




 FUNC_9(VAR_2);
 VAR_9 = VAR_2->tts_values;
 VAR_10 = VAR_2->tts_isnull;




 FUNC_1(VAR_6);
 VAR_7 = VAR_6->tts_values;
 VAR_8 = VAR_6->tts_isnull;




 for (VAR_11 = 0; VAR_11 < VAR_5->natts; VAR_11++)
 {
  int VAR_12 = VAR_1->attnoMap[VAR_11];

  if (VAR_12 == 0)
  {
   VAR_7[VAR_11] = (Datum) 0;
   VAR_8[VAR_11] = 1;
  }
  else
  {
   VAR_7[VAR_11] = VAR_9[VAR_12 - 1];
   VAR_8[VAR_11] = VAR_10[VAR_12 - 1];
  }
 }




 FUNC_4(VAR_6);






 if (VAR_1->hasSystemCols)
 {
  HeapTuple VAR_13 = FUNC_2(VAR_6, 1, ((void*)0));


  if (VAR_1->ctidAttno)
  {
   ItemPointer VAR_14 = ((void*)0);

   VAR_14 = (ItemPointer) FUNC_0(VAR_9[VAR_1->ctidAttno - 1]);
   VAR_13->t_self = *VAR_14;
  }
  FUNC_7(VAR_13->t_data, VAR_0);
  FUNC_6(VAR_13->t_data, VAR_0);
  FUNC_5(VAR_13->t_data, VAR_0);
 }




 return VAR_6;
}
