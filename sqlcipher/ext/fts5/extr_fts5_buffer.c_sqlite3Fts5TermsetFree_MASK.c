
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {struct TYPE_6__* pNext; struct TYPE_6__** apHash; } ;
typedef TYPE_1__ Fts5TermsetEntry ;
typedef TYPE_1__ Fts5Termset ;


 size_t FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Fts5Termset *VAR_0){
  if( VAR_0 ){
    u32 VAR_1;
    for(VAR_1=0; VAR_1<FUNC_0(VAR_0->apHash); VAR_1++){
      Fts5TermsetEntry *VAR_2 = VAR_0->apHash[VAR_1];
      while( VAR_2 ){
        Fts5TermsetEntry *VAR_3 = VAR_2;
        VAR_2 = VAR_2->pNext;
        FUNC_1(VAR_3);
      }
    }
    FUNC_1(VAR_0);
  }
}
