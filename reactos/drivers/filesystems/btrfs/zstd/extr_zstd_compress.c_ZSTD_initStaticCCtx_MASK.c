
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void ZSTD_compressedBlockState_t ;
struct TYPE_4__ {void* prevCBlock; void* nextCBlock; } ;
struct TYPE_5__ {size_t staticSize; size_t workSpaceSize; int bmi2; int * entropyWorkspace; TYPE_1__ blockState; void* workSpace; } ;
typedef TYPE_2__ ZSTD_CCtx ;
typedef int U32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int ,size_t) ;

ZSTD_CCtx* FUNC_4(void *VAR_1, size_t VAR_2)
{
    ZSTD_CCtx* const VAR_3 = (ZSTD_CCtx*) VAR_1;
    if (VAR_2 <= sizeof(ZSTD_CCtx)) return ((void*)0);
    if ((size_t)VAR_1 & 7) return ((void*)0);
    FUNC_3(VAR_1, 0, VAR_2);
    VAR_3->staticSize = VAR_2;
    VAR_3->workSpace = (void*)(VAR_3+1);
    VAR_3->workSpaceSize = VAR_2 - sizeof(ZSTD_CCtx);


    if (VAR_3->workSpaceSize < VAR_0 + 2 * sizeof(ZSTD_compressedBlockState_t)) return ((void*)0);
    FUNC_2(((size_t)VAR_3->workSpace & (sizeof(void*)-1)) == 0);
    VAR_3->blockState.prevCBlock = (ZSTD_compressedBlockState_t*)VAR_3->workSpace;
    VAR_3->blockState.nextCBlock = VAR_3->blockState.prevCBlock + 1;
    {
        void* const VAR_4 = VAR_3->blockState.nextCBlock + 1;
        VAR_3->entropyWorkspace = (U32*)VAR_4;
    }
    VAR_3->bmi2 = FUNC_1(FUNC_0());
    return VAR_3;
}
