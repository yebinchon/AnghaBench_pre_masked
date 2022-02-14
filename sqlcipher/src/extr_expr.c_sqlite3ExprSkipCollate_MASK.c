
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pList; } ;
struct TYPE_11__ {scalar_t__ op; struct TYPE_11__* pLeft; TYPE_3__ x; } ;
struct TYPE_9__ {scalar_t__ nExpr; TYPE_1__* a; } ;
struct TYPE_8__ {TYPE_4__* pExpr; } ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;

Expr *FUNC_2(Expr *VAR_5){
  while( VAR_5 && FUNC_0(VAR_5, VAR_0) ){
    if( FUNC_0(VAR_5, VAR_1) ){
      FUNC_1( !FUNC_0(VAR_5, VAR_2) );
      FUNC_1( VAR_5->x.pList->nExpr>0 );
      FUNC_1( VAR_5->op==VAR_4 );
      VAR_5 = VAR_5->x.pList->a[0].pExpr;
    }else{
      FUNC_1( VAR_5->op==VAR_3 );
      VAR_5 = VAR_5->pLeft;
    }
  }
  return VAR_5;
}
