
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* pList; } ;
struct TYPE_20__ {scalar_t__ op; int flags; int iColumn; scalar_t__ iTable; TYPE_3__ x; struct TYPE_20__* pLeft; } ;
struct TYPE_19__ {int db; } ;
struct TYPE_17__ {TYPE_1__* a; } ;
struct TYPE_16__ {TYPE_5__* pExpr; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int ,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,TYPE_5__*) ;

Expr *FUNC_4(
  Parse *VAR_4,
  Expr *VAR_5,
  int VAR_6
){
  Expr *VAR_7;
  if( VAR_5->op==VAR_1 ){
    FUNC_0( VAR_5->flags & VAR_0 );
    VAR_7 = FUNC_2(VAR_4, VAR_2, 0, 0);
    if( VAR_7 ){
      VAR_7->iColumn = VAR_6;
      VAR_7->pLeft = VAR_5;
    }
    FUNC_0( VAR_7==0 || VAR_7->iTable==0 );
  }else{
    if( VAR_5->op==VAR_3 ) VAR_5 = VAR_5->x.pList->a[VAR_6].pExpr;
    VAR_7 = FUNC_1(VAR_4->db, VAR_5, 0);
    FUNC_3(VAR_4, VAR_7, VAR_5);
  }
  return VAR_7;
}
