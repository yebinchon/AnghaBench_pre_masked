
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nPhrase; struct TYPE_4__* pColset; int * apPhrase; } ;
typedef TYPE_1__ Fts5ExprNearset ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Fts5ExprNearset *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nPhrase; VAR_1++){
      FUNC_0(VAR_0->apPhrase[VAR_1]);
    }
    FUNC_1(VAR_0->pColset);
    FUNC_1(VAR_0);
  }
}
