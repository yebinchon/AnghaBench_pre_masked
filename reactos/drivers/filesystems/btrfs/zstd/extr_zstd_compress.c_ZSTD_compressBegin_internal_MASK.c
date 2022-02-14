
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int ZSTD_dictTableLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
typedef int ZSTD_buffered_policy_e ;
struct TYPE_17__ {scalar_t__ dictContentSize; } ;
typedef TYPE_2__ ZSTD_CDict ;
struct TYPE_15__ {int windowLog; } ;
struct TYPE_18__ {TYPE_14__ cParams; } ;
typedef TYPE_3__ ZSTD_CCtx_params ;
struct TYPE_16__ {int matchState; int prevCBlock; } ;
struct TYPE_19__ {scalar_t__ dictID; int entropyWorkspace; TYPE_1__ blockState; } ;
typedef TYPE_4__ ZSTD_CCtx ;
typedef int U64 ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ) ;
 size_t const FUNC_2 (TYPE_14__) ;
 size_t FUNC_3 (int ,int *,TYPE_3__*,void const*,size_t,int ,int ,int ) ;
 scalar_t__ FUNC_4 (size_t const) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__,int ,int ,int ) ;
 size_t FUNC_6 (TYPE_4__*,TYPE_2__ const*,TYPE_3__,int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (int) ;

__attribute__((used)) static size_t FUNC_8(ZSTD_CCtx* VAR_1,
                                    const void* VAR_2, size_t VAR_3,
                                    ZSTD_dictContentType_e VAR_4,
                                    ZSTD_dictTableLoadMethod_e VAR_5,
                                    const ZSTD_CDict* VAR_6,
                                    ZSTD_CCtx_params VAR_7, U64 VAR_8,
                                    ZSTD_buffered_policy_e VAR_9)
{
    FUNC_1(4, "ZSTD_compressBegin_internal: wlog=%u", VAR_7.cParams.windowLog);

    FUNC_7(!FUNC_4(FUNC_2(VAR_7.cParams)));
    FUNC_7(!((VAR_2) && (VAR_6)));

    if (VAR_6 && VAR_6->dictContentSize>0) {
        return FUNC_6(VAR_1, VAR_6, VAR_7, VAR_8, VAR_9);
    }

    FUNC_0( FUNC_5(VAR_1, VAR_7, VAR_8,
                                     VAR_0, VAR_9) );
    {
        size_t const VAR_10 = FUNC_3(
                VAR_1->blockState.prevCBlock, &VAR_1->blockState.matchState,
                &VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_1->entropyWorkspace);
        if (FUNC_4(VAR_10)) return VAR_10;
        FUNC_7(VAR_10 <= (size_t)(U32)-1);
        VAR_1->dictID = (U32)VAR_10;
    }
    return 0;
}
