
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_4__ {struct TYPE_4__* dictBuffer; struct TYPE_4__* workspace; int customMem; } ;
typedef TYPE_1__ ZSTD_CDict ;


 int FUNC_0 (TYPE_1__*,int const) ;

size_t FUNC_1(ZSTD_CDict* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    { ZSTD_customMem const VAR_1 = VAR_0->customMem;
        FUNC_0(VAR_0->workspace, VAR_1);
        FUNC_0(VAR_0->dictBuffer, VAR_1);
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
}
