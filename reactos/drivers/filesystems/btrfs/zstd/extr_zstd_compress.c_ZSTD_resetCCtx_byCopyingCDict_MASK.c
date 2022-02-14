
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {unsigned int windowLog; scalar_t__ strategy; size_t hashLog; size_t chainLog; } ;
struct TYPE_17__ {size_t hashLog3; int loadedDictEnd; int nextToUpdate3; int nextToUpdate; int window; scalar_t__ hashTable3; int * hashTable; scalar_t__ chainTable; TYPE_5__ cParams; } ;
typedef TYPE_4__ ZSTD_matchState_t ;
typedef TYPE_5__ ZSTD_compressionParameters ;
typedef int ZSTD_buffered_policy_e ;
struct TYPE_19__ {int cBlockState; int dictID; TYPE_4__ matchState; } ;
typedef TYPE_6__ ZSTD_CDict ;
struct TYPE_20__ {TYPE_5__ cParams; } ;
typedef TYPE_7__ ZSTD_CCtx_params ;
struct TYPE_16__ {int * prevCBlock; TYPE_4__ matchState; } ;
struct TYPE_14__ {scalar_t__ strategy; size_t hashLog; size_t chainLog; } ;
struct TYPE_15__ {TYPE_1__ cParams; } ;
struct TYPE_21__ {TYPE_3__ blockState; int dictID; TYPE_2__ appliedParams; } ;
typedef TYPE_8__ ZSTD_CCtx ;
typedef int U64 ;
typedef int U32 ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_8__*,TYPE_7__,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,size_t const) ;
 int FUNC_4 (scalar_t__,int ,size_t const) ;

__attribute__((used)) static size_t FUNC_5(ZSTD_CCtx* VAR_2,
                            const ZSTD_CDict* VAR_3,
                            ZSTD_CCtx_params VAR_4,
                            U64 VAR_5,
                            ZSTD_buffered_policy_e VAR_6)
{
    const ZSTD_compressionParameters *VAR_7 = &VAR_3->matchState.cParams;

    FUNC_0(4, "copying dictionary into context");

    { unsigned const VAR_8 = VAR_4.cParams.windowLog;
        FUNC_2(VAR_8 != 0);

        VAR_4.cParams = *VAR_7;
        VAR_4.cParams.windowLog = VAR_8;
        FUNC_1(VAR_2, VAR_4, VAR_5,
                                VAR_1, VAR_6);
        FUNC_2(VAR_2->appliedParams.cParams.strategy == VAR_7->strategy);
        FUNC_2(VAR_2->appliedParams.cParams.hashLog == VAR_7->hashLog);
        FUNC_2(VAR_2->appliedParams.cParams.chainLog == VAR_7->chainLog);
    }


    { size_t const VAR_9 = (VAR_7->strategy == VAR_0) ? 0 : ((size_t)1 << VAR_7->chainLog);
        size_t const VAR_10 = (size_t)1 << VAR_7->hashLog;
        size_t const VAR_11 = (VAR_9 + VAR_10) * sizeof(U32);
        FUNC_2((U32*)VAR_2->blockState.matchState.chainTable == (U32*)VAR_2->blockState.matchState.hashTable + VAR_10);
        FUNC_2((U32*)VAR_2->blockState.matchState.hashTable3 == (U32*)VAR_2->blockState.matchState.chainTable + VAR_9);
        FUNC_2((U32*)VAR_3->matchState.chainTable == (U32*)VAR_3->matchState.hashTable + VAR_10);
        FUNC_2((U32*)VAR_3->matchState.hashTable3 == (U32*)VAR_3->matchState.chainTable + VAR_9);
        FUNC_3(VAR_2->blockState.matchState.hashTable, VAR_3->matchState.hashTable, VAR_11);
    }


    { size_t const VAR_12 = (size_t)1 << VAR_2->blockState.matchState.hashLog3;
        FUNC_2(VAR_3->matchState.hashLog3 == 0);
        FUNC_4(VAR_2->blockState.matchState.hashTable3, 0, VAR_12 * sizeof(U32));
    }


    { ZSTD_matchState_t const* VAR_13 = &VAR_3->matchState;
        ZSTD_matchState_t* VAR_14 = &VAR_2->blockState.matchState;
        VAR_14->window = VAR_13->window;
        VAR_14->nextToUpdate = VAR_13->nextToUpdate;
        VAR_14->nextToUpdate3= VAR_13->nextToUpdate3;
        VAR_14->loadedDictEnd= VAR_13->loadedDictEnd;
    }

    VAR_2->dictID = VAR_3->dictID;


    FUNC_3(VAR_2->blockState.prevCBlock, &VAR_3->cBlockState, sizeof(VAR_3->cBlockState));

    return 0;
}
