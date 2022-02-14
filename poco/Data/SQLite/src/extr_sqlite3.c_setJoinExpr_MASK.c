
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ i16 ;
struct TYPE_11__ {TYPE_2__* pList; } ;
struct TYPE_12__ {scalar_t__ op; struct TYPE_12__* pRight; struct TYPE_12__* pLeft; TYPE_3__ x; scalar_t__ iRightJoinTable; } ;
struct TYPE_10__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_9__ {TYPE_4__* pExpr; } ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(Expr *VAR_5, int VAR_6){
  while( VAR_5 ){
    FUNC_1(VAR_5, VAR_0);
    FUNC_3( !FUNC_0(VAR_5, VAR_3|VAR_2) );
    FUNC_2(VAR_5, VAR_1);
    VAR_5->iRightJoinTable = (i16)VAR_6;
    if( VAR_5->op==VAR_4 && VAR_5->x.pList ){
      int VAR_7;
      for(VAR_7=0; VAR_7<VAR_5->x.pList->nExpr; VAR_7++){
        FUNC_4(VAR_5->x.pList->a[VAR_7].pExpr, VAR_6);
      }
    }
    FUNC_4(VAR_5->pLeft, VAR_6);
    VAR_5 = VAR_5->pRight;
  }
}
