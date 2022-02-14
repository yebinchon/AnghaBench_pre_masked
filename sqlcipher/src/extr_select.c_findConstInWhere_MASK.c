
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int pParse; } ;
typedef TYPE_1__ WhereConst ;
struct TYPE_13__ {scalar_t__ op; struct TYPE_13__* pLeft; struct TYPE_13__* pRight; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(WhereConst *VAR_5, Expr *VAR_6){
  Expr *VAR_7, *VAR_8;
  if( VAR_6==0 ) return;
  if( FUNC_0(VAR_6, VAR_1) ) return;
  if( VAR_6->op==VAR_2 ){
    FUNC_6(VAR_5, VAR_6->pRight);
    FUNC_6(VAR_5, VAR_6->pLeft);
    return;
  }
  if( VAR_6->op!=VAR_4 ) return;
  VAR_7 = VAR_6->pRight;
  VAR_8 = VAR_6->pLeft;
  FUNC_1( VAR_7!=0 );
  FUNC_1( VAR_8!=0 );
  if( VAR_7->op==VAR_3
   && !FUNC_0(VAR_7, VAR_0)
   && FUNC_4(VAR_8)
   && FUNC_5(FUNC_3(VAR_5->pParse,VAR_8,VAR_7))
  ){
    FUNC_2(VAR_5, VAR_7, VAR_8);
  }else
  if( VAR_8->op==VAR_3
   && !FUNC_0(VAR_8, VAR_0)
   && FUNC_4(VAR_7)
   && FUNC_5(FUNC_3(VAR_5->pParse,VAR_8,VAR_7))
  ){
    FUNC_2(VAR_5, VAR_8, VAR_7);
  }
}
