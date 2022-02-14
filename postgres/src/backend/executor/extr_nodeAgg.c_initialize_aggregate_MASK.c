
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {size_t current_set; TYPE_1__* curaggcontext; } ;
struct TYPE_13__ {scalar_t__ noTransValue; scalar_t__ transValueIsNull; int transValue; } ;
struct TYPE_12__ {scalar_t__ numSortCols; int numInputs; scalar_t__ initValueIsNull; int transtypeLen; int transtypeByVal; int initValue; int * sortNullsFirst; int * sortCollations; int * sortOperators; int sortColIdx; int sortdesc; scalar_t__* sortstates; } ;
struct TYPE_11__ {int atttypid; } ;
struct TYPE_10__ {int ecxt_per_tuple_memory; } ;
typedef int MemoryContext ;
typedef TYPE_2__* Form_pg_attribute ;
typedef TYPE_3__* AggStatePerTrans ;
typedef TYPE_4__* AggStatePerGroup ;
typedef TYPE_5__ AggState ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ,int *,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,int *,int *,int *,int ,int *,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(AggState *VAR_1, AggStatePerTrans VAR_2,
      AggStatePerGroup VAR_3)
{



 if (VAR_2->numSortCols > 0)
 {




  if (VAR_2->sortstates[VAR_1->current_set])
   FUNC_5(VAR_2->sortstates[VAR_1->current_set]);







  if (VAR_2->numInputs == 1)
  {
   Form_pg_attribute VAR_4 = FUNC_1(VAR_2->sortdesc, 0);

   VAR_2->sortstates[VAR_1->current_set] =
    FUNC_3(VAR_4->atttypid,
           VAR_2->sortOperators[0],
           VAR_2->sortCollations[0],
           VAR_2->sortNullsFirst[0],
           VAR_0, ((void*)0), 0);
  }
  else
   VAR_2->sortstates[VAR_1->current_set] =
    FUNC_4(VAR_2->sortdesc,
          VAR_2->numSortCols,
          VAR_2->sortColIdx,
          VAR_2->sortOperators,
          VAR_2->sortCollations,
          VAR_2->sortNullsFirst,
          VAR_0, ((void*)0), 0);
 }







 if (VAR_2->initValueIsNull)
  VAR_3->transValue = VAR_2->initValue;
 else
 {
  MemoryContext VAR_5;

  VAR_5 = FUNC_0(
             VAR_1->curaggcontext->ecxt_per_tuple_memory);
  VAR_3->transValue = FUNC_2(VAR_2->initValue,
             VAR_2->transtypeByVal,
             VAR_2->transtypeLen);
  FUNC_0(VAR_5);
 }
 VAR_3->transValueIsNull = VAR_2->initValueIsNull;
 VAR_3->noTransValue = VAR_2->initValueIsNull;
}
