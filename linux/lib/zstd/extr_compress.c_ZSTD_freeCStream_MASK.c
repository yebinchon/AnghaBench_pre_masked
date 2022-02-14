
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_4__ {struct TYPE_4__* outBuff; struct TYPE_4__* inBuff; int * cdictLocal; int * cctx; int customMem; } ;
typedef TYPE_1__ ZSTD_CStream ;


 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

size_t FUNC_3(ZSTD_CStream *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;
 {
  ZSTD_customMem const VAR_1 = VAR_0->customMem;
  FUNC_1(VAR_0->cctx);
  VAR_0->cctx = ((void*)0);
  FUNC_2(VAR_0->cdictLocal);
  VAR_0->cdictLocal = ((void*)0);
  FUNC_0(VAR_0->inBuff, VAR_1);
  VAR_0->inBuff = ((void*)0);
  FUNC_0(VAR_0->outBuff, VAR_1);
  VAR_0->outBuff = ((void*)0);
  FUNC_0(VAR_0, VAR_1);
  return 0;
 }
}
