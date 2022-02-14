
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {size_t hashLog3; int loadedDictEnd; int nextToUpdate3; int nextToUpdate; int window; int * hashTable; scalar_t__ chainTable; scalar_t__ hashTable3; } ;
typedef TYPE_4__ ZSTD_matchState_t ;
typedef int ZSTD_frameParameters ;
typedef int ZSTD_customMem ;
typedef int ZSTD_buffered_policy_e ;
struct TYPE_11__ {scalar_t__ windowLog; scalar_t__ strategy; size_t hashLog; size_t chainLog; } ;
struct TYPE_15__ {int fParams; TYPE_1__ cParams; } ;
typedef TYPE_5__ ZSTD_CCtx_params ;
struct TYPE_13__ {int * prevCBlock; TYPE_4__ matchState; } ;
struct TYPE_12__ {TYPE_1__ cParams; } ;
struct TYPE_16__ {scalar_t__ stage; TYPE_3__ blockState; int dictID; TYPE_2__ appliedParams; TYPE_5__ requestedParams; int customMem; } ;
typedef TYPE_6__ ZSTD_CCtx ;
typedef int U64 ;
typedef int U32 ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_6__*,TYPE_5__,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,size_t const) ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_5(ZSTD_CCtx* VAR_4,
                            const ZSTD_CCtx* VAR_5,
                            ZSTD_frameParameters VAR_6,
                            U64 VAR_7,
                            ZSTD_buffered_policy_e VAR_8)
{
    FUNC_0(5, "ZSTD_copyCCtx_internal");
    if (VAR_5->stage!=VAR_2) return FUNC_1(VAR_3);

    FUNC_4(&VAR_4->customMem, &VAR_5->customMem, sizeof(ZSTD_customMem));
    { ZSTD_CCtx_params VAR_9 = VAR_4->requestedParams;

        VAR_9.cParams = VAR_5->appliedParams.cParams;
        VAR_9.fParams = VAR_6;
        FUNC_2(VAR_4, VAR_9, VAR_7,
                                VAR_1, VAR_8);
        FUNC_3(VAR_4->appliedParams.cParams.windowLog == VAR_5->appliedParams.cParams.windowLog);
        FUNC_3(VAR_4->appliedParams.cParams.strategy == VAR_5->appliedParams.cParams.strategy);
        FUNC_3(VAR_4->appliedParams.cParams.hashLog == VAR_5->appliedParams.cParams.hashLog);
        FUNC_3(VAR_4->appliedParams.cParams.chainLog == VAR_5->appliedParams.cParams.chainLog);
        FUNC_3(VAR_4->blockState.matchState.hashLog3 == VAR_5->blockState.matchState.hashLog3);
    }


    { size_t const VAR_10 = (VAR_5->appliedParams.cParams.strategy == VAR_0) ? 0 : ((size_t)1 << VAR_5->appliedParams.cParams.chainLog);
        size_t const VAR_11 = (size_t)1 << VAR_5->appliedParams.cParams.hashLog;
        size_t const VAR_12 = (size_t)1 << VAR_5->blockState.matchState.hashLog3;
        size_t const VAR_13 = (VAR_10 + VAR_11 + VAR_12) * sizeof(U32);
        FUNC_3((U32*)VAR_4->blockState.matchState.chainTable == (U32*)VAR_4->blockState.matchState.hashTable + VAR_11);
        FUNC_3((U32*)VAR_4->blockState.matchState.hashTable3 == (U32*)VAR_4->blockState.matchState.chainTable + VAR_10);
        FUNC_4(VAR_4->blockState.matchState.hashTable, VAR_5->blockState.matchState.hashTable, VAR_13);
    }


    {
        const ZSTD_matchState_t* VAR_14 = &VAR_5->blockState.matchState;
        ZSTD_matchState_t* VAR_15 = &VAR_4->blockState.matchState;
        VAR_15->window = VAR_14->window;
        VAR_15->nextToUpdate = VAR_14->nextToUpdate;
        VAR_15->nextToUpdate3= VAR_14->nextToUpdate3;
        VAR_15->loadedDictEnd= VAR_14->loadedDictEnd;
    }
    VAR_4->dictID = VAR_5->dictID;


    FUNC_4(VAR_4->blockState.prevCBlock, VAR_5->blockState.prevCBlock, sizeof(*VAR_5->blockState.prevCBlock));

    return 0;
}
