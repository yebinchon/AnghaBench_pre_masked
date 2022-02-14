
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pParent; struct TYPE_6__* pLeft; struct TYPE_6__* pRight; } ;
typedef TYPE_1__ Fts3Expr ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(
  Fts3Expr **VAR_0,
  Fts3Expr *VAR_1,
  Fts3Expr *VAR_2
){
  Fts3Expr *VAR_3 = VAR_1;
  while( VAR_3->pParent && FUNC_1(VAR_3->pParent)<=FUNC_1(VAR_2) ){
    VAR_3 = VAR_3->pParent;
  }

  if( VAR_3->pParent ){
    FUNC_0( VAR_3->pParent->pRight==VAR_3 );
    VAR_3->pParent->pRight = VAR_2;
    VAR_2->pParent = VAR_3->pParent;
  }else{
    *VAR_0 = VAR_2;
  }
  VAR_2->pLeft = VAR_3;
  VAR_3->pParent = VAR_2;
}
