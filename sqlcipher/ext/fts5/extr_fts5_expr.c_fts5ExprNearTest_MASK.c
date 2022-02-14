
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_22__ {TYPE_1__* pConfig; } ;
struct TYPE_21__ {int nPhrase; scalar_t__ pColset; TYPE_4__** apPhrase; } ;
struct TYPE_20__ {scalar_t__ iRowid; TYPE_6__* pNear; } ;
struct TYPE_15__ {int n; } ;
struct TYPE_19__ {int nTerm; TYPE_14__ poslist; TYPE_3__* aTerm; } ;
struct TYPE_18__ {TYPE_2__* pIter; scalar_t__ bFirst; struct TYPE_18__* pSynonym; } ;
struct TYPE_17__ {scalar_t__ iRowid; scalar_t__ nData; int pData; } ;
struct TYPE_16__ {scalar_t__ eDetail; } ;
typedef TYPE_2__ Fts5IndexIter ;
typedef TYPE_3__ Fts5ExprTerm ;
typedef TYPE_4__ Fts5ExprPhrase ;
typedef TYPE_5__ Fts5ExprNode ;
typedef TYPE_6__ Fts5ExprNearset ;
typedef TYPE_7__ Fts5Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,TYPE_14__*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int*,TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(
  int *VAR_2,
  Fts5Expr *VAR_3,
  Fts5ExprNode *VAR_4
){
  Fts5ExprNearset *VAR_5 = VAR_4->pNear;
  int VAR_6 = *VAR_2;

  if( VAR_3->pConfig->eDetail!=VAR_0 ){
    Fts5ExprTerm *VAR_7;
    Fts5ExprPhrase *VAR_8 = VAR_5->apPhrase[0];
    VAR_8->poslist.n = 0;
    for(VAR_7=&VAR_8->aTerm[0]; VAR_7; VAR_7=VAR_7->pSynonym){
      Fts5IndexIter *VAR_9 = VAR_7->pIter;
      if( FUNC_3(VAR_9)==0 ){
        if( VAR_9->iRowid==VAR_4->iRowid && VAR_9->nData>0 ){
          VAR_8->poslist.n = 1;
        }
      }
    }
    return VAR_8->poslist.n;
  }else{
    int VAR_10;




    for(VAR_10=0; VAR_6==VAR_1 && VAR_10<VAR_5->nPhrase; VAR_10++){
      Fts5ExprPhrase *VAR_11 = VAR_5->apPhrase[VAR_10];
      if( VAR_11->nTerm>1 || VAR_11->aTerm[0].pSynonym
       || VAR_5->pColset || VAR_11->aTerm[0].bFirst
      ){
        int VAR_12 = 0;
        VAR_6 = FUNC_2(VAR_4, VAR_11, &VAR_12);
        if( VAR_12==0 ) break;
      }else{
        Fts5IndexIter *VAR_13 = VAR_11->aTerm[0].pIter;
        FUNC_0(&VAR_6, &VAR_11->poslist, VAR_13->nData, VAR_13->pData);
      }
    }

    *VAR_2 = VAR_6;
    if( VAR_10==VAR_5->nPhrase && (VAR_10==1 || FUNC_1(VAR_2, VAR_5)) ){
      return 1;
    }
    return 0;
  }
}
