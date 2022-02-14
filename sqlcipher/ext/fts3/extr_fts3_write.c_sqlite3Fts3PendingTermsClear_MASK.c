
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nIndex; scalar_t__ nPendingData; TYPE_1__* aIndex; } ;
struct TYPE_4__ {int hPending; } ;
typedef int PendingList ;
typedef TYPE_2__ Fts3Table ;
typedef int Fts3HashElem ;
typedef int Fts3Hash ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(Fts3Table *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<VAR_0->nIndex; VAR_1++){
    Fts3HashElem *VAR_2;
    Fts3Hash *VAR_3 = &VAR_0->aIndex[VAR_1].hPending;
    for(VAR_2=FUNC_2(VAR_3); VAR_2; VAR_2=FUNC_3(VAR_2)){
      PendingList *VAR_4 = (PendingList *)FUNC_1(VAR_2);
      FUNC_4(VAR_4);
    }
    FUNC_0(VAR_3);
  }
  VAR_0->nPendingData = 0;
}
