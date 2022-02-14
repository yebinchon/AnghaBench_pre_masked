
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ targetLength; int strategy; int searchLength; int searchLog; int hashLog; int chainLog; int windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static ZSTD_compressionParameters
FUNC_2(ZSTD_compressionParameters VAR_14)
{




    { if (VAR_14.windowLog<VAR_11) VAR_14.windowLog=VAR_11; else if (VAR_14.windowLog>VAR_10) VAR_14.windowLog=VAR_10; };
    { if (VAR_14.chainLog<VAR_1) VAR_14.chainLog=VAR_1; else if (VAR_14.chainLog>VAR_0) VAR_14.chainLog=VAR_0; };
    { if (VAR_14.hashLog<VAR_3) VAR_14.hashLog=VAR_3; else if (VAR_14.hashLog>VAR_2) VAR_14.hashLog=VAR_2; };
    { if (VAR_14.searchLog<VAR_7) VAR_14.searchLog=VAR_7; else if (VAR_14.searchLog>VAR_6) VAR_14.searchLog=VAR_6; };
    { if (VAR_14.searchLength<VAR_5) VAR_14.searchLength=VAR_5; else if (VAR_14.searchLength>VAR_4) VAR_14.searchLength=VAR_4; };
    FUNC_1(VAR_9 == 0);
    if (VAR_14.targetLength > VAR_8)
        VAR_14.targetLength = VAR_8;
    { if (VAR_14.strategy<VAR_13) VAR_14.strategy=VAR_13; else if (VAR_14.strategy>VAR_12) VAR_14.strategy=VAR_12; };
    return VAR_14;
}
