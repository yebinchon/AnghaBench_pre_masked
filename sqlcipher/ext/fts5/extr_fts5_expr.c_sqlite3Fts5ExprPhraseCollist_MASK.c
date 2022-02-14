
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_18__ {int nPhrase; TYPE_2__* pRoot; TYPE_1__* pConfig; TYPE_6__** apExprPhrase; } ;
struct TYPE_17__ {scalar_t__ bEof; scalar_t__ iRowid; } ;
struct TYPE_13__ {scalar_t__ n; } ;
struct TYPE_16__ {TYPE_5__* aTerm; TYPE_3__ poslist; TYPE_7__* pNode; } ;
struct TYPE_15__ {TYPE_4__* pIter; int * pSynonym; } ;
struct TYPE_14__ {int nData; int * pData; } ;
struct TYPE_12__ {scalar_t__ iRowid; } ;
struct TYPE_11__ {scalar_t__ eDetail; } ;
typedef TYPE_5__ Fts5ExprTerm ;
typedef TYPE_6__ Fts5ExprPhrase ;
typedef TYPE_7__ Fts5ExprNode ;
typedef TYPE_8__ Fts5Expr ;
typedef int Fts5Buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,scalar_t__,int *,int **,int*) ;

int FUNC_2(
  Fts5Expr *VAR_2,
  int VAR_3,
  const u8 **VAR_4,
  int *VAR_5
){
  Fts5ExprPhrase *VAR_6 = VAR_2->apExprPhrase[VAR_3];
  Fts5ExprNode *VAR_7 = VAR_6->pNode;
  int VAR_8 = VAR_1;

  FUNC_0( VAR_3>=0 && VAR_3<VAR_2->nPhrase );
  FUNC_0( VAR_2->pConfig->eDetail==VAR_0 );

  if( VAR_7->bEof==0
   && VAR_7->iRowid==VAR_2->pRoot->iRowid
   && VAR_6->poslist.n>0
  ){
    Fts5ExprTerm *VAR_9 = &VAR_6->aTerm[0];
    if( VAR_9->pSynonym ){
      Fts5Buffer *VAR_10 = (Fts5Buffer*)&VAR_9->pSynonym[1];
      VAR_8 = FUNC_1(
          VAR_9, VAR_7->iRowid, VAR_10, (u8**)VAR_4, VAR_5
      );
    }else{
      *VAR_4 = VAR_6->aTerm[0].pIter->pData;
      *VAR_5 = VAR_6->aTerm[0].pIter->nData;
    }
  }else{
    *VAR_4 = 0;
    *VAR_5 = 0;
  }

  return VAR_8;
}
