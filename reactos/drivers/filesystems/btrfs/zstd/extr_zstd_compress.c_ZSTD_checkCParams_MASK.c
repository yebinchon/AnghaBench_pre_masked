
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ targetLength; scalar_t__ strategy; int searchLength; int searchLog; int hashLog; int chainLog; int windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int ,int ,int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

size_t FUNC_3(ZSTD_compressionParameters VAR_15)
{
    FUNC_0(VAR_15.windowLog, VAR_11, VAR_10);
    FUNC_0(VAR_15.chainLog, VAR_1, VAR_0);
    FUNC_0(VAR_15.hashLog, VAR_3, VAR_2);
    FUNC_0(VAR_15.searchLog, VAR_7, VAR_6);
    FUNC_0(VAR_15.searchLength, VAR_5, VAR_4);
    FUNC_2(VAR_9 == 0);
    if (VAR_15.targetLength > VAR_8)
        return FUNC_1(VAR_13);
    if ((U32)(VAR_15.strategy) > (U32)VAR_12)
        return FUNC_1(VAR_14);
    return 0;
}
