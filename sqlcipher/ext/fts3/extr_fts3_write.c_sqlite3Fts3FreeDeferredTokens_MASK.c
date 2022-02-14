
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pDeferred; } ;
struct TYPE_5__ {int pList; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ Fts3DeferredToken ;
typedef TYPE_2__ Fts3Cursor ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Fts3Cursor *VAR_0){
  Fts3DeferredToken *VAR_1;
  Fts3DeferredToken *VAR_2;
  for(VAR_1=VAR_0->pDeferred; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_0(VAR_1->pList);
    FUNC_1(VAR_1);
  }
  VAR_0->pDeferred = 0;
}
