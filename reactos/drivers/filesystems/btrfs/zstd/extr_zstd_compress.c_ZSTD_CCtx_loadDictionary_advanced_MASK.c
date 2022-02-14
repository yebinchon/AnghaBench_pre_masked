
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_dictLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
typedef int ZSTD_compressionParameters ;
struct TYPE_3__ {scalar_t__ streamStage; int * cdictLocal; int * cdict; int customMem; scalar_t__ pledgedSrcSizePlusOne; int requestedParams; scalar_t__ staticSize; } ;
typedef TYPE_1__ ZSTD_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,char*,int ) ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (void const*,size_t,int ,int ,int const,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

size_t FUNC_5(
        ZSTD_CCtx* VAR_3, const void* VAR_4, size_t VAR_5,
        ZSTD_dictLoadMethod_e VAR_6, ZSTD_dictContentType_e VAR_7)
{
    if (VAR_3->streamStage != VAR_2) return FUNC_1(VAR_1);
    if (VAR_3->staticSize) return FUNC_1(VAR_0);
    FUNC_0(4, "ZSTD_CCtx_loadDictionary_advanced (size: %u)", (U32)VAR_5);
    FUNC_3(VAR_3->cdictLocal);
    if (VAR_4==((void*)0) || VAR_5==0) {
        VAR_3->cdictLocal = ((void*)0);
        VAR_3->cdict = ((void*)0);
    } else {
        ZSTD_compressionParameters const VAR_8 =
                FUNC_4(&VAR_3->requestedParams, VAR_3->pledgedSrcSizePlusOne-1, VAR_5);
        VAR_3->cdictLocal = FUNC_2(
                                VAR_4, VAR_5,
                                VAR_6, VAR_7,
                                VAR_8, VAR_3->customMem);
        VAR_3->cdict = VAR_3->cdictLocal;
        if (VAR_3->cdictLocal == ((void*)0))
            return FUNC_1(VAR_0);
    }
    return 0;
}
