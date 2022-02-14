
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int (* storeRes_func ) (TYPE_1__*,int *,scalar_t__,int,int,int,int *) ;
struct TYPE_18__ {scalar_t__ norderbys; int recheck; double* distances; int recheckDistances; scalar_t__ leafValue; int leafDatum; int returnData; int level; int traversalValue; int reconstructedValue; int orderbys; int nkeys; int scankeys; } ;
typedef TYPE_2__ spgLeafConsistentOut ;
typedef TYPE_2__ spgLeafConsistentIn ;
struct TYPE_20__ {int heapPtr; } ;
struct TYPE_19__ {int level; int traversalValue; int value; } ;
struct TYPE_17__ {int searchNulls; scalar_t__ numberOfNonNullOrderBys; int traversalCxt; int indexCollation; int leafConsistentFn; int state; int want_itup; int orderByData; int numberOfKeys; int keyData; int tempCxt; } ;
typedef TYPE_4__ SpGistSearchItem ;
typedef TYPE_1__* SpGistScanOpaque ;
typedef TYPE_6__* SpGistLeafTuple ;
typedef int MemoryContext ;
typedef scalar_t__ Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_4__*) ;
 TYPE_4__* FUNC_7 (TYPE_1__*,int ,int *,scalar_t__,int,int,int,double*) ;

__attribute__((used)) static bool
FUNC_8(SpGistScanOpaque VAR_0, SpGistSearchItem *VAR_1,
   SpGistLeafTuple VAR_2, bool VAR_3,
   bool *VAR_4, storeRes_func VAR_5)
{
 Datum VAR_6;
 double *VAR_7;
 bool VAR_8;
 bool VAR_9;
 bool VAR_10;

 if (VAR_3)
 {

  FUNC_0(VAR_0->searchNulls);
  VAR_6 = (Datum) 0;
  VAR_7 = ((void*)0);
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_8 = 1;
 }
 else
 {
  spgLeafConsistentIn VAR_11;
  spgLeafConsistentOut VAR_12;


  MemoryContext VAR_13 = FUNC_3(VAR_0->tempCxt);

  VAR_11.scankeys = VAR_0->keyData;
  VAR_11.nkeys = VAR_0->numberOfKeys;
  VAR_11.orderbys = VAR_0->orderByData;
  VAR_11.norderbys = VAR_0->numberOfNonNullOrderBys;
  VAR_11.reconstructedValue = VAR_1->value;
  VAR_11.traversalValue = VAR_1->traversalValue;
  VAR_11.level = VAR_1->level;
  VAR_11.returnData = VAR_0->want_itup;
  VAR_11.leafDatum = FUNC_5(VAR_2, &VAR_0->state);

  VAR_12.leafValue = (Datum) 0;
  VAR_12.recheck = 0;
  VAR_12.distances = ((void*)0);
  VAR_12.recheckDistances = 0;

  VAR_8 = FUNC_1(FUNC_2(&VAR_0->leafConsistentFn,
            VAR_0->indexCollation,
            FUNC_4(&VAR_11),
            FUNC_4(&VAR_12)));
  VAR_9 = VAR_12.recheck;
  VAR_10 = VAR_12.recheckDistances;
  VAR_6 = VAR_12.leafValue;
  VAR_7 = VAR_12.distances;

  FUNC_3(VAR_13);
 }

 if (VAR_8)
 {

  if (VAR_0->numberOfNonNullOrderBys > 0)
  {

   MemoryContext VAR_14 = FUNC_3(VAR_0->traversalCxt);
   SpGistSearchItem *VAR_15 = FUNC_7(VAR_0, VAR_1->level,
              &VAR_2->heapPtr,
              VAR_6,
              VAR_9,
              VAR_10,
              VAR_3,
              VAR_7);

   FUNC_6(VAR_0, VAR_15);

   FUNC_3(VAR_14);
  }
  else
  {

   FUNC_0(!VAR_10);
   VAR_5(VAR_0, &VAR_2->heapPtr, VAR_6, VAR_3,
      VAR_9, 0, ((void*)0));
   *VAR_4 = 1;
  }
 }

 return VAR_8;
}
