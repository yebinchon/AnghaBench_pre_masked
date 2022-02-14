
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bEof; } ;
struct TYPE_4__ {int nLvl; TYPE_2__* aLvl; } ;
typedef TYPE_1__ Fts5DlidxIter ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(Fts5DlidxIter *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<VAR_0->nLvl; VAR_1++){
    FUNC_0(&VAR_0->aLvl[VAR_1]);
  }
  return VAR_0->aLvl[0].bEof;
}
