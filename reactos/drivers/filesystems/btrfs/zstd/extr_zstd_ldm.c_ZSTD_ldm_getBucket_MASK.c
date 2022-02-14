
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hashTable; } ;
typedef TYPE_1__ ldmState_t ;
struct TYPE_6__ {size_t bucketSizeLog; } ;
typedef TYPE_2__ ldmParams_t ;
typedef int ldmEntry_t ;



__attribute__((used)) static ldmEntry_t* FUNC_0(
        ldmState_t* VAR_0, size_t VAR_1, ldmParams_t const VAR_2)
{
    return VAR_0->hashTable + (VAR_1 << VAR_2.bucketSizeLog);
}
