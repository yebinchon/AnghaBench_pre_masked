
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nStem; scalar_t__* apHash; scalar_t__* aQueue; scalar_t__ pDone; scalar_t__ pStem; scalar_t__ mxQueue; scalar_t__ rLimit; } ;
typedef TYPE_1__ fuzzer_cursor ;
typedef scalar_t__ fuzzer_cost ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_2(fuzzer_cursor *VAR_1, int VAR_2){
  int VAR_3;
  FUNC_0(VAR_1->pStem);
  FUNC_0(VAR_1->pDone);
  for(VAR_3=0; VAR_3<VAR_0; VAR_3++) FUNC_0(VAR_1->aQueue[VAR_3]);
  VAR_1->rLimit = (fuzzer_cost)0;
  if( VAR_2 && VAR_1->nStem ){
    VAR_1->mxQueue = 0;
    VAR_1->pStem = 0;
    VAR_1->pDone = 0;
    FUNC_1(VAR_1->aQueue, 0, sizeof(VAR_1->aQueue));
    FUNC_1(VAR_1->apHash, 0, sizeof(VAR_1->apHash));
  }
  VAR_1->nStem = 0;
}
