
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ bDesc; int pIndex; } ;
struct TYPE_11__ {int nPhrase; int pColset; TYPE_2__** apPhrase; } ;
struct TYPE_10__ {scalar_t__ bNomatch; int bEof; TYPE_4__* pNear; } ;
struct TYPE_9__ {scalar_t__ nTerm; TYPE_1__* aTerm; } ;
struct TYPE_8__ {scalar_t__ pIter; scalar_t__ bPrefix; int zTerm; struct TYPE_8__* pSynonym; } ;
typedef TYPE_1__ Fts5ExprTerm ;
typedef TYPE_2__ Fts5ExprPhrase ;
typedef TYPE_3__ Fts5ExprNode ;
typedef TYPE_4__ Fts5ExprNearset ;
typedef TYPE_5__ Fts5Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
  Fts5Expr *VAR_3,
  Fts5ExprNode *VAR_4
){
  Fts5ExprNearset *VAR_5 = VAR_4->pNear;
  int VAR_6;

  FUNC_0( VAR_4->bNomatch==0 );
  for(VAR_6=0; VAR_6<VAR_5->nPhrase; VAR_6++){
    Fts5ExprPhrase *VAR_7 = VAR_5->apPhrase[VAR_6];
    if( VAR_7->nTerm==0 ){
      VAR_4->bEof = 1;
      return VAR_2;
    }else{
      int VAR_8;
      for(VAR_8=0; VAR_8<VAR_7->nTerm; VAR_8++){
        Fts5ExprTerm *VAR_9 = &VAR_7->aTerm[VAR_8];
        Fts5ExprTerm *VAR_10;
        int VAR_11 = 0;

        for(VAR_10=VAR_9; VAR_10; VAR_10=VAR_10->pSynonym){
          int VAR_12;
          if( VAR_10->pIter ){
            FUNC_2(VAR_10->pIter);
            VAR_10->pIter = 0;
          }
          VAR_12 = FUNC_1(
              VAR_3->pIndex, VAR_10->zTerm, (int)FUNC_4(VAR_10->zTerm),
              (VAR_9->bPrefix ? VAR_1 : 0) |
              (VAR_3->bDesc ? VAR_0 : 0),
              VAR_5->pColset,
              &VAR_10->pIter
          );
          FUNC_0( (VAR_12==VAR_2)==(VAR_10->pIter!=0) );
          if( VAR_12!=VAR_2 ) return VAR_12;
          if( 0==FUNC_3(VAR_10->pIter) ){
            VAR_11 = 1;
          }
        }

        if( VAR_11==0 ){
          VAR_4->bEof = 1;
          return VAR_2;
        }
      }
    }
  }

  VAR_4->bEof = 0;
  return VAR_2;
}
