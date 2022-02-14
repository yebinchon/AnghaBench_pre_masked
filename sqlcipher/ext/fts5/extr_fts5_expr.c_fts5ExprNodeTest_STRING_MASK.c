
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_19__ {int bDesc; } ;
struct TYPE_18__ {int nPhrase; TYPE_3__** apPhrase; } ;
struct TYPE_17__ {int bNomatch; int bEof; scalar_t__ iRowid; TYPE_5__* pNear; } ;
struct TYPE_16__ {int nTerm; TYPE_2__* aTerm; } ;
struct TYPE_15__ {TYPE_1__* pIter; scalar_t__ pSynonym; scalar_t__ bFirst; } ;
struct TYPE_14__ {scalar_t__ bEof; scalar_t__ iRowid; } ;
typedef TYPE_1__ Fts5IndexIter ;
typedef TYPE_2__ Fts5ExprTerm ;
typedef TYPE_3__ Fts5ExprPhrase ;
typedef TYPE_4__ Fts5ExprNode ;
typedef TYPE_5__ Fts5ExprNearset ;
typedef TYPE_6__ Fts5Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const,scalar_t__*,int*,int*) ;
 scalar_t__ FUNC_2 (int*,TYPE_6__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int const,scalar_t__*,int*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int const,int ) ;

__attribute__((used)) static int FUNC_5(
  Fts5Expr *VAR_1,
  Fts5ExprNode *VAR_2
){
  Fts5ExprNearset *VAR_3 = VAR_2->pNear;
  Fts5ExprPhrase *VAR_4 = VAR_3->apPhrase[0];
  int VAR_5 = VAR_0;
  i64 VAR_6;
  int VAR_7, VAR_8;
  int VAR_9;
  const int VAR_10 = VAR_1->bDesc;


  FUNC_0( VAR_3->nPhrase>1
       || VAR_3->apPhrase[0]->nTerm>1
       || VAR_3->apPhrase[0]->aTerm[0].pSynonym
       || VAR_3->apPhrase[0]->aTerm[0].bFirst
  );





  if( VAR_4->aTerm[0].pSynonym ){
    VAR_6 = FUNC_4(&VAR_4->aTerm[0], VAR_10, 0);
  }else{
    VAR_6 = VAR_4->aTerm[0].pIter->iRowid;
  }

  do {
    VAR_9 = 1;
    for(VAR_7=0; VAR_7<VAR_3->nPhrase; VAR_7++){
      Fts5ExprPhrase *VAR_11 = VAR_3->apPhrase[VAR_7];
      for(VAR_8=0; VAR_8<VAR_11->nTerm; VAR_8++){
        Fts5ExprTerm *VAR_12 = &VAR_11->aTerm[VAR_8];
        if( VAR_12->pSynonym ){
          i64 VAR_13 = FUNC_4(VAR_12, VAR_10, 0);
          if( VAR_13==VAR_6 ) continue;
          VAR_9 = 0;
          if( FUNC_3(VAR_12, VAR_10, &VAR_6, &VAR_5) ){
            VAR_2->bNomatch = 0;
            VAR_2->bEof = 1;
            return VAR_5;
          }
        }else{
          Fts5IndexIter *VAR_14 = VAR_11->aTerm[VAR_8].pIter;
          if( VAR_14->iRowid==VAR_6 || VAR_14->bEof ) continue;
          VAR_9 = 0;
          if( FUNC_1(VAR_14, VAR_10, &VAR_6, &VAR_5, &VAR_2->bEof) ){
            return VAR_5;
          }
        }
      }
    }
  }while( VAR_9==0 );

  VAR_2->iRowid = VAR_6;
  VAR_2->bNomatch = ((0==FUNC_2(&VAR_5, VAR_1, VAR_2)) && VAR_5==VAR_0);
  FUNC_0( VAR_2->bEof==0 || VAR_2->bNomatch==0 );

  return VAR_5;
}
