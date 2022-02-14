
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int customFree; int customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
struct TYPE_11__ {int maxWindowSize; int stage; int * dctx; int customMem; } ;
typedef TYPE_2__ ZSTD_DStream ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,TYPE_1__) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static ZSTD_DStream *FUNC_5(ZSTD_customMem VAR_2)
{
 ZSTD_DStream *VAR_3;

 if (!VAR_2.customAlloc || !VAR_2.customFree)
  return ((void*)0);

 VAR_3 = (ZSTD_DStream *)FUNC_2(sizeof(ZSTD_DStream), VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_3, 0, sizeof(ZSTD_DStream));
 FUNC_3(&VAR_3->customMem, &VAR_2, sizeof(ZSTD_customMem));
 VAR_3->dctx = FUNC_0(VAR_2);
 if (VAR_3->dctx == ((void*)0)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 VAR_3->stage = VAR_1;
 VAR_3->maxWindowSize = VAR_0;
 return VAR_3;
}
