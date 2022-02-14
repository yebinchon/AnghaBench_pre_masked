
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_21__ {int bDesc; } ;
struct TYPE_20__ {int bEof; scalar_t__ bNomatch; TYPE_2__* pNear; } ;
struct TYPE_19__ {TYPE_3__* pIter; struct TYPE_19__* pSynonym; } ;
struct TYPE_18__ {scalar_t__ iRowid; } ;
struct TYPE_17__ {TYPE_1__** apPhrase; } ;
struct TYPE_16__ {TYPE_4__* aTerm; } ;
typedef TYPE_3__ Fts5IndexIter ;
typedef TYPE_4__ Fts5ExprTerm ;
typedef TYPE_5__ Fts5ExprNode ;
typedef TYPE_6__ Fts5Expr ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(
  Fts5Expr *VAR_1,
  Fts5ExprNode *VAR_2,
  int VAR_3,
  i64 VAR_4
){
  Fts5ExprTerm *VAR_5 = &VAR_2->pNear->apPhrase[0]->aTerm[0];
  int VAR_6 = VAR_0;

  VAR_2->bNomatch = 0;
  if( VAR_5->pSynonym ){
    int VAR_7 = 1;
    Fts5ExprTerm *VAR_8;


    i64 VAR_9 = FUNC_3(VAR_5, VAR_1->bDesc, 0);



    for(VAR_8=VAR_5; VAR_8; VAR_8=VAR_8->pSynonym){
      if( FUNC_4(VAR_8->pIter)==0 ){
        i64 VAR_10 = VAR_8->pIter->iRowid;
        if( VAR_10==VAR_9
         || (VAR_3 && VAR_10!=VAR_4 && (VAR_10>VAR_4)==VAR_1->bDesc)
        ){
          if( VAR_3 ){
            VAR_6 = FUNC_6(VAR_8->pIter, VAR_4);
          }else{
            VAR_6 = FUNC_5(VAR_8->pIter);
          }
          if( VAR_6!=VAR_0 ) break;
          if( FUNC_4(VAR_8->pIter)==0 ){
            VAR_7 = 0;
          }
        }else{
          VAR_7 = 0;
        }
      }
    }



    VAR_2->bEof = (VAR_6 || VAR_7);
  }else{
    Fts5IndexIter *VAR_11 = VAR_5->pIter;

    FUNC_1( FUNC_0(VAR_2) );
    if( VAR_3 ){
      VAR_6 = FUNC_6(VAR_11, VAR_4);
    }else{
      VAR_6 = FUNC_5(VAR_11);
    }

    VAR_2->bEof = (VAR_6 || FUNC_4(VAR_11));
  }

  if( VAR_2->bEof==0 ){
    FUNC_1( VAR_6==VAR_0 );
    VAR_6 = FUNC_2(VAR_1, VAR_2);
  }

  return VAR_6;
}
