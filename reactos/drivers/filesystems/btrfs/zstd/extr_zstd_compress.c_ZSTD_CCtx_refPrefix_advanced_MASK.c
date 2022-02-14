
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_dictContentType_e ;
struct TYPE_4__ {size_t dictSize; int dictContentType; void const* dict; } ;
struct TYPE_5__ {scalar_t__ streamStage; TYPE_1__ prefixDict; int * cdict; } ;
typedef TYPE_2__ ZSTD_CCtx ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_1(
        ZSTD_CCtx* VAR_2, const void* VAR_3, size_t VAR_4, ZSTD_dictContentType_e VAR_5)
{
    if (VAR_2->streamStage != VAR_1) return FUNC_0(VAR_0);
    VAR_2->cdict = ((void*)0);
    VAR_2->prefixDict.dict = VAR_3;
    VAR_2->prefixDict.dictSize = VAR_4;
    VAR_2->prefixDict.dictContentType = VAR_5;
    return 0;
}
