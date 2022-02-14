
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ rCostX; scalar_t__ pNext; } ;
typedef TYPE_1__ fuzzer_stem ;
struct TYPE_12__ {int mxQueue; TYPE_1__** aQueue; TYPE_1__* pStem; } ;
typedef TYPE_2__ fuzzer_cursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static fuzzer_stem *FUNC_3(fuzzer_cursor *VAR_1, fuzzer_stem *VAR_2){
  fuzzer_stem *VAR_3;
  int VAR_4;




  if( (VAR_3 = VAR_1->pStem)!=0 && VAR_3->rCostX>VAR_2->rCostX ){
    VAR_2->pNext = 0;
    VAR_1->pStem = VAR_2;
    VAR_2 = VAR_3;
  }


  VAR_2->pNext = 0;
  VAR_3 = VAR_2;
  for(VAR_4=0; VAR_4<=VAR_1->mxQueue; VAR_4++){
    if( VAR_1->aQueue[VAR_4] ){
      VAR_3 = FUNC_2(VAR_3, VAR_1->aQueue[VAR_4]);
      VAR_1->aQueue[VAR_4] = 0;
    }else{
      VAR_1->aQueue[VAR_4] = VAR_3;
      break;
    }
  }
  if( VAR_4>VAR_1->mxQueue ){
    if( VAR_4<VAR_0 ){
      VAR_1->mxQueue = VAR_4;
      VAR_1->aQueue[VAR_4] = VAR_3;
    }else{
      FUNC_0( VAR_1->mxQueue==VAR_0-1 );
      VAR_3 = FUNC_2(VAR_3, VAR_1->aQueue[VAR_0-1]);
      VAR_1->aQueue[VAR_0-1] = VAR_3;
    }
  }

  return FUNC_1(VAR_1);
}
