
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ strategy; scalar_t__ targetLength; scalar_t__ searchLength; scalar_t__ searchLog; scalar_t__ chainLog; scalar_t__ hashLog; scalar_t__ windowLog; } ;
typedef TYPE_3__ ZSTD_compressionParameters ;
struct TYPE_12__ {scalar_t__ strategy; scalar_t__ targetLength; scalar_t__ searchLength; scalar_t__ searchLog; scalar_t__ chainLog; scalar_t__ hashLog; scalar_t__ windowLog; } ;
struct TYPE_11__ {scalar_t__ enableLdm; } ;
struct TYPE_14__ {TYPE_2__ cParams; TYPE_1__ ldmParams; int compressionLevel; } ;
typedef TYPE_4__ ZSTD_CCtx_params ;
typedef int U64 ;


 scalar_t__ VAR_0 ;
 TYPE_3__ FUNC_0 (TYPE_3__,int ,size_t) ;
 int FUNC_1 (TYPE_3__) ;
 TYPE_3__ FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int) ;

ZSTD_compressionParameters FUNC_4(
        const ZSTD_CCtx_params* VAR_1, U64 VAR_2, size_t VAR_3)
{
    ZSTD_compressionParameters VAR_4 = FUNC_2(VAR_1->compressionLevel, VAR_2, VAR_3);
    if (VAR_1->ldmParams.enableLdm) VAR_4.windowLog = VAR_0;
    if (VAR_1->cParams.windowLog) VAR_4.windowLog = VAR_1->cParams.windowLog;
    if (VAR_1->cParams.hashLog) VAR_4.hashLog = VAR_1->cParams.hashLog;
    if (VAR_1->cParams.chainLog) VAR_4.chainLog = VAR_1->cParams.chainLog;
    if (VAR_1->cParams.searchLog) VAR_4.searchLog = VAR_1->cParams.searchLog;
    if (VAR_1->cParams.searchLength) VAR_4.searchLength = VAR_1->cParams.searchLength;
    if (VAR_1->cParams.targetLength) VAR_4.targetLength = VAR_1->cParams.targetLength;
    if (VAR_1->cParams.strategy) VAR_4.strategy = VAR_1->cParams.strategy;
    FUNC_3(!FUNC_1(VAR_4));
    return FUNC_0(VAR_4, VAR_2, VAR_3);
}
