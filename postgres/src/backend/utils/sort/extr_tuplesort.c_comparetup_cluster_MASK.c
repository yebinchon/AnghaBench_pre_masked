
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_11__ {int nKeys; int estate; TYPE_8__* indexInfo; int tupDesc; TYPE_3__* sortKeys; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_15__ {scalar_t__* ii_IndexAttrNumbers; int * ii_Expressions; } ;
struct TYPE_14__ {int * ecxt_scantuple; } ;
struct TYPE_13__ {scalar_t__ abbrev_converter; } ;
struct TYPE_12__ {int isnull1; int datum1; scalar_t__ tuple; } ;
typedef TYPE_2__ SortTuple ;
typedef TYPE_3__* SortSupport ;
typedef scalar_t__ HeapTuple ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;


 scalar_t__ FUNC_0 (int ,int,int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int,int ,int,TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (TYPE_8__*,int *,int ,int *,int*) ;
 TYPE_7__* FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ,int*) ;

__attribute__((used)) static int
FUNC_7(const SortTuple *VAR_1, const SortTuple *VAR_2,
       Tuplesortstate *VAR_3)
{
 SortSupport VAR_4 = VAR_3->sortKeys;
 HeapTuple VAR_5;
 HeapTuple VAR_6;
 TupleDesc VAR_7;
 int VAR_8;
 int32 VAR_9;
 Datum VAR_10,
    VAR_11;
 bool VAR_12,
    VAR_13;
 AttrNumber VAR_14 = VAR_3->indexInfo->ii_IndexAttrNumbers[0];


 VAR_5 = (HeapTuple) VAR_1->tuple;
 VAR_6 = (HeapTuple) VAR_2->tuple;
 VAR_7 = VAR_3->tupDesc;


 if (VAR_14 != 0)
 {
  VAR_9 = FUNC_1(VAR_1->datum1, VAR_1->isnull1,
           VAR_2->datum1, VAR_2->isnull1,
           VAR_4);
  if (VAR_9 != 0)
   return VAR_9;

  if (VAR_4->abbrev_converter)
  {
   VAR_10 = FUNC_6(VAR_5, VAR_14, VAR_7, &VAR_12);
   VAR_11 = FUNC_6(VAR_6, VAR_14, VAR_7, &VAR_13);

   VAR_9 = FUNC_0(VAR_10, VAR_12,
             VAR_11, VAR_13,
             VAR_4);
  }
  if (VAR_9 != 0 || VAR_3->nKeys == 1)
   return VAR_9;

  VAR_4++;
  VAR_8 = 1;
 }
 else
 {

  VAR_8 = 0;
 }

 if (VAR_3->indexInfo->ii_Expressions == ((void*)0))
 {


  for (; VAR_8 < VAR_3->nKeys; VAR_8++, VAR_4++)
  {
   AttrNumber VAR_15 = VAR_3->indexInfo->ii_IndexAttrNumbers[VAR_8];

   VAR_10 = FUNC_6(VAR_5, VAR_15, VAR_7, &VAR_12);
   VAR_11 = FUNC_6(VAR_6, VAR_15, VAR_7, &VAR_13);

   VAR_9 = FUNC_1(VAR_10, VAR_12,
            VAR_11, VAR_13,
            VAR_4);
   if (VAR_9 != 0)
    return VAR_9;
  }
 }
 else
 {






  Datum VAR_16[VAR_0];
  bool VAR_17[VAR_0];
  Datum VAR_18[VAR_0];
  bool VAR_19[VAR_0];
  TupleTableSlot *VAR_20;


  FUNC_5(VAR_3->estate);

  VAR_20 = FUNC_4(VAR_3->estate)->ecxt_scantuple;

  FUNC_2(VAR_5, VAR_20, 0);
  FUNC_3(VAR_3->indexInfo, VAR_20, VAR_3->estate,
        VAR_16, VAR_17);

  FUNC_2(VAR_6, VAR_20, 0);
  FUNC_3(VAR_3->indexInfo, VAR_20, VAR_3->estate,
        VAR_18, VAR_19);

  for (; VAR_8 < VAR_3->nKeys; VAR_8++, VAR_4++)
  {
   VAR_9 = FUNC_1(VAR_16[VAR_8],
            VAR_17[VAR_8],
            VAR_18[VAR_8],
            VAR_19[VAR_8],
            VAR_4);
   if (VAR_9 != 0)
    return VAR_9;
  }
 }

 return 0;
}
