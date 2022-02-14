
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* pWInfo; } ;
typedef TYPE_3__ WhereLoopBuilder ;
struct TYPE_16__ {scalar_t__ op; int iTable; scalar_t__ iColumn; } ;
struct TYPE_15__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_14__ {int nKeyCol; scalar_t__* aiColumn; TYPE_5__* aColExpr; scalar_t__ bUnordered; } ;
struct TYPE_12__ {int pExpr; } ;
struct TYPE_11__ {TYPE_5__* pOrderBy; } ;
typedef TYPE_4__ Index ;
typedef TYPE_5__ ExprList ;
typedef TYPE_6__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ,int) ;
 TYPE_6__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(
  WhereLoopBuilder *VAR_2,
  Index *VAR_3,
  int VAR_4
){
  ExprList *VAR_5;
  ExprList *VAR_6;
  int VAR_7, VAR_8;

  if( VAR_3->bUnordered ) return 0;
  if( (VAR_5 = VAR_2->pWInfo->pOrderBy)==0 ) return 0;
  for(VAR_7=0; VAR_7<VAR_5->nExpr; VAR_7++){
    Expr *VAR_9 = FUNC_1(VAR_5->a[VAR_7].pExpr);
    if( VAR_9->op==VAR_0 && VAR_9->iTable==VAR_4 ){
      if( VAR_9->iColumn<0 ) return 1;
      for(VAR_8=0; VAR_8<VAR_3->nKeyCol; VAR_8++){
        if( VAR_9->iColumn==VAR_3->aiColumn[VAR_8] ) return 1;
      }
    }else if( (VAR_6 = VAR_3->aColExpr)!=0 ){
      for(VAR_8=0; VAR_8<VAR_3->nKeyCol; VAR_8++){
        if( VAR_3->aiColumn[VAR_8]!=VAR_1 ) continue;
        if( FUNC_0(VAR_9,VAR_6->a[VAR_8].pExpr,VAR_4)==0 ){
          return 1;
        }
      }
    }
  }
  return 0;
}
