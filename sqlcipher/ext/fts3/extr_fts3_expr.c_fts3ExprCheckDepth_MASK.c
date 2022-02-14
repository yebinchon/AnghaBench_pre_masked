
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* pRight; struct TYPE_3__* pLeft; } ;
typedef TYPE_1__ Fts3Expr ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(Fts3Expr *VAR_2, int VAR_3){
  int VAR_4 = VAR_0;
  if( VAR_2 ){
    if( VAR_3<0 ){
      VAR_4 = VAR_1;
    }else{
      VAR_4 = FUNC_0(VAR_2->pLeft, VAR_3-1);
      if( VAR_4==VAR_0 ){
        VAR_4 = FUNC_0(VAR_2->pRight, VAR_3-1);
      }
    }
  }
  return VAR_4;
}
