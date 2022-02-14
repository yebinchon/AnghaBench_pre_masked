
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int WhereClause ;
struct TYPE_18__ {TYPE_3__* aCol; TYPE_6__* pIndex; } ;
typedef TYPE_4__ Table ;
struct TYPE_22__ {scalar_t__ op; int iTable; scalar_t__ iColumn; } ;
struct TYPE_21__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_20__ {scalar_t__ onError; int nColumn; int* aiColumn; struct TYPE_20__* pNext; } ;
struct TYPE_19__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_17__ {scalar_t__ notNull; } ;
struct TYPE_16__ {int pExpr; } ;
struct TYPE_15__ {int iCursor; TYPE_4__* pTab; } ;
typedef TYPE_5__ SrcList ;
typedef int Parse ;
typedef TYPE_6__ Index ;
typedef TYPE_7__ ExprList ;
typedef TYPE_8__ Expr ;
typedef int Bitmask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_7__*,int,TYPE_6__*,int) ;
 scalar_t__ FUNC_1 (int *,int,int,int ,int ,TYPE_6__*) ;
 TYPE_8__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
  Parse *VAR_3,
  SrcList *VAR_4,
  WhereClause *VAR_5,
  ExprList *VAR_6
){
  Table *VAR_7;
  Index *VAR_8;
  int VAR_9;
  int VAR_10;




  if( VAR_4->nSrc!=1 ) return 0;
  VAR_10 = VAR_4->a[0].iCursor;
  VAR_7 = VAR_4->a[0].pTab;





  for(VAR_9=0; VAR_9<VAR_6->nExpr; VAR_9++){
    Expr *VAR_11 = FUNC_2(VAR_6->a[VAR_9].pExpr);
    if( VAR_11->op==VAR_1 && VAR_11->iTable==VAR_10 && VAR_11->iColumn<0 ) return 1;
  }
  for(VAR_8=VAR_7->pIndex; VAR_8; VAR_8=VAR_8->pNext){
    if( VAR_8->onError==VAR_0 ) continue;
    for(VAR_9=0; VAR_9<VAR_8->nColumn; VAR_9++){
      int VAR_12 = VAR_8->aiColumn[VAR_9];
      if( 0==FUNC_1(VAR_5, VAR_10, VAR_12, ~(Bitmask)0, VAR_2, VAR_8) ){
        int VAR_13 = FUNC_0(VAR_3, VAR_6, VAR_10, VAR_8, VAR_9);
        if( VAR_13<0 || VAR_7->aCol[VAR_8->aiColumn[VAR_9]].notNull==0 ){
          break;
        }
      }
    }
    if( VAR_9==VAR_8->nColumn ){

      return 1;
    }
  }

  return 0;
}
