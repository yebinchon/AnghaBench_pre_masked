
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rawSeq ;
struct TYPE_7__ {size_t windowLog; int searchLength; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef int ZSTD_compressedBlockState_t ;
struct TYPE_8__ {scalar_t__ nbWorkers; int ldmParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;
typedef size_t U32 ;


 int FUNC_0 (int,char*,size_t) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_2 (int ,size_t) ;
 size_t const VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_3 (TYPE_2__ const*,int ,int ) ;
 int FUNC_4 (int ,size_t const) ;
 size_t FUNC_5 (int ) ;
 size_t FUNC_6 (TYPE_1__ const*,int) ;

size_t FUNC_7(const ZSTD_CCtx_params* VAR_4)
{

    if (VAR_4->nbWorkers > 0) { return FUNC_1(VAR_0); }
    { ZSTD_compressionParameters const VAR_5 =
                FUNC_3(VAR_4, 0, 0);
        size_t const VAR_6 = FUNC_2(VAR_3, (size_t)1 << VAR_5.windowLog);
        U32 const VAR_7 = (VAR_5.searchLength==3) ? 3 : 4;
        size_t const VAR_8 = VAR_6 / VAR_7;
        size_t const VAR_9 = VAR_2 + VAR_6 + 11*VAR_8;
        size_t const VAR_10 = VAR_1;
        size_t const VAR_11 = 2 * sizeof(ZSTD_compressedBlockState_t);
        size_t const VAR_12 = FUNC_6(&VAR_5, 1);

        size_t const VAR_13 = FUNC_5(VAR_4->ldmParams);
        size_t const VAR_14 = FUNC_4(VAR_4->ldmParams, VAR_6) * sizeof(rawSeq);

        size_t const VAR_15 = VAR_10 + VAR_11 + VAR_9 +
                                   VAR_12 + VAR_13 + VAR_14;

        FUNC_0(5, "sizeof(ZSTD_CCtx) : %u", (U32)sizeof(ZSTD_CCtx));
        FUNC_0(5, "estimate workSpace : %u", (U32)VAR_15);
        return sizeof(ZSTD_CCtx) + VAR_15;
    }
}
