
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ExprList_item {int u; int bSorterRef; int bSpanIsTab; scalar_t__ done; int sortOrder; void* zSpan; void* zName; TYPE_2__* pExpr; } ;
typedef int sqlite3 ;
struct TYPE_10__ {scalar_t__ op; scalar_t__ iColumn; scalar_t__ pLeft; scalar_t__ pRight; } ;
struct TYPE_9__ {int nExpr; struct ExprList_item* a; } ;
typedef TYPE_1__ ExprList ;
typedef TYPE_2__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 void* FUNC_3 (int *,void*) ;
 TYPE_2__* FUNC_4 (int *,TYPE_2__*,int) ;

ExprList *FUNC_5(sqlite3 *VAR_1, ExprList *VAR_2, int VAR_3){
  ExprList *VAR_4;
  struct ExprList_item *VAR_5, *VAR_6;
  int VAR_7;
  Expr *VAR_8 = 0;
  FUNC_0( VAR_1!=0 );
  if( VAR_2==0 ) return 0;
  VAR_4 = FUNC_1(VAR_1, FUNC_2(VAR_1, VAR_2));
  if( VAR_4==0 ) return 0;
  VAR_4->nExpr = VAR_2->nExpr;
  VAR_5 = VAR_4->a;
  VAR_6 = VAR_2->a;
  for(VAR_7=0; VAR_7<VAR_2->nExpr; VAR_7++, VAR_5++, VAR_6++){
    Expr *VAR_9 = VAR_6->pExpr;
    Expr *VAR_10;
    VAR_5->pExpr = FUNC_4(VAR_1, VAR_9, VAR_3);
    if( VAR_9
     && VAR_9->op==VAR_0
     && (VAR_10 = VAR_5->pExpr)!=0
    ){
      FUNC_0( VAR_10->iColumn==0 || VAR_7>0 );
      if( VAR_10->iColumn==0 ){
        FUNC_0( VAR_9->pLeft==VAR_9->pRight );
        VAR_8 = VAR_10->pLeft = VAR_10->pRight;
      }else{
        FUNC_0( VAR_7>0 );
        FUNC_0( VAR_5[-1].pExpr!=0 );
        FUNC_0( VAR_10->iColumn==VAR_5[-1].pExpr->iColumn+1 );
        FUNC_0( VAR_8==VAR_5[-1].pExpr->pLeft );
        VAR_10->pLeft = VAR_8;
      }
    }
    VAR_5->zName = FUNC_3(VAR_1, VAR_6->zName);
    VAR_5->zSpan = FUNC_3(VAR_1, VAR_6->zSpan);
    VAR_5->sortOrder = VAR_6->sortOrder;
    VAR_5->done = 0;
    VAR_5->bSpanIsTab = VAR_6->bSpanIsTab;
    VAR_5->bSorterRef = VAR_6->bSorterRef;
    VAR_5->u = VAR_6->u;
  }
  return VAR_4;
}
