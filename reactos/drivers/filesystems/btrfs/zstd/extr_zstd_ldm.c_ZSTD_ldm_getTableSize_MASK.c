
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t hashLog; scalar_t__ enableLdm; int bucketSizeLog; } ;
typedef TYPE_1__ ldmParams_t ;
typedef int ldmEntry_t ;


 size_t FUNC_0 (int ,size_t) ;

size_t FUNC_1(ldmParams_t VAR_0)
{
    size_t const VAR_1 = ((size_t)1) << VAR_0.hashLog;
    size_t const VAR_2 = FUNC_0(VAR_0.bucketSizeLog, VAR_0.hashLog);
    size_t const VAR_3 =
        ((size_t)1) << (VAR_0.hashLog - VAR_2);
    size_t const VAR_4 = VAR_3 + VAR_1 * sizeof(ldmEntry_t);
    return VAR_0.enableLdm ? VAR_4 : 0;
}
