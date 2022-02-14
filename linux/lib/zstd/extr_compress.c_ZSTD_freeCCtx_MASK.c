
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int customMem; struct TYPE_4__* workSpace; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (TYPE_1__*,int ) ;

size_t FUNC_1(ZSTD_CCtx *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;
 FUNC_0(VAR_0->workSpace, VAR_0->customMem);
 FUNC_0(VAR_0, VAR_0->customMem);
 return 0;
}
