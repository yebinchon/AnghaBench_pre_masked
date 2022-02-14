
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pNext; } ;
typedef TYPE_1__ amatch_word ;
struct TYPE_6__ {int rLimit; scalar_t__ nWord; scalar_t__ iLang; scalar_t__ pCurrent; int pWord; scalar_t__ pCost; scalar_t__ nBuf; TYPE_1__* zBuf; TYPE_1__* zInput; TYPE_1__* pAllWords; } ;
typedef TYPE_2__ amatch_cursor ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(amatch_cursor *VAR_0){
  amatch_word *VAR_1, *VAR_2;
  for(VAR_1=VAR_0->pAllWords; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_0(VAR_1);
  }
  VAR_0->pAllWords = 0;
  FUNC_0(VAR_0->zInput);
  VAR_0->zInput = 0;
  FUNC_0(VAR_0->zBuf);
  VAR_0->zBuf = 0;
  VAR_0->nBuf = 0;
  VAR_0->pCost = 0;
  VAR_0->pWord = 0;
  VAR_0->pCurrent = 0;
  VAR_0->rLimit = 1000000;
  VAR_0->iLang = 0;
  VAR_0->nWord = 0;
}
