
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ op; struct TYPE_8__* pLeft; struct TYPE_8__* pRight; } ;
typedef int Parse ;
typedef TYPE_1__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

int FUNC_3(Parse *VAR_4, Expr *VAR_5, Expr *VAR_6, int VAR_7){
  if( FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7)==0 ){
    return 1;
  }
  if( VAR_6->op==VAR_3
   && (FUNC_3(VAR_4, VAR_5, VAR_6->pLeft, VAR_7)
             || FUNC_3(VAR_4, VAR_5, VAR_6->pRight, VAR_7) )
  ){
    return 1;
  }
  if( VAR_6->op==VAR_2 && VAR_5->op!=VAR_1 && VAR_5->op!=VAR_0 ){
    Expr *VAR_8 = FUNC_1(VAR_5->pLeft);
    FUNC_2( VAR_8!=VAR_5->pLeft );
    if( FUNC_0(VAR_4, VAR_8, VAR_6->pLeft, VAR_7)==0 ) return 1;
  }
  return 0;
}
