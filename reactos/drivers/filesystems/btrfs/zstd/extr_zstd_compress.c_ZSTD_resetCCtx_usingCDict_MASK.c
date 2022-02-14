
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_buffered_policy_e ;
typedef int ZSTD_CDict ;
typedef int ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;
typedef scalar_t__ U64 ;
typedef int U32 ;


 int FUNC_0 (int,char*,int ) ;
 size_t FUNC_1 (int *,int const*,int ,scalar_t__,int ) ;
 size_t FUNC_2 (int *,int const*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int const*,int ,scalar_t__) ;

__attribute__((used)) static size_t FUNC_4(ZSTD_CCtx* VAR_0,
                            const ZSTD_CDict* VAR_1,
                            ZSTD_CCtx_params VAR_2,
                            U64 VAR_3,
                            ZSTD_buffered_policy_e VAR_4)
{

    FUNC_0(4, "ZSTD_resetCCtx_usingCDict (pledgedSrcSize=%u)", (U32)VAR_3);

    if (FUNC_3(VAR_1, VAR_2, VAR_3)) {
        return FUNC_1(
            VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
        return FUNC_2(
            VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    }
}
