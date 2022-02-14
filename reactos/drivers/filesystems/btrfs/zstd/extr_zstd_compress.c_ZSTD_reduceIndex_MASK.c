
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int hashLog3; int hashTable3; int chainTable; int hashTable; } ;
typedef TYPE_4__ ZSTD_matchState_t ;
struct TYPE_8__ {int hashLog; scalar_t__ strategy; int chainLog; } ;
struct TYPE_9__ {TYPE_2__ cParams; } ;
struct TYPE_7__ {TYPE_4__ matchState; } ;
struct TYPE_11__ {TYPE_3__ appliedParams; TYPE_1__ blockState; } ;
typedef TYPE_5__ ZSTD_CCtx ;
typedef int U32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int const,int const) ;
 int FUNC_1 (int ,int const,int const) ;

__attribute__((used)) static void FUNC_2 (ZSTD_CCtx* VAR_2, const U32 VAR_3)
{
    ZSTD_matchState_t* const VAR_4 = &VAR_2->blockState.matchState;
    { U32 const VAR_5 = (U32)1 << VAR_2->appliedParams.cParams.hashLog;
        FUNC_0(VAR_4->hashTable, VAR_5, VAR_3);
    }

    if (VAR_2->appliedParams.cParams.strategy != VAR_1) {
        U32 const VAR_6 = (U32)1 << VAR_2->appliedParams.cParams.chainLog;
        if (VAR_2->appliedParams.cParams.strategy == VAR_0)
            FUNC_1(VAR_4->chainTable, VAR_6, VAR_3);
        else
            FUNC_0(VAR_4->chainTable, VAR_6, VAR_3);
    }

    if (VAR_4->hashLog3) {
        U32 const VAR_7 = (U32)1 << VAR_4->hashLog3;
        FUNC_0(VAR_4->hashTable3, VAR_7, VAR_3);
    }
}
