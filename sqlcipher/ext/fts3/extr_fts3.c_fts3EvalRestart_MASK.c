
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* pRight; struct TYPE_11__* pLeft; scalar_t__ bStart; scalar_t__ bEof; scalar_t__ iDocid; TYPE_3__* pPhrase; } ;
struct TYPE_8__ {scalar_t__ iDocid; scalar_t__ pNextDocid; } ;
struct TYPE_10__ {int nToken; scalar_t__ pOrPoslist; TYPE_1__ doclist; TYPE_2__* aToken; scalar_t__ bIncr; } ;
struct TYPE_9__ {scalar_t__ pDeferred; scalar_t__ pSegcsr; } ;
typedef TYPE_2__ Fts3PhraseToken ;
typedef TYPE_3__ Fts3Phrase ;
typedef TYPE_4__ Fts3Expr ;
typedef int Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(
  Fts3Cursor *VAR_1,
  Fts3Expr *VAR_2,
  int *VAR_3
){
  if( VAR_2 && *VAR_3==VAR_0 ){
    Fts3Phrase *VAR_4 = VAR_2->pPhrase;

    if( VAR_4 ){
      FUNC_1(VAR_4);
      if( VAR_4->bIncr ){
        int VAR_5;
        for(VAR_5=0; VAR_5<VAR_4->nToken; VAR_5++){
          Fts3PhraseToken *VAR_6 = &VAR_4->aToken[VAR_5];
          FUNC_0( VAR_6->pDeferred==0 );
          if( VAR_6->pSegcsr ){
            FUNC_3(VAR_6->pSegcsr);
          }
        }
        *VAR_3 = FUNC_2(VAR_1, 0, VAR_4);
      }
      VAR_4->doclist.pNextDocid = 0;
      VAR_4->doclist.iDocid = 0;
      VAR_4->pOrPoslist = 0;
    }

    VAR_2->iDocid = 0;
    VAR_2->bEof = 0;
    VAR_2->bStart = 0;

    FUNC_4(VAR_1, VAR_2->pLeft, VAR_3);
    FUNC_4(VAR_1, VAR_2->pRight, VAR_3);
  }
}
