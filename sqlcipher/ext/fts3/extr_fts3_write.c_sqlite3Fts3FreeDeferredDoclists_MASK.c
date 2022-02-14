
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pDeferred; } ;
struct TYPE_4__ {scalar_t__ pList; struct TYPE_4__* pNext; } ;
typedef TYPE_1__ Fts3DeferredToken ;
typedef TYPE_2__ Fts3Cursor ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(Fts3Cursor *VAR_0){
  Fts3DeferredToken *VAR_1;
  for(VAR_1=VAR_0->pDeferred; VAR_1; VAR_1=VAR_1->pNext){
    FUNC_0(VAR_1->pList);
    VAR_1->pList = 0;
  }
}
