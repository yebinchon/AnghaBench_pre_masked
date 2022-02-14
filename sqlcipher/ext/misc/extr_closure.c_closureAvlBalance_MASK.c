
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int imbalance; struct TYPE_10__* pUp; struct TYPE_10__* pAfter; struct TYPE_10__* pBefore; } ;
typedef TYPE_1__ closure_avl ;


 TYPE_1__** FUNC_0 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static closure_avl *FUNC_4(closure_avl *VAR_0){
  closure_avl *VAR_1 = VAR_0;
  closure_avl **VAR_2;
  while( VAR_0 ){
    FUNC_1(VAR_0);
    if( VAR_0->imbalance>=2 ){
      closure_avl *VAR_3 = VAR_0->pBefore;
      if( VAR_3->imbalance<0 ) VAR_0->pBefore = FUNC_2(VAR_3);
      VAR_2 = FUNC_0(VAR_0,&VAR_0);
      VAR_0 = *VAR_2 = FUNC_3(VAR_0);
    }else if( VAR_0->imbalance<=(-2) ){
      closure_avl *VAR_4 = VAR_0->pAfter;
      if( VAR_4->imbalance>0 ) VAR_0->pAfter = FUNC_3(VAR_4);
      VAR_2 = FUNC_0(VAR_0,&VAR_0);
      VAR_0 = *VAR_2 = FUNC_2(VAR_0);
    }
    VAR_1 = VAR_0;
    VAR_0 = VAR_0->pUp;
  }
  return VAR_1;
}
