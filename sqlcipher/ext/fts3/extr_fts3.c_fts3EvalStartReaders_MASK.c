
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nToken; TYPE_1__* aToken; } ;
struct TYPE_6__ {scalar_t__ eType; int bDeferred; struct TYPE_6__* pRight; struct TYPE_6__* pLeft; TYPE_4__* pPhrase; } ;
struct TYPE_5__ {scalar_t__ pDeferred; } ;
typedef TYPE_2__ Fts3Expr ;
typedef int Fts3Cursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(
  Fts3Cursor *VAR_2,
  Fts3Expr *VAR_3,
  int *VAR_4
){
  if( VAR_3 && VAR_1==*VAR_4 ){
    if( VAR_3->eType==VAR_0 ){
      int VAR_5 = VAR_3->pPhrase->nToken;
      if( VAR_5 ){
        int VAR_6;
        for(VAR_6=0; VAR_6<VAR_5; VAR_6++){
          if( VAR_3->pPhrase->aToken[VAR_6].pDeferred==0 ) break;
        }
        VAR_3->bDeferred = (VAR_6==VAR_5);
      }
      *VAR_4 = FUNC_0(VAR_2, 1, VAR_3->pPhrase);
    }else{
      FUNC_1(VAR_2, VAR_3->pLeft, VAR_4);
      FUNC_1(VAR_2, VAR_3->pRight, VAR_4);
      VAR_3->bDeferred = (VAR_3->pLeft->bDeferred && VAR_3->pRight->bDeferred);
    }
  }
}
