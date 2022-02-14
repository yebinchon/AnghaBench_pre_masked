
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int ntuples; int lentuples; int sumsize; TYPE_1__** tuples; } ;
struct TYPE_7__ {int t_tid; } ;
typedef int OffsetNumber ;
typedef int * ItemPointer ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__ GinTupleCollector ;
typedef int GinState ;
typedef int GinNullCategory ;
typedef int Datum ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int ,int ,int *,int ,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *,int ,int ,int,int*,int **) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__**,int) ;

void
FUNC_6(GinState *VAR_2,
      GinTupleCollector *VAR_3,
      OffsetNumber VAR_4, Datum VAR_5, bool VAR_6,
      ItemPointer VAR_7)
{
 Datum *VAR_8;
 GinNullCategory *VAR_9;
 int32 VAR_10,
    VAR_11;




 VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6,
        &VAR_11, &VAR_9);




 if (VAR_11 < 0 ||
  VAR_3->ntuples + VAR_11 > VAR_1 / sizeof(IndexTuple))
  FUNC_2(VAR_0, "too many entries for GIN index");




 if (VAR_3->tuples == ((void*)0))
 {





  VAR_3->lentuples = 16;
  while (VAR_3->lentuples < VAR_11)
   VAR_3->lentuples *= 2;

  VAR_3->tuples = (IndexTuple *) FUNC_4(sizeof(IndexTuple) * VAR_3->lentuples);
 }
 else if (VAR_3->lentuples < VAR_3->ntuples + VAR_11)
 {





  do
  {
   VAR_3->lentuples *= 2;
  } while (VAR_3->lentuples < VAR_3->ntuples + VAR_11);

  VAR_3->tuples = (IndexTuple *) FUNC_5(VAR_3->tuples,
             sizeof(IndexTuple) * VAR_3->lentuples);
 }





 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
 {
  IndexTuple VAR_12;

  VAR_12 = FUNC_0(VAR_2, VAR_4, VAR_8[VAR_10], VAR_9[VAR_10],
       ((void*)0), 0, 0, 1);
  VAR_12->t_tid = *VAR_7;
  VAR_3->tuples[VAR_3->ntuples++] = VAR_12;
  VAR_3->sumsize += FUNC_1(VAR_12);
 }
}
