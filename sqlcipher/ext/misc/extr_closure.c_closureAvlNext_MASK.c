
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pAfter; struct TYPE_6__* pUp; } ;
typedef TYPE_1__ closure_avl ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

closure_avl *FUNC_1(closure_avl *VAR_0){
  closure_avl *VAR_1 = 0;
  while( VAR_0 && VAR_0->pAfter==VAR_1 ){
    VAR_1 = VAR_0;
    VAR_0 = VAR_0->pUp;
  }
  if( VAR_0 && VAR_1==0 ){
    VAR_0 = FUNC_0(VAR_0->pAfter);
  }
  return VAR_0;
}
