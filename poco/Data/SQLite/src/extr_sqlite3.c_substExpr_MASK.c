
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef int sqlite3 ;
typedef int ifNullRow ;
struct TYPE_23__ {int pList; int pSelect; } ;
struct TYPE_25__ {scalar_t__ iRightJoinTable; scalar_t__ op; scalar_t__ iTable; size_t iColumn; TYPE_3__ x; struct TYPE_25__* pRight; struct TYPE_25__* pLeft; } ;
struct TYPE_24__ {scalar_t__ iTable; scalar_t__ iNewTable; scalar_t__ isLeftJoin; TYPE_11__* pParse; TYPE_2__* pEList; } ;
struct TYPE_22__ {size_t nExpr; TYPE_1__* a; } ;
struct TYPE_21__ {TYPE_5__* pExpr; } ;
struct TYPE_20__ {int * db; } ;
typedef TYPE_4__ SubstContext ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int *,TYPE_5__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_11__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static Expr *FUNC_11(
  SubstContext *VAR_7,
  Expr *VAR_8
){
  if( VAR_8==0 ) return 0;
  if( FUNC_0(VAR_8, VAR_1)
   && VAR_8->iRightJoinTable==VAR_7->iTable
  ){
    VAR_8->iRightJoinTable = VAR_7->iNewTable;
  }
  if( VAR_8->op==VAR_4 && VAR_8->iTable==VAR_7->iTable ){
    if( VAR_8->iColumn<0 ){
      VAR_8->op = VAR_6;
    }else{
      Expr *VAR_9;
      Expr *VAR_10 = VAR_7->pEList->a[VAR_8->iColumn].pExpr;
      Expr VAR_11;
      FUNC_2( VAR_7->pEList!=0 && VAR_8->iColumn<VAR_7->pEList->nExpr );
      FUNC_2( VAR_8->pRight==0 );
      if( FUNC_6(VAR_10) ){
        FUNC_7(VAR_7->pParse, VAR_10);
      }else{
        sqlite3 *VAR_12 = VAR_7->pParse->db;
        if( VAR_7->isLeftJoin && VAR_10->op!=VAR_4 ){
          FUNC_3(&VAR_11, 0, sizeof(VAR_11));
          VAR_11.op = VAR_5;
          VAR_11.pLeft = VAR_10;
          VAR_11.iTable = VAR_7->iNewTable;
          VAR_10 = &VAR_11;
        }
        FUNC_10( FUNC_0(VAR_10, VAR_2) );
        VAR_9 = FUNC_5(VAR_12, VAR_10, 0);
        if( VAR_9 && VAR_7->isLeftJoin ){
          FUNC_1(VAR_9, VAR_0);
        }
        if( VAR_9 && FUNC_0(VAR_8,VAR_1) ){
          VAR_9->iRightJoinTable = VAR_8->iRightJoinTable;
          FUNC_1(VAR_9, VAR_1);
        }
        FUNC_4(VAR_12, VAR_8);
        VAR_8 = VAR_9;
      }
    }
  }else{
    if( VAR_8->op==VAR_5 && VAR_8->iTable==VAR_7->iTable ){
      VAR_8->iTable = VAR_7->iNewTable;
    }
    VAR_8->pLeft = FUNC_11(VAR_7, VAR_8->pLeft);
    VAR_8->pRight = FUNC_11(VAR_7, VAR_8->pRight);
    if( FUNC_0(VAR_8, VAR_3) ){
      FUNC_9(VAR_7, VAR_8->x.pSelect, 1);
    }else{
      FUNC_8(VAR_7, VAR_8->x.pList);
    }
  }
  return VAR_8;
}
