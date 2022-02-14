
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_5__ {scalar_t__ nOut; int flags; struct TYPE_5__* aOBuffer; struct TYPE_5__* aIBuffer; struct TYPE_5__* apHash; struct TYPE_5__* pLsmFile; scalar_t__ fdLog; int * pEnv; scalar_t__ fdDb; struct TYPE_5__* aData; struct TYPE_5__* pFreeNext; struct TYPE_5__* pFree; struct TYPE_5__* pLruNext; struct TYPE_5__* pLruFirst; } ;
typedef TYPE_1__ Page ;
typedef TYPE_1__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void FUNC_3(FileSystem *VAR_1){
  if( VAR_1 ){
    Page *VAR_2;
    lsm_env *VAR_3 = VAR_1->pEnv;

    FUNC_0( VAR_1->nOut==0 );
    VAR_2 = VAR_1->pLruFirst;
    while( VAR_2 ){
      Page *VAR_4 = VAR_2->pLruNext;
      if( VAR_2->flags & VAR_0 ) FUNC_2(VAR_3, VAR_2->aData);
      FUNC_2(VAR_3, VAR_2);
      VAR_2 = VAR_4;
    }

    VAR_2 = VAR_1->pFree;
    while( VAR_2 ){
      Page *VAR_5 = VAR_2->pFreeNext;
      if( VAR_2->flags & VAR_0 ) FUNC_2(VAR_3, VAR_2->aData);
      FUNC_2(VAR_3, VAR_2);
      VAR_2 = VAR_5;
    }

    if( VAR_1->fdDb ) FUNC_1(VAR_1->pEnv, VAR_1->fdDb );
    if( VAR_1->fdLog ) FUNC_1(VAR_1->pEnv, VAR_1->fdLog );
    FUNC_2(VAR_3, VAR_1->pLsmFile);
    FUNC_2(VAR_3, VAR_1->apHash);
    FUNC_2(VAR_3, VAR_1->aIBuffer);
    FUNC_2(VAR_3, VAR_1->aOBuffer);
    FUNC_2(VAR_3, VAR_1);
  }
}
