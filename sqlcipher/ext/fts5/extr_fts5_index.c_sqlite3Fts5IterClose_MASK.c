
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pIndex; } ;
typedef TYPE_1__ Fts5Iter ;
typedef int Fts5IndexIter ;
typedef int Fts5Index ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Fts5IndexIter *VAR_0){
  if( VAR_0 ){
    Fts5Iter *VAR_1 = (Fts5Iter*)VAR_0;
    Fts5Index *VAR_2 = VAR_1->pIndex;
    FUNC_1(VAR_1);
    FUNC_0(VAR_2);
  }
}
