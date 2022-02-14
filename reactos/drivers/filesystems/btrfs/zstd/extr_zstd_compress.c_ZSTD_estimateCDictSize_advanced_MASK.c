
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ZSTD_dictLoadMethod_e ;
typedef int ZSTD_compressionParameters ;
typedef int ZSTD_CDict ;
typedef int U32 ;


 int FUNC_0 (int,char*,int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (int *,int ) ;

size_t FUNC_2(
        size_t VAR_2, ZSTD_compressionParameters VAR_3,
        ZSTD_dictLoadMethod_e VAR_4)
{
    FUNC_0(5, "sizeof(ZSTD_CDict) : %u", (U32)sizeof(ZSTD_CDict));
    return sizeof(ZSTD_CDict) + VAR_0 + FUNC_1(&VAR_3, 0)
           + (VAR_4 == VAR_1 ? 0 : VAR_2);
}
