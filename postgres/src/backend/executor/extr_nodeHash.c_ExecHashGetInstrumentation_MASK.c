
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int space_peak; int nbatch_original; int nbatch; int nbuckets_original; int nbuckets; } ;
struct TYPE_5__ {int spacePeak; int nbatch_original; int nbatch; int nbuckets_original; int nbuckets; } ;
typedef TYPE_1__* HashJoinTable ;
typedef TYPE_2__ HashInstrumentation ;



void
FUNC_0(HashInstrumentation *VAR_0,
         HashJoinTable VAR_1)
{
 VAR_0->nbuckets = VAR_1->nbuckets;
 VAR_0->nbuckets_original = VAR_1->nbuckets_original;
 VAR_0->nbatch = VAR_1->nbatch;
 VAR_0->nbatch_original = VAR_1->nbatch_original;
 VAR_0->space_peak = VAR_1->spacePeak;
}
