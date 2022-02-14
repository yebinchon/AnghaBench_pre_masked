
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pCsr; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_5__ {int * apTreeCsr; struct TYPE_5__* pNext; } ;
typedef TYPE_2__ MultiCursor ;


 int FUNC_0 (int ) ;

void FUNC_1(lsm_db *VAR_0){
  MultiCursor *VAR_1;
  for(VAR_1=VAR_0->pCsr; VAR_1; VAR_1=VAR_1->pNext){
    FUNC_0(VAR_1->apTreeCsr[0]);
    FUNC_0(VAR_1->apTreeCsr[1]);
  }
}
