
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int customFree; int customAlloc; } ;
typedef TYPE_2__ ZSTD_customMem ;
struct TYPE_7__ {int contentSizeFlag; } ;
struct TYPE_9__ {TYPE_1__ fParams; int compressionLevel; TYPE_2__ customMem; } ;
typedef TYPE_3__ ZSTD_CCtx_params ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,TYPE_2__) ;

__attribute__((used)) static ZSTD_CCtx_params* FUNC_1(
        ZSTD_customMem VAR_1)
{
    ZSTD_CCtx_params* VAR_2;
    if (!VAR_1.customAlloc ^ !VAR_1.customFree) return ((void*)0);
    VAR_2 = (ZSTD_CCtx_params*)FUNC_0(
            sizeof(ZSTD_CCtx_params), VAR_1);
    if (!VAR_2) { return ((void*)0); }
    VAR_2->customMem = VAR_1;
    VAR_2->compressionLevel = VAR_0;
    VAR_2->fParams.contentSizeFlag = 1;
    return VAR_2;
}
