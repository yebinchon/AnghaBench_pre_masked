
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ strategy; int targetLength; int searchLength; int searchLog; int hashLog; int chainLog; int windowLog; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

size_t FUNC_2(ZSTD_compressionParameters VAR_14)
{





 { if ((VAR_14.windowLog < VAR_11) | (VAR_14.windowLog > VAR_10)) return FUNC_1(VAR_13); };
 { if ((VAR_14.chainLog < VAR_1) | (VAR_14.chainLog > VAR_0)) return FUNC_1(VAR_13); };
 { if ((VAR_14.hashLog < VAR_3) | (VAR_14.hashLog > VAR_2)) return FUNC_1(VAR_13); };
 { if ((VAR_14.searchLog < VAR_7) | (VAR_14.searchLog > VAR_6)) return FUNC_1(VAR_13); };
 { if ((VAR_14.searchLength < VAR_5) | (VAR_14.searchLength > VAR_4)) return FUNC_1(VAR_13); };
 { if ((VAR_14.targetLength < VAR_9) | (VAR_14.targetLength > VAR_8)) return FUNC_1(VAR_13); };
 if ((U32)(VAR_14.strategy) > (U32)VAR_12)
  return FUNC_1(VAR_13);
 return 0;
}
