
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t const windowLog; int searchLength; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef scalar_t__ ZSTD_buffered_policy_e ;
typedef size_t const U64 ;
typedef int U32 ;


 int FUNC_0 (int,char*,int,int) ;
 size_t FUNC_1 (int,size_t) ;
 size_t FUNC_2 (size_t const,size_t const) ;
 size_t const VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static U32 FUNC_3(size_t VAR_2, size_t VAR_3,
                            size_t VAR_4,
                            ZSTD_buffered_policy_e VAR_5,
                            ZSTD_compressionParameters VAR_6,
                            U64 VAR_7)
{
    size_t const VAR_8 = FUNC_1(1, (size_t)FUNC_2(((U64)1 << VAR_6), VAR_7));
    size_t const VAR_9 = FUNC_2(VAR_0, VAR_8);
    size_t const VAR_10 = VAR_9 / ((VAR_6 == 3) ? 3 : 4);
    size_t const VAR_11 = VAR_9;
    size_t const VAR_12 = (VAR_5==VAR_1) ? VAR_8 + VAR_9 : 0;
    FUNC_0(4, "ZSTD_sufficientBuff: is neededBufferSize2=%u <= bufferSize1=%u",
                (U32)VAR_12, (U32)VAR_2);
    FUNC_0(4, "ZSTD_sufficientBuff: is maxNbSeq2=%u <= maxNbSeq1=%u",
                (U32)VAR_10, (U32)VAR_3);
    FUNC_0(4, "ZSTD_sufficientBuff: is maxNbLit2=%u <= maxNbLit1=%u",
                (U32)VAR_11, (U32)VAR_4);
    return (VAR_11 <= VAR_4)
         & (VAR_10 <= VAR_3)
         & (VAR_12 <= VAR_2);
}
