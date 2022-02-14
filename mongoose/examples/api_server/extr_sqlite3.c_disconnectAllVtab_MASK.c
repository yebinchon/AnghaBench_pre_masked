
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int nDb; TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Table ;
struct TYPE_11__ {int tblHash; } ;
struct TYPE_9__ {TYPE_3__* pSchema; } ;
typedef TYPE_3__ Schema ;
typedef int HashElem ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(sqlite3 *VAR_0){

  int VAR_1;
  FUNC_2(VAR_0);
  for(VAR_1=0; VAR_1<VAR_0->nDb; VAR_1++){
    Schema *VAR_2 = VAR_0->aDb[VAR_1].pSchema;
    if( VAR_0->aDb[VAR_1].pSchema ){
      HashElem *VAR_3;
      for(VAR_3=FUNC_6(&VAR_2->tblHash); VAR_3; VAR_3=FUNC_7(VAR_3)){
        Table *VAR_4 = (Table *)FUNC_5(VAR_3);
        if( FUNC_0(VAR_4) ) FUNC_4(VAR_0, VAR_4);
      }
    }
  }
  FUNC_3(VAR_0);



}
