
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int log2_nbuckets; int nbatch; int nbuckets; } ;
typedef TYPE_1__* HashJoinTable ;



void
FUNC_0(HashJoinTable VAR_0,
        uint32 VAR_1,
        int *VAR_2,
        int *VAR_3)
{
 uint32 VAR_4 = (uint32) VAR_0->nbuckets;
 uint32 VAR_5 = (uint32) VAR_0->nbatch;

 if (VAR_5 > 1)
 {

  *VAR_2 = VAR_1 & (VAR_4 - 1);
  *VAR_3 = (VAR_1 >> VAR_0->log2_nbuckets) & (VAR_5 - 1);
 }
 else
 {
  *VAR_2 = VAR_1 & (VAR_4 - 1);
  *VAR_3 = 0;
 }
}
