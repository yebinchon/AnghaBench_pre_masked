
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int u16 ;
typedef int sqlite3 ;
struct TYPE_17__ {int eOperator; TYPE_12__* pExpr; } ;
typedef TYPE_3__ WhereTerm ;
struct TYPE_18__ {TYPE_2__* pWInfo; } ;
typedef TYPE_4__ WhereClause ;
struct TYPE_19__ {int op; } ;
struct TYPE_16__ {TYPE_1__* pParse; } ;
struct TYPE_15__ {int * db; } ;
struct TYPE_14__ {scalar_t__ pLeft; scalar_t__ pRight; } ;
typedef int SrcList ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,int) ;
 TYPE_5__* FUNC_3 (int *,TYPE_12__*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_5(
  SrcList *VAR_9,
  WhereClause *VAR_10,
  WhereTerm *VAR_11,
  WhereTerm *VAR_12
){
  u16 VAR_13 = VAR_11->eOperator | VAR_12->eOperator;
  sqlite3 *VAR_14;
  Expr *VAR_15;
  int VAR_16;
  int VAR_17;

  if( (VAR_11->eOperator & (VAR_4|VAR_8|VAR_7|VAR_6|VAR_5))==0 ) return;
  if( (VAR_12->eOperator & (VAR_4|VAR_8|VAR_7|VAR_6|VAR_5))==0 ) return;
  if( (VAR_13 & (VAR_4|VAR_8|VAR_7))!=VAR_13
   && (VAR_13 & (VAR_4|VAR_6|VAR_5))!=VAR_13 ) return;
  FUNC_0( VAR_11->pExpr->pLeft!=0 && VAR_11->pExpr->pRight!=0 );
  FUNC_0( VAR_12->pExpr->pLeft!=0 && VAR_12->pExpr->pRight!=0 );
  if( FUNC_2(0,VAR_11->pExpr->pLeft, VAR_12->pExpr->pLeft, -1) ) return;
  if( FUNC_2(0,VAR_11->pExpr->pRight, VAR_12->pExpr->pRight,-1) )return;

  if( (VAR_13 & (VAR_13-1))!=0 ){
    if( VAR_13 & (VAR_8|VAR_7) ){
      VAR_13 = VAR_7;
    }else{
      FUNC_0( VAR_13 & (VAR_6|VAR_5) );
      VAR_13 = VAR_5;
    }
  }
  VAR_14 = VAR_10->pWInfo->pParse->db;
  VAR_15 = FUNC_3(VAR_14, VAR_11->pExpr, 0);
  if( VAR_15==0 ) return;
  for(VAR_16=VAR_2; VAR_13!=(VAR_4<<(VAR_16-VAR_2)); VAR_16++){ FUNC_0( VAR_16<VAR_3 ); }
  VAR_15->op = VAR_16;
  VAR_17 = FUNC_4(VAR_10, VAR_15, VAR_1|VAR_0);
  FUNC_1(VAR_9, VAR_10, VAR_17);
}
