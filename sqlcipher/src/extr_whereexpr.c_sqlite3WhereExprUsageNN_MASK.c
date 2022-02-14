
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int bVarSelect; } ;
typedef TYPE_4__ WhereMaskSet ;
struct TYPE_14__ {TYPE_2__* pWin; } ;
struct TYPE_12__ {scalar_t__ pList; int pSelect; } ;
struct TYPE_16__ {scalar_t__ op; TYPE_3__ y; TYPE_1__ x; struct TYPE_16__* pRight; struct TYPE_16__* pLeft; int iTable; } ;
struct TYPE_13__ {scalar_t__ pPartition; scalar_t__ pOrderBy; } ;
typedef TYPE_5__ Expr ;
typedef int Bitmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int ) ;

Bitmask FUNC_5(WhereMaskSet *VAR_8, Expr *VAR_9){
  Bitmask VAR_10;
  if( VAR_9->op==VAR_5 && !FUNC_0(VAR_9, VAR_0) ){
    return FUNC_4(VAR_8, VAR_9->iTable);
  }else if( FUNC_0(VAR_9, VAR_2|VAR_1) ){
    FUNC_1( VAR_9->op!=VAR_7 );
    return 0;
  }
  VAR_10 = (VAR_9->op==VAR_7) ? FUNC_4(VAR_8, VAR_9->iTable) : 0;
  if( VAR_9->pLeft ) VAR_10 |= FUNC_5(VAR_8, VAR_9->pLeft);
  if( VAR_9->pRight ){
    VAR_10 |= FUNC_5(VAR_8, VAR_9->pRight);
    FUNC_1( VAR_9->x.pList==0 );
  }else if( FUNC_0(VAR_9, VAR_4) ){
    if( FUNC_0(VAR_9, VAR_3) ) VAR_8->bVarSelect = 1;
    VAR_10 |= FUNC_2(VAR_8, VAR_9->x.pSelect);
  }else if( VAR_9->x.pList ){
    VAR_10 |= FUNC_3(VAR_8, VAR_9->x.pList);
  }

  if( VAR_9->op==VAR_6 && VAR_9->y.pWin ){
    VAR_10 |= FUNC_3(VAR_8, VAR_9->y.pWin->pPartition);
    VAR_10 |= FUNC_3(VAR_8, VAR_9->y.pWin->pOrderBy);
  }

  return VAR_10;
}
