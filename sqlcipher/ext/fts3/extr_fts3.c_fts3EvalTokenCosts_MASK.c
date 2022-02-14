
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ eType; struct TYPE_12__* pRight; struct TYPE_12__* pLeft; TYPE_3__* pPhrase; } ;
struct TYPE_11__ {int nToken; int iColumn; TYPE_1__* aToken; } ;
struct TYPE_10__ {int iToken; int nOvfl; TYPE_1__* pToken; int iCol; TYPE_4__* pRoot; TYPE_3__* pPhrase; } ;
struct TYPE_9__ {int pSegcsr; } ;
typedef TYPE_2__ Fts3TokenAndCost ;
typedef TYPE_3__ Fts3Phrase ;
typedef TYPE_4__ Fts3Expr ;
typedef int Fts3Cursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_2(
  Fts3Cursor *VAR_6,
  Fts3Expr *VAR_7,
  Fts3Expr *VAR_8,
  Fts3TokenAndCost **VAR_9,
  Fts3Expr ***VAR_10,
  int *VAR_11
){
  if( *VAR_11==VAR_5 ){
    if( VAR_8->eType==VAR_4 ){
      Fts3Phrase *VAR_12 = VAR_8->pPhrase;
      int VAR_13;
      for(VAR_13=0; *VAR_11==VAR_5 && VAR_13<VAR_12->nToken; VAR_13++){
        Fts3TokenAndCost *VAR_14 = (*VAR_9)++;
        VAR_14->pPhrase = VAR_12;
        VAR_14->iToken = VAR_13;
        VAR_14->pRoot = VAR_7;
        VAR_14->pToken = &VAR_12->aToken[VAR_13];
        VAR_14->iCol = VAR_12->iColumn;
        *VAR_11 = FUNC_1(VAR_6, VAR_14->pToken->pSegcsr, &VAR_14->nOvfl);
      }
    }else if( VAR_8->eType!=VAR_2 ){
      FUNC_0( VAR_8->eType==VAR_3
           || VAR_8->eType==VAR_0
           || VAR_8->eType==VAR_1
      );
      FUNC_0( VAR_8->pLeft && VAR_8->pRight );
      if( VAR_8->eType==VAR_3 ){
        VAR_7 = VAR_8->pLeft;
        **VAR_10 = VAR_7;
        (*VAR_10)++;
      }
      FUNC_2(VAR_6, VAR_7, VAR_8->pLeft, VAR_9, VAR_10, VAR_11);
      if( VAR_8->eType==VAR_3 ){
        VAR_7 = VAR_8->pRight;
        **VAR_10 = VAR_7;
        (*VAR_10)++;
      }
      FUNC_2(VAR_6, VAR_7, VAR_8->pRight, VAR_9, VAR_10, VAR_11);
    }
  }
}
