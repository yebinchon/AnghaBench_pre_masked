
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pCsr; int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_6__ {TYPE_1__* pDb; struct TYPE_6__* pNext; } ;
typedef TYPE_2__ MultiCursor ;


 scalar_t__ FUNC_0 (int ,int,int*) ;

__attribute__((used)) static MultiCursor *FUNC_1(lsm_db *VAR_0, int *VAR_1){
  MultiCursor *VAR_2;
  VAR_2 = (MultiCursor *)FUNC_0(VAR_0->pEnv, sizeof(MultiCursor), VAR_1);
  if( VAR_2 ){
    VAR_2->pNext = VAR_0->pCsr;
    VAR_0->pCsr = VAR_2;
    VAR_2->pDb = VAR_0;
  }
  return VAR_2;
}
