
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pUp; struct TYPE_5__* pAfter; struct TYPE_5__* pBefore; } ;
typedef TYPE_1__ closure_avl ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static closure_avl *FUNC_1(closure_avl *VAR_0){
  closure_avl *VAR_1 = VAR_0->pAfter;
  closure_avl *VAR_2 = VAR_1->pBefore;
  VAR_1->pUp = VAR_0->pUp;
  VAR_1->pBefore = VAR_0;
  VAR_0->pUp = VAR_1;
  VAR_0->pAfter = VAR_2;
  if( VAR_2 ) VAR_2->pUp = VAR_0;
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
  return VAR_1;
}
