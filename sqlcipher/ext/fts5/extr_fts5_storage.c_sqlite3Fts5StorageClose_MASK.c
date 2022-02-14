
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * aStmt; } ;
typedef TYPE_1__ Fts5Storage ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(Fts5Storage *VAR_1){
  int VAR_2 = VAR_0;
  if( VAR_1 ){
    int VAR_3;


    for(VAR_3=0; VAR_3<FUNC_0(VAR_1->aStmt); VAR_3++){
      FUNC_1(VAR_1->aStmt[VAR_3]);
    }

    FUNC_2(VAR_1);
  }
  return VAR_2;
}
