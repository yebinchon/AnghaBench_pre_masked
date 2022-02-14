
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_18__ {TYPE_5__** unshared; } ;
struct TYPE_21__ {int nbuckets; int nbuckets_optimal; int log2_nbuckets; int log2_nbuckets_optimal; TYPE_3__ buckets; TYPE_4__* chunks; } ;
struct TYPE_17__ {TYPE_5__* unshared; } ;
struct TYPE_20__ {TYPE_2__ next; int hashvalue; } ;
struct TYPE_16__ {TYPE_4__* unshared; } ;
struct TYPE_19__ {size_t used; TYPE_1__ next; } ;
struct TYPE_15__ {scalar_t__ t_len; } ;
typedef TYPE_4__* HashMemoryChunk ;
typedef TYPE_5__* HashJoinTuple ;
typedef TYPE_6__* HashJoinTable ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_6__*,int ,int*,int*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 TYPE_10__* FUNC_4 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_5__**,int ,int) ;
 int FUNC_7 (char*,TYPE_6__*,int,int) ;
 scalar_t__ FUNC_8 (TYPE_5__**,int) ;

__attribute__((used)) static void
FUNC_9(HashJoinTable VAR_2)
{
 HashMemoryChunk VAR_3;


 if (VAR_2->nbuckets >= VAR_2->nbuckets_optimal)
  return;






 VAR_2->nbuckets = VAR_2->nbuckets_optimal;
 VAR_2->log2_nbuckets = VAR_2->log2_nbuckets_optimal;

 FUNC_0(VAR_2->nbuckets > 1);
 FUNC_0(VAR_2->nbuckets <= (VAR_1 / 2));
 FUNC_0(VAR_2->nbuckets == (1 << VAR_2->log2_nbuckets));







 VAR_2->buckets.unshared =
  (HashJoinTuple *) FUNC_8(VAR_2->buckets.unshared,
           VAR_2->nbuckets * sizeof(HashJoinTuple));

 FUNC_6(VAR_2->buckets.unshared, 0,
     VAR_2->nbuckets * sizeof(HashJoinTuple));


 for (VAR_3 = VAR_2->chunks; VAR_3 != ((void*)0); VAR_3 = VAR_3->next.unshared)
 {

  size_t VAR_4 = 0;

  while (VAR_4 < VAR_3->used)
  {
   HashJoinTuple VAR_5 = (HashJoinTuple) (FUNC_3(VAR_3) + VAR_4);
   int VAR_6;
   int VAR_7;

   FUNC_2(VAR_2, VAR_5->hashvalue,
           &VAR_6, &VAR_7);


   VAR_5->next.unshared = VAR_2->buckets.unshared[VAR_6];
   VAR_2->buckets.unshared[VAR_6] = VAR_5;


   VAR_4 += FUNC_5(VAR_0 +
       FUNC_4(VAR_5)->t_len);
  }


  FUNC_1();
 }
}
