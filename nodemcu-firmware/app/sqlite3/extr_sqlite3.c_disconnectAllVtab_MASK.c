
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int nDb; int aModule; TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Table ;
struct TYPE_14__ {int * pEpoTab; } ;
struct TYPE_13__ {int tblHash; } ;
struct TYPE_11__ {TYPE_3__* pSchema; } ;
typedef TYPE_3__ Schema ;
typedef TYPE_4__ Module ;
typedef int HashElem ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(sqlite3 *VAR_0){

  int VAR_1;
  HashElem *VAR_2;
  FUNC_2(VAR_0);
  for(VAR_1=0; VAR_1<VAR_0->nDb; VAR_1++){
    Schema *VAR_3 = VAR_0->aDb[VAR_1].pSchema;
    if( VAR_0->aDb[VAR_1].pSchema ){
      for(VAR_2=FUNC_7(&VAR_3->tblHash); VAR_2; VAR_2=FUNC_8(VAR_2)){
        Table *VAR_4 = (Table *)FUNC_6(VAR_2);
        if( FUNC_0(VAR_4) ) FUNC_4(VAR_0, VAR_4);
      }
    }
  }
  for(VAR_2=FUNC_7(&VAR_0->aModule); VAR_2; VAR_2=FUNC_8(VAR_2)){
    Module *VAR_5 = (Module *)FUNC_6(VAR_2);
    if( VAR_5->pEpoTab ){
      FUNC_4(VAR_0, VAR_5->pEpoTab);
    }
  }
  FUNC_5(VAR_0);
  FUNC_3(VAR_0);



}
