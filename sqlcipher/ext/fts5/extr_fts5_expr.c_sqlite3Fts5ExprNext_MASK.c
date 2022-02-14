
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_8__ {TYPE_1__* pRoot; } ;
struct TYPE_7__ {int bEof; scalar_t__ bNomatch; int iRowid; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef TYPE_2__ Fts5Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;

int FUNC_3(Fts5Expr *VAR_1, i64 VAR_2){
  int VAR_3;
  Fts5ExprNode *VAR_4 = VAR_1->pRoot;
  FUNC_0( VAR_4->bEof==0 && VAR_4->bNomatch==0 );
  do {
    VAR_3 = FUNC_1(VAR_1, VAR_4, 0, 0);
    FUNC_0( VAR_4->bNomatch==0 || (VAR_3==VAR_0 && VAR_4->bEof==0) );
  }while( VAR_4->bNomatch );
  if( FUNC_2(VAR_1, VAR_4->iRowid, VAR_2)>0 ){
    VAR_4->bEof = 1;
  }
  return VAR_3;
}
