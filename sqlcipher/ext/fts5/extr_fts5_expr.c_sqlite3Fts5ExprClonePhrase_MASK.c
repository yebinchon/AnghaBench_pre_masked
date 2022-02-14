
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_15__ {TYPE_3__* pPhrase; int member_1; int member_0; } ;
typedef TYPE_1__ TokenCtx ;
struct TYPE_21__ {int nCol; } ;
struct TYPE_20__ {int nPhrase; TYPE_4__* pRoot; TYPE_3__** apExprPhrase; int pConfig; int pIndex; } ;
struct TYPE_19__ {int nPhrase; TYPE_3__** apPhrase; TYPE_7__* pColset; } ;
struct TYPE_18__ {int xNext; int eType; TYPE_5__* pNear; } ;
struct TYPE_17__ {int nTerm; TYPE_2__* aTerm; TYPE_4__* pNode; } ;
struct TYPE_16__ {char* zTerm; scalar_t__ bFirst; scalar_t__ pSynonym; int bPrefix; } ;
typedef TYPE_2__ Fts5ExprTerm ;
typedef TYPE_3__ Fts5ExprPhrase ;
typedef TYPE_4__ Fts5ExprNode ;
typedef TYPE_5__ Fts5ExprNearset ;
typedef TYPE_6__ Fts5Expr ;
typedef TYPE_7__ Fts5Colset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (void*,int,char const*,int,int ,int ) ;
 int FUNC_2 (TYPE_7__*,TYPE_7__*,size_t) ;
 int FUNC_3 (TYPE_6__*) ;
 TYPE_3__* FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (char const*) ;

int FUNC_6(
  Fts5Expr *VAR_6,
  int VAR_7,
  Fts5Expr **VAR_8
){
  int VAR_9 = VAR_3;
  Fts5ExprPhrase *VAR_10;
  Fts5Expr *VAR_11 = 0;
  TokenCtx VAR_12 = {0,0};

  VAR_10 = VAR_6->apExprPhrase[VAR_7];
  VAR_11 = (Fts5Expr*)FUNC_4(&VAR_9, sizeof(Fts5Expr));
  if( VAR_9==VAR_3 ){
    VAR_11->apExprPhrase = (Fts5ExprPhrase**)FUNC_4(&VAR_9,
        sizeof(Fts5ExprPhrase*));
  }
  if( VAR_9==VAR_3 ){
    VAR_11->pRoot = (Fts5ExprNode*)FUNC_4(&VAR_9,
        sizeof(Fts5ExprNode));
  }
  if( VAR_9==VAR_3 ){
    VAR_11->pRoot->pNear = (Fts5ExprNearset*)FUNC_4(&VAR_9,
        sizeof(Fts5ExprNearset) + sizeof(Fts5ExprPhrase*));
  }
  if( VAR_9==VAR_3 ){
    Fts5Colset *VAR_13 = VAR_10->pNode->pNear->pColset;
    if( VAR_13 ){
      sqlite3_int64 VAR_14;
      Fts5Colset *VAR_15;
      VAR_14 = sizeof(Fts5Colset) + (VAR_13->nCol-1) * sizeof(int);
      VAR_15 = (Fts5Colset*)FUNC_4(&VAR_9, VAR_14);
      if( VAR_15 ){
        FUNC_2(VAR_15, VAR_13, (size_t)VAR_14);
      }
      VAR_11->pRoot->pNear->pColset = VAR_15;
    }
  }

  if( VAR_10->nTerm ){
    int VAR_16;
    for(VAR_16=0; VAR_9==VAR_3 && VAR_16<VAR_10->nTerm; VAR_16++){
      int VAR_17 = 0;
      Fts5ExprTerm *VAR_18;
      for(VAR_18=&VAR_10->aTerm[VAR_16]; VAR_18 && VAR_9==VAR_3; VAR_18=VAR_18->pSynonym){
        const char *VAR_19 = VAR_18->zTerm;
        VAR_9 = FUNC_1((void*)&VAR_12, VAR_17, VAR_19, (int)FUNC_5(VAR_19),
            0, 0);
        VAR_17 = VAR_2;
      }
      if( VAR_9==VAR_3 ){
        VAR_12.pPhrase->aTerm[VAR_16].bPrefix = VAR_10->aTerm[VAR_16].bPrefix;
        VAR_12.pPhrase->aTerm[VAR_16].bFirst = VAR_10->aTerm[VAR_16].bFirst;
      }
    }
  }else{


    VAR_12.pPhrase = FUNC_4(&VAR_9, sizeof(Fts5ExprPhrase));
  }

  if( VAR_9==VAR_3 ){

    VAR_11->pIndex = VAR_6->pIndex;
    VAR_11->pConfig = VAR_6->pConfig;
    VAR_11->nPhrase = 1;
    VAR_11->apExprPhrase[0] = VAR_12.pPhrase;
    VAR_11->pRoot->pNear->apPhrase[0] = VAR_12.pPhrase;
    VAR_11->pRoot->pNear->nPhrase = 1;
    VAR_12.pPhrase->pNode = VAR_11->pRoot;

    if( VAR_10->nTerm==1
     && VAR_10->aTerm[0].pSynonym==0
     && VAR_10->aTerm[0].bFirst==0
    ){
      VAR_11->pRoot->eType = VAR_1;
      VAR_11->pRoot->xNext = VAR_5;
    }else{
      VAR_11->pRoot->eType = VAR_0;
      VAR_11->pRoot->xNext = VAR_4;
    }
  }else{
    FUNC_3(VAR_11);
    FUNC_0(VAR_12.pPhrase);
    VAR_11 = 0;
  }

  *VAR_8 = VAR_11;
  return VAR_9;
}
