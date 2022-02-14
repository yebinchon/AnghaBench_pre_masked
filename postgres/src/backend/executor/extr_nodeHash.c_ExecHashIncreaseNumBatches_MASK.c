
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_27__ {TYPE_6__** unshared; } ;
struct TYPE_31__ {int nbatch; int curbatch; int growEnabled; int spaceUsed; int nbuckets_optimal; int nbuckets; TYPE_6__** innerBatchFile; TYPE_3__ buckets; TYPE_5__* chunks; int log2_nbuckets_optimal; int log2_nbuckets; TYPE_6__** outerBatchFile; int hashCxt; } ;
struct TYPE_26__ {TYPE_6__* unshared; } ;
struct TYPE_30__ {int hashvalue; TYPE_2__ next; } ;
struct TYPE_25__ {TYPE_5__* unshared; } ;
struct TYPE_29__ {size_t used; TYPE_1__ next; } ;
struct TYPE_28__ {int t_len; } ;
typedef TYPE_4__* MinimalTuple ;
typedef int MemoryContext ;
typedef TYPE_5__* HashMemoryChunk ;
typedef TYPE_6__* HashJoinTuple ;
typedef TYPE_7__* HashJoinTable ;
typedef TYPE_6__ BufFile ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_7__*,int ,int*,int*) ;
 int FUNC_3 (TYPE_4__*,int ,TYPE_6__**) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 TYPE_4__* FUNC_5 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_6__**,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_7__*,int) ;
 int FUNC_12 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_13 (TYPE_6__**,int ,int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (char*,TYPE_7__*,...) ;
 TYPE_6__** FUNC_17 (TYPE_6__**,int) ;

__attribute__((used)) static void
FUNC_18(HashJoinTable VAR_3)
{
 int VAR_4 = VAR_3->nbatch;
 int VAR_5 = VAR_3->curbatch;
 int VAR_6;
 MemoryContext VAR_7;
 long VAR_8;
 long VAR_9;
 HashMemoryChunk VAR_10;


 if (!VAR_3->growEnabled)
  return;


 if (VAR_4 > FUNC_9(VAR_1 / 2, VAR_2 / (sizeof(void *) * 2)))
  return;

 VAR_6 = VAR_4 * 2;
 FUNC_0(VAR_6 > 1);






 VAR_7 = FUNC_8(VAR_3->hashCxt);

 if (VAR_3->innerBatchFile == ((void*)0))
 {

  VAR_3->innerBatchFile = (BufFile **)
   FUNC_14(VAR_6 * sizeof(BufFile *));
  VAR_3->outerBatchFile = (BufFile **)
   FUNC_14(VAR_6 * sizeof(BufFile *));

  FUNC_10();
 }
 else
 {

  VAR_3->innerBatchFile = (BufFile **)
   FUNC_17(VAR_3->innerBatchFile, VAR_6 * sizeof(BufFile *));
  VAR_3->outerBatchFile = (BufFile **)
   FUNC_17(VAR_3->outerBatchFile, VAR_6 * sizeof(BufFile *));
  FUNC_7(VAR_3->innerBatchFile + VAR_4, 0,
      (VAR_6 - VAR_4) * sizeof(BufFile *));
  FUNC_7(VAR_3->outerBatchFile + VAR_4, 0,
      (VAR_6 - VAR_4) * sizeof(BufFile *));
 }

 FUNC_8(VAR_7);

 VAR_3->nbatch = VAR_6;





 VAR_8 = VAR_9 = 0;


 if (VAR_3->nbuckets_optimal != VAR_3->nbuckets)
 {

  FUNC_0(VAR_3->nbuckets_optimal > VAR_3->nbuckets);

  VAR_3->nbuckets = VAR_3->nbuckets_optimal;
  VAR_3->log2_nbuckets = VAR_3->log2_nbuckets_optimal;

  VAR_3->buckets.unshared =
   FUNC_17(VAR_3->buckets.unshared,
      sizeof(HashJoinTuple) * VAR_3->nbuckets);
 }






 FUNC_13(VAR_3->buckets.unshared, 0,
     sizeof(HashJoinTuple) * VAR_3->nbuckets);
 VAR_10 = VAR_3->chunks;
 VAR_3->chunks = ((void*)0);


 while (VAR_10 != ((void*)0))
 {
  HashMemoryChunk VAR_11 = VAR_10->next.unshared;


  size_t VAR_12 = 0;


  while (VAR_12 < VAR_10->used)
  {
   HashJoinTuple VAR_13 = (HashJoinTuple) (FUNC_4(VAR_10) + VAR_12);
   MinimalTuple VAR_14 = FUNC_5(VAR_13);
   int VAR_15 = (VAR_0 + VAR_14->t_len);
   int VAR_16;
   int VAR_17;

   VAR_8++;
   FUNC_2(VAR_3, VAR_13->hashvalue,
           &VAR_16, &VAR_17);

   if (VAR_17 == VAR_5)
   {

    HashJoinTuple VAR_18;

    VAR_18 = (HashJoinTuple) FUNC_11(VAR_3, VAR_15);
    FUNC_12(VAR_18, VAR_13, VAR_15);


    VAR_18->next.unshared = VAR_3->buckets.unshared[VAR_16];
    VAR_3->buckets.unshared[VAR_16] = VAR_18;
   }
   else
   {

    FUNC_0(VAR_17 > VAR_5);
    FUNC_3(FUNC_5(VAR_13),
           VAR_13->hashvalue,
           &VAR_3->innerBatchFile[VAR_17]);

    VAR_3->spaceUsed -= VAR_15;
    VAR_9++;
   }


   VAR_12 += FUNC_6(VAR_15);


   FUNC_1();
  }


  FUNC_15(VAR_10);
  VAR_10 = VAR_11;
 }
 if (VAR_9 == 0 || VAR_9 == VAR_8)
 {
  VAR_3->growEnabled = 0;




 }
}
