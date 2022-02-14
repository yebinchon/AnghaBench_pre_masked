
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int windowLog; } ;
typedef TYPE_2__ ZSTD_compressionParameters ;
struct TYPE_6__ {TYPE_2__ cParams; } ;
struct TYPE_8__ {TYPE_1__ appliedParams; } ;
typedef TYPE_3__ ZSTD_CCtx ;
typedef int U32 ;


 size_t FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__ const) ;
 int FUNC_2 (int) ;

size_t FUNC_3(const ZSTD_CCtx* VAR_1)
{
    ZSTD_compressionParameters const VAR_2 = VAR_1->appliedParams.cParams;
    FUNC_2(!FUNC_1(VAR_2));
    return FUNC_0 (VAR_0, (U32)1 << VAR_2.windowLog);
}
