
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nSeg; int poslist; int * aSeg; } ;
typedef TYPE_1__ Fts5Iter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(Fts5Iter *VAR_0){
  if( VAR_0 ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nSeg; VAR_1++){
      FUNC_1(&VAR_0->aSeg[VAR_1]);
    }
    FUNC_0(&VAR_0->poslist);
    FUNC_2(VAR_0);
  }
}
