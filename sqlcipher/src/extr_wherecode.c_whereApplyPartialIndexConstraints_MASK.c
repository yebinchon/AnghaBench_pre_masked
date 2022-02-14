
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int wtFlags; TYPE_3__* pExpr; } ;
typedef TYPE_1__ WhereTerm ;
struct TYPE_9__ {int nTerm; TYPE_1__* a; } ;
typedef TYPE_2__ WhereClause ;
struct TYPE_10__ {scalar_t__ op; struct TYPE_10__* pRight; struct TYPE_10__* pLeft; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_1(
  Expr *VAR_2,
  int VAR_3,
  WhereClause *VAR_4
){
  int VAR_5;
  WhereTerm *VAR_6;
  while( VAR_2->op==VAR_1 ){
    FUNC_1(VAR_2->pLeft, VAR_3, VAR_4);
    VAR_2 = VAR_2->pRight;
  }
  for(VAR_5=0, VAR_6=VAR_4->a; VAR_5<VAR_4->nTerm; VAR_5++, VAR_6++){
    Expr *VAR_7;
    if( VAR_6->wtFlags & VAR_0 ) continue;
    VAR_7 = VAR_6->pExpr;
    if( FUNC_0(0, VAR_7, VAR_2, VAR_3)==0 ){
      VAR_6->wtFlags |= VAR_0;
    }
  }
}
