
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_matchState_t ;
typedef int ZSTD_dictTableLoadMethod_e ;
typedef scalar_t__ ZSTD_dictContentType_e ;
typedef int ZSTD_compressedBlockState_t ;
typedef int ZSTD_CCtx_params ;
typedef int U32 ;


 int FUNC_0 (int,char*,...) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_3 (int *,int const*,void const*,size_t,int ) ;
 size_t FUNC_4 (int *,int *,int const*,void const*,size_t,int ,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;

__attribute__((used)) static size_t
FUNC_7(ZSTD_compressedBlockState_t* VAR_5,
                               ZSTD_matchState_t* VAR_6,
                         const ZSTD_CCtx_params* VAR_7,
                         const void* VAR_8, size_t VAR_9,
                               ZSTD_dictContentType_e VAR_10,
                               ZSTD_dictTableLoadMethod_e VAR_11,
                               void* VAR_12)
{
    FUNC_0(4, "ZSTD_compress_insertDictionary (dictSize=%u)", (U32)VAR_9);
    if ((VAR_8==((void*)0)) || (VAR_9<=8)) return 0;

    FUNC_5(VAR_5);


    if (VAR_10 == VAR_3)
        return FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_11);

    if (FUNC_2(VAR_8) != VAR_0) {
        if (VAR_10 == VAR_1) {
            FUNC_0(4, "raw content dictionary detected");
            return FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_11);
        }
        if (VAR_10 == VAR_2)
            return FUNC_1(VAR_4);
        FUNC_6(0);
    }


    return FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_11, VAR_12);
}
