
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_10__ {int bEof; scalar_t__ bNomatch; TYPE_3__* pNear; } ;
struct TYPE_9__ {TYPE_2__** apPhrase; } ;
struct TYPE_8__ {TYPE_1__* aTerm; } ;
struct TYPE_7__ {int * pIter; } ;
typedef int Fts5IndexIter ;
typedef TYPE_4__ Fts5ExprNode ;
typedef int Fts5Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(
  Fts5Expr *VAR_1,
  Fts5ExprNode *VAR_2,
  int VAR_3,
  i64 VAR_4
){
  int VAR_5;
  Fts5IndexIter *VAR_6 = VAR_2->pNear->apPhrase[0]->aTerm[0].pIter;

  FUNC_0( VAR_2->bEof==0 );
  if( VAR_3 ){
    VAR_5 = FUNC_4(VAR_6, VAR_4);
  }else{
    VAR_5 = FUNC_3(VAR_6);
  }
  if( VAR_5==VAR_0 && FUNC_2(VAR_6)==0 ){
    VAR_5 = FUNC_1(VAR_1, VAR_2);
  }else{
    VAR_2->bEof = 1;
    VAR_2->bNomatch = 0;
  }
  return VAR_5;
}
