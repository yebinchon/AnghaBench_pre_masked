
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int eType; struct TYPE_5__* pRight; struct TYPE_5__* pLeft; } ;
typedef TYPE_1__ Fts3Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
  Fts3Expr *VAR_3,
  int *VAR_4,
  int (*VAR_5)(Fts3Expr*,int,void*),
  void *VAR_6
){
  int VAR_7;
  int VAR_8 = VAR_3->eType;

  if( VAR_8!=VAR_1 ){
    FUNC_0( VAR_3->pLeft && VAR_3->pRight );
    VAR_7 = FUNC_1(VAR_3->pLeft, VAR_4, VAR_5, VAR_6);
    if( VAR_7==VAR_2 && VAR_8!=VAR_0 ){
      VAR_7 = FUNC_1(VAR_3->pRight, VAR_4, VAR_5, VAR_6);
    }
  }else{
    VAR_7 = VAR_5(VAR_3, *VAR_4, VAR_6);
    (*VAR_4)++;
  }
  return VAR_7;
}
