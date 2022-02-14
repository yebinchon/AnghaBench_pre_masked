
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rCostX; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ fuzzer_stem ;



__attribute__((used)) static fuzzer_stem *FUNC_0(fuzzer_stem *VAR_0, fuzzer_stem *VAR_1){
  fuzzer_stem VAR_2;
  fuzzer_stem *VAR_3;

  VAR_3 = &VAR_2;
  while( VAR_0 && VAR_1 ){
    if( VAR_0->rCostX<=VAR_1->rCostX ){
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
