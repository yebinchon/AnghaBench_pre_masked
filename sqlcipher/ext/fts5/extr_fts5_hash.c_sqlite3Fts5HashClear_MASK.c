
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nSlot; scalar_t__ nEntry; TYPE_1__** aSlot; } ;
struct TYPE_6__ {struct TYPE_6__* pHashNext; } ;
typedef TYPE_1__ Fts5HashEntry ;
typedef TYPE_2__ Fts5Hash ;


 int FUNC_0 (TYPE_1__**,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Fts5Hash *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<VAR_0->nSlot; VAR_1++){
    Fts5HashEntry *VAR_2;
    Fts5HashEntry *VAR_3;
    for(VAR_3=VAR_0->aSlot[VAR_1]; VAR_3; VAR_3=VAR_2){
      VAR_2 = VAR_3->pHashNext;
      FUNC_1(VAR_3);
    }
  }
  FUNC_0(VAR_0->aSlot, 0, VAR_0->nSlot * sizeof(Fts5HashEntry*));
  VAR_0->nEntry = 0;
}
