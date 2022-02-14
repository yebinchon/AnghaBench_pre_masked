
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_optimal_t ;
typedef int ZSTD_match_t ;
struct TYPE_3__ {scalar_t__ strategy; size_t chainLog; size_t hashLog; int searchLength; int windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef size_t U32 ;


 int FUNC_0 (int,char*,size_t,size_t,size_t) ;
 int VAR_0 ;
 size_t FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static size_t
FUNC_2(const ZSTD_compressionParameters* const VAR_9,
                       const U32 VAR_10)
{
    size_t const VAR_11 = (VAR_9->strategy == VAR_8) ? 0 : ((size_t)1 << VAR_9->chainLog);
    size_t const VAR_12 = ((size_t)1) << VAR_9->hashLog;
    U32 const VAR_13 = (VAR_10 && VAR_9->searchLength==3) ? FUNC_1(VAR_4, VAR_9->windowLog) : 0;
    size_t const VAR_14 = ((size_t)1) << VAR_13;
    size_t const VAR_15 = (VAR_11 + VAR_12 + VAR_14) * sizeof(U32);
    size_t const VAR_16 = ((VAR_2+1) + (VAR_1+1) + (VAR_3+1) + (1<<VAR_0)) * sizeof(U32)
                          + (VAR_5+1) * (sizeof(ZSTD_match_t)+sizeof(ZSTD_optimal_t));
    size_t const VAR_17 = (VAR_10 && ((VAR_9->strategy == VAR_6) ||
                                         (VAR_9->strategy == VAR_7)))
                                ? VAR_16
                                : 0;
    FUNC_0(4, "chainSize: %u - hSize: %u - h3Size: %u",
                (U32)VAR_11, (U32)VAR_12, (U32)VAR_14);
    return VAR_15 + VAR_17;
}
