
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_5__ {struct TYPE_5__* dictBuffer; TYPE_3__* refContext; } ;
typedef TYPE_1__ ZSTD_CDict ;
struct TYPE_6__ {int customMem; } ;


 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (TYPE_3__*) ;

size_t FUNC_2(ZSTD_CDict *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;
 {
  ZSTD_customMem const VAR_1 = VAR_0->refContext->customMem;
  FUNC_1(VAR_0->refContext);
  FUNC_0(VAR_0->dictBuffer, VAR_1);
  FUNC_0(VAR_0, VAR_1);
  return 0;
 }
}
