
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
struct TYPE_18__ {TYPE_3__* pConfig; } ;
struct TYPE_17__ {scalar_t__ eType; int bNomatch; int iRowid; TYPE_1__* pNear; } ;
struct TYPE_14__ {scalar_t__ n; int * p; } ;
struct TYPE_16__ {int nTerm; TYPE_4__ poslist; TYPE_2__* aTerm; } ;
struct TYPE_15__ {scalar_t__ nData; int iRowid; scalar_t__ pData; } ;
struct TYPE_13__ {scalar_t__ eDetail; } ;
struct TYPE_12__ {scalar_t__ pSynonym; TYPE_5__* pIter; } ;
struct TYPE_11__ {int nPhrase; TYPE_6__** apPhrase; } ;
typedef TYPE_5__ Fts5IndexIter ;
typedef TYPE_6__ Fts5ExprPhrase ;
typedef TYPE_7__ Fts5ExprNode ;
typedef TYPE_8__ Fts5Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
  Fts5Expr *VAR_3,
  Fts5ExprNode *VAR_4
){





  Fts5ExprPhrase *VAR_5 = VAR_4->pNear->apPhrase[0];
  Fts5IndexIter *VAR_6 = VAR_5->aTerm[0].pIter;

  FUNC_0( VAR_4->eType==VAR_1 );
  FUNC_0( VAR_4->pNear->nPhrase==1 && VAR_5->nTerm==1 );
  FUNC_0( VAR_5->aTerm[0].pSynonym==0 );

  VAR_5->poslist.n = VAR_6->nData;
  if( VAR_3->pConfig->eDetail==VAR_0 ){
    VAR_5->poslist.p = (u8*)VAR_6->pData;
  }
  VAR_4->iRowid = VAR_6->iRowid;
  VAR_4->bNomatch = (VAR_5->poslist.n==0);
  return VAR_2;
}
