
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t windowLog; } ;
struct TYPE_6__ {scalar_t__ nbWorkers; TYPE_1__ cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int ,size_t) ;
 int VAR_1 ;
 int FUNC_2 (size_t const) ;
 size_t FUNC_3 (TYPE_2__ const*) ;

size_t FUNC_4(const ZSTD_CCtx_params* VAR_2)
{
    if (VAR_2->nbWorkers > 0) { return FUNC_0(VAR_0); }
    { size_t const VAR_3 = FUNC_3(VAR_2);
        size_t const VAR_4 = FUNC_1(VAR_1, (size_t)1 << VAR_2->cParams.windowLog);
        size_t const VAR_5 = ((size_t)1 << VAR_2->cParams.windowLog) + VAR_4;
        size_t const VAR_6 = FUNC_2(VAR_4) + 1;
        size_t const VAR_7 = VAR_5 + VAR_6;

        return VAR_3 + VAR_7;
    }
}
