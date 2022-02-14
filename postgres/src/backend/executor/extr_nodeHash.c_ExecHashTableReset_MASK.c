
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * unshared; } ;
struct TYPE_5__ {int nbuckets; int * chunks; scalar_t__ spaceUsed; TYPE_1__ buckets; int batchCxt; } ;
typedef int MemoryContext ;
typedef int HashJoinTuple ;
typedef TYPE_2__* HashJoinTable ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(HashJoinTable VAR_0)
{
 MemoryContext VAR_1;
 int VAR_2 = VAR_0->nbuckets;





 FUNC_0(VAR_0->batchCxt);
 VAR_1 = FUNC_1(VAR_0->batchCxt);


 VAR_0->buckets.unshared = (HashJoinTuple *)
  FUNC_2(VAR_2 * sizeof(HashJoinTuple));

 VAR_0->spaceUsed = 0;

 FUNC_1(VAR_1);


 VAR_0->chunks = ((void*)0);
}
