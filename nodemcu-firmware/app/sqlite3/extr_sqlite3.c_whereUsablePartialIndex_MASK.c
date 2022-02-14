
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* pExpr; } ;
typedef TYPE_1__ WhereTerm ;
struct TYPE_10__ {int nTerm; TYPE_1__* a; } ;
typedef TYPE_2__ WhereClause ;
struct TYPE_11__ {scalar_t__ op; int iRightJoinTable; struct TYPE_11__* pRight; struct TYPE_11__* pLeft; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, WhereClause *VAR_3, Expr *VAR_4){
  int VAR_5;
  WhereTerm *VAR_6;
  while( VAR_4->op==VAR_1 ){
    if( !FUNC_2(VAR_2,VAR_3,VAR_4->pLeft) ) return 0;
    VAR_4 = VAR_4->pRight;
  }
  for(VAR_5=0, VAR_6=VAR_3->a; VAR_5<VAR_3->nTerm; VAR_5++, VAR_6++){
    Expr *VAR_7 = VAR_6->pExpr;
    if( FUNC_1(VAR_7, VAR_4, VAR_2)
     && (!FUNC_0(VAR_7, VAR_0) || VAR_7->iRightJoinTable==VAR_2)
    ){
      return 1;
    }
  }
  return 0;
}
