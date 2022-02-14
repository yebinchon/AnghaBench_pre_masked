
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eType; struct TYPE_7__* pRight; struct TYPE_7__* pLeft; TYPE_1__* pPhrase; } ;
struct TYPE_6__ {int pSegcsr; int isPrefix; int n; int z; } ;
struct TYPE_5__ {int nToken; int iDoclistToken; TYPE_2__* aToken; } ;
typedef TYPE_2__ Fts3PhraseToken ;
typedef TYPE_3__ Fts3Expr ;
typedef int Fts3Cursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(
  Fts3Cursor *VAR_3,
  Fts3Expr *VAR_4,
  int *VAR_5,
  int *VAR_6,
  int *VAR_7
){
  if( VAR_4 && VAR_2==*VAR_7 ){
    if( VAR_4->eType==VAR_1 ){
      int VAR_8;
      int VAR_9 = VAR_4->pPhrase->nToken;
      *VAR_5 += VAR_9;
      for(VAR_8=0; VAR_8<VAR_9; VAR_8++){
        Fts3PhraseToken *VAR_10 = &VAR_4->pPhrase->aToken[VAR_8];
        int VAR_11 = FUNC_1(VAR_3,
            VAR_10->z, VAR_10->n, VAR_10->isPrefix, &VAR_10->pSegcsr
        );
        if( VAR_11!=VAR_2 ){
          *VAR_7 = VAR_11;
          return;
        }
      }
      FUNC_0( VAR_4->pPhrase->iDoclistToken==0 );
      VAR_4->pPhrase->iDoclistToken = -1;
    }else{
      *VAR_6 += (VAR_4->eType==VAR_0);
      FUNC_2(VAR_3, VAR_4->pLeft, VAR_5, VAR_6, VAR_7);
      FUNC_2(VAR_3, VAR_4->pRight, VAR_5, VAR_6, VAR_7);
    }
  }
}
