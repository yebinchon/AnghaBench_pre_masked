
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int customFree; int customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
struct TYPE_8__ {TYPE_1__ customMem; } ;
typedef TYPE_2__ ZSTD_DCtx ;


 int FUNC_0 (TYPE_2__* const) ;
 scalar_t__ FUNC_1 (int,TYPE_1__) ;

ZSTD_DCtx* FUNC_2(ZSTD_customMem VAR_0)
{
    if (!VAR_0.customAlloc ^ !VAR_0.customFree) return ((void*)0);

    { ZSTD_DCtx* const VAR_1 = (ZSTD_DCtx*)FUNC_1(sizeof(*VAR_1), VAR_0);
        if (!VAR_1) return ((void*)0);
        VAR_1->customMem = VAR_0;
        FUNC_0(VAR_1);
        return VAR_1;
    }
}
