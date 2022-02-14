
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iLvl; int iRowid; scalar_t__ nLvl; scalar_t__ nBase; scalar_t__ zBase; TYPE_2__* zPath; TYPE_2__* aLvl; } ;
typedef TYPE_1__ fsdir_cursor ;
struct TYPE_6__ {struct TYPE_6__* zDir; scalar_t__ pDir; } ;
typedef TYPE_2__ FsdirLevel ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(fsdir_cursor *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<=VAR_0->iLvl; VAR_1++){
    FsdirLevel *VAR_2 = &VAR_0->aLvl[VAR_1];
    if( VAR_2->pDir ) FUNC_0(VAR_2->pDir);
    FUNC_1(VAR_2->zDir);
  }
  FUNC_1(VAR_0->zPath);
  FUNC_1(VAR_0->aLvl);
  VAR_0->aLvl = 0;
  VAR_0->zPath = 0;
  VAR_0->zBase = 0;
  VAR_0->nBase = 0;
  VAR_0->nLvl = 0;
  VAR_0->iLvl = -1;
  VAR_0->iRowid = 1;
}
