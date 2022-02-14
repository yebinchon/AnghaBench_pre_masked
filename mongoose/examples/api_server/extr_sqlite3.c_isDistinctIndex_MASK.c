
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* pExpr; } ;
typedef TYPE_2__ WhereTerm ;
typedef int WhereClause ;
struct TYPE_17__ {scalar_t__ op; int iTable; int pRight; int pLeft; int iColumn; } ;
struct TYPE_16__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_15__ {scalar_t__ zName; int nColumn; } ;
struct TYPE_13__ {int pExpr; } ;
typedef int Parse ;
typedef TYPE_3__ Index ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;
typedef int CollSeq ;
typedef int Bitmask ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_4__*,int,TYPE_3__*,int) ;
 TYPE_2__* FUNC_2 (int *,int,int ,int,int ,int ) ;
 int * FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(
  Parse *VAR_3,
  WhereClause *VAR_4,
  Index *VAR_5,
  int VAR_6,
  ExprList *VAR_7,
  int VAR_8
){
  Bitmask VAR_9 = 0;
  int VAR_10;

  FUNC_0( VAR_7!=0 );
  if( VAR_5->zName==0 || VAR_7->nExpr>=VAR_0 ) return 0;
  FUNC_6( VAR_7->nExpr==VAR_0-1 );
  for(VAR_10=0; VAR_10<VAR_7->nExpr; VAR_10++){
    WhereTerm *VAR_11;
    Expr *VAR_12 = FUNC_5(VAR_7->a[VAR_10].pExpr);
    if( VAR_12->op!=VAR_1 ) return 0;
    VAR_11 = FUNC_2(VAR_4, VAR_12->iTable, VAR_12->iColumn, ~(Bitmask)0, VAR_2, 0);
    if( VAR_11 ){
      Expr *VAR_13 = VAR_11->pExpr;
      CollSeq *VAR_14 = FUNC_3(VAR_3, VAR_13->pLeft, VAR_13->pRight);
      CollSeq *VAR_15 = FUNC_4(VAR_3, VAR_12);
      if( VAR_14==VAR_15 ) continue;
    }
    if( VAR_12->iTable!=VAR_6 ) return 0;
    VAR_9 |= (((Bitmask)1) << VAR_10);
  }

  for(VAR_10=VAR_8; VAR_9 && VAR_10<VAR_5->nColumn; VAR_10++){
    int VAR_16 = FUNC_1(VAR_3, VAR_7, VAR_6, VAR_5, VAR_10);
    if( VAR_16<0 ) break;
    VAR_9 &= ~(((Bitmask)1) << VAR_16);
  }

  return (VAR_9==0);
}
