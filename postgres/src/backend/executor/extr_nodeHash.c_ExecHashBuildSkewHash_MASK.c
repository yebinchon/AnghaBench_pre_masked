
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_12__ {int nvalues; int * values; scalar_t__* numbers; } ;
struct TYPE_11__ {int skewInherit; int skewColumn; int skewTable; } ;
struct TYPE_10__ {int skewEnabled; int skewBucketLen; int* skewBucketNums; scalar_t__ spaceUsed; int spaceUsedSkew; scalar_t__ spacePeak; size_t nSkewBuckets; TYPE_1__** skewBucket; int batchCxt; int * collations; int * outer_hashfunctions; } ;
struct TYPE_9__ {int hashvalue; int * tuples; } ;
typedef int HeapTupleData ;
typedef TYPE_1__ HashSkewBucket ;
typedef TYPE_2__* HashJoinTable ;
typedef TYPE_3__ Hash ;
typedef int FmgrInfo ;
typedef TYPE_4__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_13(HashJoinTable VAR_7, Hash *VAR_8, int VAR_9)
{
 HeapTupleData *VAR_10;
 AttStatsSlot VAR_11;


 if (!FUNC_8(VAR_8->skewTable))
  return;

 if (VAR_9 <= 0)
  return;




 VAR_10 = FUNC_10(VAR_6,
         FUNC_7(VAR_8->skewTable),
         FUNC_4(VAR_8->skewColumn),
         FUNC_0(VAR_8->skewInherit));
 if (!FUNC_3(VAR_10))
  return;

 if (FUNC_12(&VAR_11, VAR_10,
       VAR_5, VAR_2,
       VAR_1 | VAR_0))
 {
  double VAR_12;
  int VAR_13;
  FmgrInfo *VAR_14;
  int VAR_15;

  if (VAR_9 > VAR_11.nvalues)
   VAR_9 = VAR_11.nvalues;






  VAR_12 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
   VAR_12 += VAR_11.numbers[VAR_15];
  if (VAR_12 < VAR_4)
  {
   FUNC_11(&VAR_11);
   FUNC_9(VAR_10);
   return;
  }
  VAR_13 = 2;
  while (VAR_13 <= VAR_9)
   VAR_13 <<= 1;

  VAR_13 <<= 2;

  VAR_7->skewEnabled = 1;
  VAR_7->skewBucketLen = VAR_13;






  VAR_7->skewBucket = (HashSkewBucket **)
   FUNC_6(VAR_7->batchCxt,
           VAR_13 * sizeof(HashSkewBucket *));
  VAR_7->skewBucketNums = (int *)
   FUNC_6(VAR_7->batchCxt,
           VAR_9 * sizeof(int));

  VAR_7->spaceUsed += VAR_13 * sizeof(HashSkewBucket *)
   + VAR_9 * sizeof(int);
  VAR_7->spaceUsedSkew += VAR_13 * sizeof(HashSkewBucket *)
   + VAR_9 * sizeof(int);
  if (VAR_7->spaceUsed > VAR_7->spacePeak)
   VAR_7->spacePeak = VAR_7->spaceUsed;
  VAR_14 = VAR_7->outer_hashfunctions;

  for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
  {
   uint32 VAR_16;
   int VAR_17;

   VAR_16 = FUNC_1(FUNC_2(&VAR_14[0],
               VAR_7->collations[0],
               VAR_11.values[VAR_15]));







   VAR_17 = VAR_16 & (VAR_13 - 1);
   while (VAR_7->skewBucket[VAR_17] != ((void*)0) &&
       VAR_7->skewBucket[VAR_17]->hashvalue != VAR_16)
    VAR_17 = (VAR_17 + 1) & (VAR_13 - 1);





   if (VAR_7->skewBucket[VAR_17] != ((void*)0))
    continue;


   VAR_7->skewBucket[VAR_17] = (HashSkewBucket *)
    FUNC_5(VAR_7->batchCxt,
           sizeof(HashSkewBucket));
   VAR_7->skewBucket[VAR_17]->hashvalue = VAR_16;
   VAR_7->skewBucket[VAR_17]->tuples = ((void*)0);
   VAR_7->skewBucketNums[VAR_7->nSkewBuckets] = VAR_17;
   VAR_7->nSkewBuckets++;
   VAR_7->spaceUsed += VAR_3;
   VAR_7->spaceUsedSkew += VAR_3;
   if (VAR_7->spaceUsed > VAR_7->spacePeak)
    VAR_7->spacePeak = VAR_7->spaceUsed;
  }

  FUNC_11(&VAR_11);
 }

 FUNC_9(VAR_10);
}
