
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_stack ;
typedef int ZSTD_optimal_t ;
typedef int ZSTD_match_t ;
struct TYPE_3__ {size_t windowLog; int searchLength; scalar_t__ strategy; int chainLog; size_t hashLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef int ZSTD_CCtx ;
typedef size_t U32 ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (size_t const) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

size_t FUNC_2(ZSTD_compressionParameters VAR_10)
{
 size_t const VAR_11 = FUNC_0(VAR_4, (size_t)1 << VAR_10.windowLog);
 U32 const VAR_12 = (VAR_10.searchLength == 3) ? 3 : 4;
 size_t const VAR_13 = VAR_11 / VAR_12;
 size_t const VAR_14 = VAR_11 + 11 * VAR_13;
 size_t const VAR_15 = (VAR_10.strategy == VAR_9) ? 0 : (1 << VAR_10.chainLog);
 size_t const VAR_16 = ((size_t)1) << VAR_10.hashLog;
 U32 const VAR_17 = (VAR_10.searchLength > 3) ? 0 : FUNC_0(VAR_5, VAR_10.windowLog);
 size_t const VAR_18 = ((size_t)1) << VAR_17;
 size_t const VAR_19 = (VAR_15 + VAR_16 + VAR_18) * sizeof(U32);
 size_t const VAR_20 =
     ((VAR_2 + 1) + (VAR_1 + 1) + (VAR_3 + 1) + (1 << VAR_0)) * sizeof(U32) + (VAR_6 + 1) * (sizeof(ZSTD_match_t) + sizeof(ZSTD_optimal_t));
 size_t const VAR_21 = VAR_19 + (256 * sizeof(U32)) + VAR_14 +
         (((VAR_10.strategy == VAR_7) || (VAR_10.strategy == VAR_8)) ? VAR_20 : 0);

 return FUNC_1(sizeof(ZSTD_stack)) + FUNC_1(sizeof(ZSTD_CCtx)) + FUNC_1(VAR_21);
}
