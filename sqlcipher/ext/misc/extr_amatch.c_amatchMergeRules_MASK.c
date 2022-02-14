
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rCost; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ amatch_rule ;



__attribute__((used)) static amatch_rule *FUNC_0(amatch_rule *VAR_0, amatch_rule *VAR_1){
  amatch_rule VAR_2;
  amatch_rule *VAR_3;

  VAR_3 = &VAR_2;
  while( VAR_0 && VAR_1 ){
    if( VAR_0->rCost<=VAR_1->rCost ){
      VAR_3->pNext = VAR_0;
      VAR_3 = VAR_0;
      VAR_0 = VAR_0->pNext;
    }else{
      VAR_3->pNext = VAR_1;
      VAR_3 = VAR_1;
      VAR_1 = VAR_1->pNext;
    }
  }
  if( VAR_0==0 ){
    VAR_3->pNext = VAR_1;
  }else{
    VAR_3->pNext = VAR_0;
  }
  return VAR_2.pNext;
}
