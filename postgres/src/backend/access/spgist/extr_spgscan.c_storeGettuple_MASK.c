
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int distances ;
struct TYPE_6__ {double value; int isnull; } ;
struct TYPE_5__ {size_t nPtrs; int* recheck; int* recheckDistances; int numberOfOrderBys; scalar_t__ numberOfNonNullOrderBys; int* nonNullOrderByOffsets; int indexTupDesc; int * reconTups; scalar_t__ want_itup; TYPE_2__** distances; int * heapPtrs; } ;
typedef TYPE_1__* SpGistScanOpaque ;
typedef int * ItemPointer ;
typedef TYPE_2__ IndexOrderByDistance ;
typedef int Datum ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int *,int*) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(SpGistScanOpaque VAR_1, ItemPointer VAR_2,
     Datum VAR_3, bool VAR_4, bool VAR_5, bool VAR_6,
     double *VAR_7)
{
 FUNC_0(VAR_1->nPtrs < VAR_0);
 VAR_1->heapPtrs[VAR_1->nPtrs] = *VAR_2;
 VAR_1->recheck[VAR_1->nPtrs] = VAR_5;
 VAR_1->recheckDistances[VAR_1->nPtrs] = VAR_6;

 if (VAR_1->numberOfOrderBys > 0)
 {
  if (VAR_4 || VAR_1->numberOfNonNullOrderBys <= 0)
   VAR_1->distances[VAR_1->nPtrs] = ((void*)0);
  else
  {
   IndexOrderByDistance *VAR_8 =
   FUNC_2(sizeof(VAR_8[0]) * VAR_1->numberOfOrderBys);
   int VAR_9;

   for (VAR_9 = 0; VAR_9 < VAR_1->numberOfOrderBys; VAR_9++)
   {
    int VAR_10 = VAR_1->nonNullOrderByOffsets[VAR_9];

    if (VAR_10 >= 0)
    {

     VAR_8[VAR_9].value = VAR_7[VAR_10];
     VAR_8[VAR_9].isnull = 0;
    }
    else
    {

     VAR_8[VAR_9].value = 0.0;
     VAR_8[VAR_9].isnull = 1;
    }
   }

   VAR_1->distances[VAR_1->nPtrs] = VAR_8;
  }
 }

 if (VAR_1->want_itup)
 {




  VAR_1->reconTups[VAR_1->nPtrs] = FUNC_1(VAR_1->indexTupDesc,
               &VAR_3,
               &VAR_4);
 }
 VAR_1->nPtrs++;
}
