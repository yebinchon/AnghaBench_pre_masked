
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pCsrCache; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_6__ {struct TYPE_6__* pNext; } ;
typedef TYPE_2__ MultiCursor ;


 int FUNC_0 (TYPE_2__*,int ) ;

void FUNC_1(lsm_db *VAR_0){
  MultiCursor *VAR_1;
  MultiCursor *VAR_2;
  for(VAR_1=VAR_0->pCsrCache; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_0(VAR_1, 0);
  }
  VAR_0->pCsrCache = 0;
}
