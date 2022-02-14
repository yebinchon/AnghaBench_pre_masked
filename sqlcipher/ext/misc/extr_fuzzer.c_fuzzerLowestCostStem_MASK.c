
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rCostX; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ fuzzer_stem ;
struct TYPE_6__ {int mxQueue; TYPE_1__* pStem; TYPE_1__** aQueue; } ;
typedef TYPE_2__ fuzzer_cursor ;



__attribute__((used)) static fuzzer_stem *FUNC_0(fuzzer_cursor *VAR_0){
  fuzzer_stem *VAR_1, *VAR_2;
  int VAR_3;
  int VAR_4;

  if( VAR_0->pStem==0 ){
    VAR_3 = -1;
    VAR_1 = 0;
    for(VAR_4=0; VAR_4<=VAR_0->mxQueue; VAR_4++){
      VAR_2 = VAR_0->aQueue[VAR_4];
      if( VAR_2==0 ) continue;
      if( VAR_1==0 || VAR_1->rCostX>VAR_2->rCostX ){
        VAR_1 = VAR_2;
        VAR_3 = VAR_4;
      }
    }
    if( VAR_1 ){
      VAR_0->aQueue[VAR_3] = VAR_1->pNext;
      VAR_1->pNext = 0;
      VAR_0->pStem = VAR_1;
    }
  }
  return VAR_0->pStem;
}
