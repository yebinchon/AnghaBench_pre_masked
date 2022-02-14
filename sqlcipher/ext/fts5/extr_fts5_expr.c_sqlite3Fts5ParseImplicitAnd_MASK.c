
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ eType; int nChild; TYPE_1__* pNear; struct TYPE_15__** apChild; } ;
struct TYPE_14__ {scalar_t__* apPhrase; int nPhrase; scalar_t__ rc; } ;
struct TYPE_13__ {scalar_t__* apPhrase; int nPhrase; } ;
typedef TYPE_2__ Fts5Parse ;
typedef int Fts5ExprPhrase ;
typedef TYPE_3__ Fts5ExprNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **,int **,int) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,scalar_t__,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;

Fts5ExprNode *FUNC_4(
  Fts5Parse *VAR_4,
  Fts5ExprNode *VAR_5,
  Fts5ExprNode *VAR_6
){
  Fts5ExprNode *VAR_7 = 0;
  Fts5ExprNode *VAR_8;

  if( VAR_4->rc ){
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
  }else{

    FUNC_0( VAR_5->eType==VAR_2
        || VAR_5->eType==VAR_3
        || VAR_5->eType==VAR_1
        || VAR_5->eType==VAR_0
    );
    FUNC_0( VAR_6->eType==VAR_2
        || VAR_6->eType==VAR_3
        || VAR_6->eType==VAR_1
    );

    if( VAR_5->eType==VAR_0 ){
      VAR_8 = VAR_5->apChild[VAR_5->nChild-1];
    }else{
      VAR_8 = VAR_5;
    }
    FUNC_0( VAR_8->eType==VAR_2
        || VAR_8->eType==VAR_3
        || VAR_8->eType==VAR_1
        );

    if( VAR_6->eType==VAR_1 ){
      FUNC_0( VAR_4->apPhrase[VAR_4->nPhrase-1]==VAR_6->pNear->apPhrase[0] );
      FUNC_3(VAR_6);
      VAR_7 = VAR_5;
      VAR_4->nPhrase--;
    }
    else if( VAR_8->eType==VAR_1 ){
      Fts5ExprPhrase **VAR_9;

      if( VAR_8==VAR_5 ){
        VAR_7 = VAR_6;
      }else{
        VAR_5->apChild[VAR_5->nChild-1] = VAR_6;
        VAR_7 = VAR_5;
      }

      VAR_9 = &VAR_4->apPhrase[VAR_4->nPhrase-1-VAR_6->pNear->nPhrase];
      FUNC_0( VAR_9[0]==VAR_8->pNear->apPhrase[0] );
      FUNC_1(VAR_9, &VAR_9[1], sizeof(Fts5ExprPhrase*)*VAR_6->pNear->nPhrase);
      VAR_4->nPhrase--;

      FUNC_3(VAR_8);
    }
    else{
      VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_5, VAR_6, 0);
    }
  }

  return VAR_7;
}
