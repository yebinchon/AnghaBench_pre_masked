
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int customMem ;
struct TYPE_8__ {int customFree; int customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
struct TYPE_9__ {int customMem; } ;
typedef TYPE_2__ ZSTD_DCtx ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,TYPE_1__) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;

ZSTD_DCtx *FUNC_3(ZSTD_customMem VAR_0)
{
 ZSTD_DCtx *VAR_1;

 if (!VAR_0.customAlloc || !VAR_0.customFree)
  return ((void*)0);

 VAR_1 = (ZSTD_DCtx *)FUNC_1(sizeof(ZSTD_DCtx), VAR_0);
 if (!VAR_1)
  return ((void*)0);
 FUNC_2(&VAR_1->customMem, &VAR_0, sizeof(VAR_0));
 FUNC_0(VAR_1);
 return VAR_1;
}
