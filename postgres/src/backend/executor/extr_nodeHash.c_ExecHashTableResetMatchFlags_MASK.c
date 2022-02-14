
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__** unshared; } ;
struct TYPE_12__ {int nbuckets; int nSkewBuckets; int* skewBucketNums; TYPE_3__** skewBucket; TYPE_1__ buckets; } ;
struct TYPE_9__ {TYPE_4__* unshared; } ;
struct TYPE_11__ {TYPE_2__ next; } ;
struct TYPE_10__ {TYPE_4__* tuples; } ;
typedef TYPE_3__ HashSkewBucket ;
typedef TYPE_4__* HashJoinTuple ;
typedef TYPE_5__* HashJoinTable ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(HashJoinTable VAR_0)
{
 HashJoinTuple VAR_1;
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->nbuckets; VAR_2++)
 {
  for (VAR_1 = VAR_0->buckets.unshared[VAR_2]; VAR_1 != ((void*)0);
    VAR_1 = VAR_1->next.unshared)
   FUNC_1(FUNC_0(VAR_1));
 }


 for (VAR_2 = 0; VAR_2 < VAR_0->nSkewBuckets; VAR_2++)
 {
  int VAR_3 = VAR_0->skewBucketNums[VAR_2];
  HashSkewBucket *VAR_4 = VAR_0->skewBucket[VAR_3];

  for (VAR_1 = VAR_4->tuples; VAR_1 != ((void*)0); VAR_1 = VAR_1->next.unshared)
   FUNC_1(FUNC_0(VAR_1));
 }
}
