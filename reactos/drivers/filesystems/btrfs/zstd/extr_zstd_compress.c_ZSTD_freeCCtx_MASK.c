
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int customMem; scalar_t__ staticSize; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

size_t FUNC_3(ZSTD_CCtx* VAR_1)
{
    if (VAR_1==((void*)0)) return 0;
    if (VAR_1->staticSize) return FUNC_0(VAR_0);
    FUNC_2(VAR_1);
    FUNC_1(VAR_1, VAR_1->customMem);
    return 0;
}
