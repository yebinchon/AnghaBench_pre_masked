
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nLvl; TYPE_1__* aLvl; } ;
struct TYPE_5__ {int pData; } ;
typedef TYPE_2__ Fts5DlidxIter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(Fts5DlidxIter *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nLvl; VAR_1++){
      FUNC_0(VAR_0->aLvl[VAR_1].pData);
    }
    FUNC_1(VAR_0);
  }
}
