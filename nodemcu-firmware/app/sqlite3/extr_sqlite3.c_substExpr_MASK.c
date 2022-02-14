
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


typedef int sqlite3 ;
typedef int ifNullRow ;
struct TYPE_22__ {int pList; int pSelect; } ;
struct TYPE_24__ {scalar_t__ iRightJoinTable; scalar_t__ op; scalar_t__ iTable; size_t iColumn; int flags; TYPE_3__ x; struct TYPE_24__* pRight; struct TYPE_24__* pLeft; } ;
struct TYPE_23__ {scalar_t__ iTable; scalar_t__ iNewTable; scalar_t__ isLeftJoin; TYPE_11__* pParse; TYPE_2__* pEList; } ;
struct TYPE_21__ {size_t nExpr; TYPE_1__* a; } ;
struct TYPE_20__ {TYPE_5__* pExpr; } ;
struct TYPE_19__ {int * db; } ;
typedef TYPE_4__ SubstContext ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_4 (int *,TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_11__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;

__attribute__((used)) static Expr *FUNC_9(
  SubstContext *VAR_5,
  Expr *VAR_6
){
  if( VAR_6==0 ) return 0;
  if( FUNC_0(VAR_6, VAR_0) && VAR_6->iRightJoinTable==VAR_5->iTable ){
    VAR_6->iRightJoinTable = VAR_5->iNewTable;
  }
  if( VAR_6->op==VAR_2 && VAR_6->iTable==VAR_5->iTable ){
    if( VAR_6->iColumn<0 ){
      VAR_6->op = VAR_4;
    }else{
      Expr *VAR_7;
      Expr *VAR_8 = VAR_5->pEList->a[VAR_6->iColumn].pExpr;
      Expr VAR_9;
      FUNC_1( VAR_5->pEList!=0 && VAR_6->iColumn<VAR_5->pEList->nExpr );
      FUNC_1( VAR_6->pLeft==0 && VAR_6->pRight==0 );
      if( FUNC_5(VAR_8) ){
        FUNC_6(VAR_5->pParse, VAR_8);
      }else{
        sqlite3 *VAR_10 = VAR_5->pParse->db;
        if( VAR_5->isLeftJoin && VAR_8->op!=VAR_2 ){
          FUNC_2(&VAR_9, 0, sizeof(VAR_9));
          VAR_9.op = VAR_3;
          VAR_9.pLeft = VAR_8;
          VAR_9.iTable = VAR_5->iNewTable;
          VAR_8 = &VAR_9;
        }
        VAR_7 = FUNC_4(VAR_10, VAR_8, 0);
        if( VAR_7 && (VAR_6->flags & VAR_0) ){
          VAR_7->iRightJoinTable = VAR_6->iRightJoinTable;
          VAR_7->flags |= VAR_0;
        }
        FUNC_3(VAR_10, VAR_6);
        VAR_6 = VAR_7;
      }
    }
  }else{
    if( VAR_6->op==VAR_3 && VAR_6->iTable==VAR_5->iTable ){
      VAR_6->iTable = VAR_5->iNewTable;
    }
    VAR_6->pLeft = FUNC_9(VAR_5, VAR_6->pLeft);
    VAR_6->pRight = FUNC_9(VAR_5, VAR_6->pRight);
    if( FUNC_0(VAR_6, VAR_1) ){
      FUNC_8(VAR_5, VAR_6->x.pSelect, 1);
    }else{
      FUNC_7(VAR_5, VAR_6->x.pList);
    }
  }
  return VAR_6;
}
