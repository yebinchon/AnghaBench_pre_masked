
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pUserData; int (* xDestroy ) (int ) ;struct TYPE_5__* pNext; struct TYPE_5__* pTok; struct TYPE_5__* pAux; } ;
typedef TYPE_1__ Fts5TokenizerModule ;
typedef TYPE_1__ Fts5Global ;
typedef TYPE_1__ Fts5Auxiliary ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0){
  Fts5TokenizerModule *VAR_1, *VAR_2;
  Fts5Auxiliary *VAR_3, *VAR_4;
  Fts5Global *VAR_5 = (Fts5Global*)VAR_0;

  for(VAR_3=VAR_5->pAux; VAR_3; VAR_3=VAR_4){
    VAR_4 = VAR_3->pNext;
    if( VAR_3->xDestroy ) VAR_3->xDestroy(VAR_3->pUserData);
    FUNC_0(VAR_3);
  }

  for(VAR_1=VAR_5->pTok; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    if( VAR_1->xDestroy ) VAR_1->xDestroy(VAR_1->pUserData);
    FUNC_0(VAR_1);
  }

  FUNC_0(VAR_5);
}
