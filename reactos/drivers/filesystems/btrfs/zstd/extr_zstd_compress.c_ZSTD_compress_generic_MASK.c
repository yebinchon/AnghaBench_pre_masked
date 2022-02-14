
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {int dictContentType; int dictSize; int * dict; } ;
typedef TYPE_2__ ZSTD_prefixDict ;
struct TYPE_24__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_3__ ZSTD_outBuffer ;
struct TYPE_25__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_4__ ZSTD_inBuffer ;
typedef scalar_t__ ZSTD_EndDirective ;
struct TYPE_26__ {scalar_t__ nbWorkers; int cParams; } ;
typedef TYPE_5__ ZSTD_CCtx_params ;
struct TYPE_22__ {scalar_t__ nbWorkers; } ;
struct TYPE_27__ {scalar_t__ streamStage; scalar_t__ pledgedSrcSizePlusOne; size_t outBuffContentSize; size_t outBuffFlushedSize; int * mtctx; scalar_t__ cParamsChanged; TYPE_5__ requestedParams; TYPE_1__ appliedParams; int * cdict; int customMem; TYPE_2__ prefixDict; } ;
typedef TYPE_6__ ZSTD_CCtx ;
typedef int U32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_3 (int *,TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int * FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *,int *,int ,int ,int *,TYPE_5__,scalar_t__) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (TYPE_5__*,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (size_t const) ;
 int FUNC_11 (TYPE_6__*,int *,int ,int ,int *,TYPE_5__,scalar_t__) ;
 int FUNC_12 (int) ;
 int VAR_4 ;
 int FUNC_13 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

size_t FUNC_14 (ZSTD_CCtx* VAR_7,
                              ZSTD_outBuffer* VAR_8,
                              ZSTD_inBuffer* VAR_9,
                              ZSTD_EndDirective VAR_10)
{
    FUNC_1(5, "ZSTD_compress_generic, endOp=%u ", (U32)VAR_10);

    if (VAR_8->pos > VAR_8->size) return FUNC_2(VAR_0);
    if (VAR_9->pos > VAR_9->size) return FUNC_2(VAR_0);
    FUNC_12(VAR_7!=((void*)0));


    if (VAR_7->streamStage == VAR_5) {
        ZSTD_CCtx_params VAR_11 = VAR_7->requestedParams;
        ZSTD_prefixDict const VAR_12 = VAR_7->prefixDict;
        FUNC_13(&VAR_7->prefixDict, 0, sizeof(VAR_7->prefixDict));
        FUNC_12(VAR_12.dict==((void*)0) || VAR_7->cdict==((void*)0));
        FUNC_1(4, "ZSTD_compress_generic : transparent init stage");
        if (VAR_10 == VAR_3) VAR_7->pledgedSrcSizePlusOne = VAR_9->size + 1;
        VAR_11.cParams = FUNC_9(
                &VAR_7->requestedParams, VAR_7->pledgedSrcSizePlusOne-1, 0 );
        { FUNC_0( FUNC_11(VAR_7,
                            VAR_12.dict, VAR_12.dictSize, VAR_12.dictContentType,
                            VAR_7->cdict,
                            VAR_11, VAR_7->pledgedSrcSizePlusOne-1) );
            FUNC_12(VAR_7->streamStage == VAR_6);
            FUNC_12(VAR_7->appliedParams.nbWorkers == 0);
    } }
    FUNC_0( FUNC_8(VAR_7, VAR_8, VAR_9, VAR_10) );
    FUNC_1(5, "completed ZSTD_compress_generic");
    return VAR_7->outBuffContentSize - VAR_7->outBuffFlushedSize;
}
