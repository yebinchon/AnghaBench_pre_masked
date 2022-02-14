
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pFS; struct TYPE_6__* aData; } ;
struct TYPE_5__ {int pEnv; int nCacheAlloc; } ;
typedef TYPE_2__ Page ;


 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(Page *VAR_0){
  VAR_0->pFS->nCacheAlloc--;
  FUNC_0(VAR_0->pFS->pEnv, VAR_0->aData);
  FUNC_0(VAR_0->pFS->pEnv, VAR_0);
}
