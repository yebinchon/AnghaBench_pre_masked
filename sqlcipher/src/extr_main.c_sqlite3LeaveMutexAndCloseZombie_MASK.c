
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct Db {TYPE_4__* pSchema; scalar_t__ pBt; } ;
struct TYPE_27__ {TYPE_3__* pStart; scalar_t__ bMalloced; } ;
struct TYPE_26__ {TYPE_3__* zAuthPW; TYPE_3__* zAuthUser; } ;
struct TYPE_28__ {scalar_t__ magic; int nDb; TYPE_2__ lookaside; int mutex; struct Db* aDb; TYPE_1__ auth; int pErr; int aModule; int aCollSeq; int aFunc; struct Db* aDbStatic; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_29__ {int pAux; int (* xDestroy ) (int ) ;int pUser; int (* xDel ) (int ) ;struct TYPE_29__* pNext; } ;
typedef TYPE_4__ Module ;
typedef int HashElem ;
typedef TYPE_4__ FuncDef ;
typedef TYPE_4__ CollSeq ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 TYPE_4__* FUNC_20 (int *) ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 (int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;

void FUNC_25(sqlite3 *VAR_4){
  HashElem *VAR_5;
  int VAR_6;





  if( VAR_4->magic!=VAR_2 || FUNC_1(VAR_4) ){
    FUNC_19(VAR_4->mutex);
    return;
  }
  FUNC_12(VAR_4, VAR_3);


  FUNC_5(VAR_4);


  for(VAR_6=0; VAR_6<VAR_4->nDb; VAR_6++){
    struct Db *VAR_7 = &VAR_4->aDb[VAR_6];
    if( VAR_7->pBt ){
      FUNC_3(VAR_7->pBt);
      VAR_7->pBt = 0;
      if( VAR_6!=1 ){
        VAR_7->pSchema = 0;
      }
    }
  }

  if( VAR_4->aDb[1].pSchema ){
    FUNC_13(VAR_4->aDb[1].pSchema);
  }
  FUNC_16(VAR_4);


  FUNC_6(VAR_4);
  FUNC_0( VAR_4->nDb<=2 );
  FUNC_0( VAR_4->aDb==VAR_4->aDbStatic );




  FUNC_7(VAR_4);

  for(VAR_5=FUNC_21(&VAR_4->aFunc); VAR_5; VAR_5=FUNC_22(VAR_5)){
    FuncDef *VAR_8, *VAR_9;
    VAR_9 = FUNC_20(VAR_5);
    do{
      FUNC_2(VAR_4, VAR_9);
      VAR_8 = VAR_9->pNext;
      FUNC_8(VAR_4, VAR_9);
      VAR_9 = VAR_8;
    }while( VAR_9 );
  }
  FUNC_10(&VAR_4->aFunc);
  for(VAR_5=FUNC_21(&VAR_4->aCollSeq); VAR_5; VAR_5=FUNC_22(VAR_5)){
    CollSeq *VAR_10 = (CollSeq *)FUNC_20(VAR_5);

    for(VAR_6=0; VAR_6<3; VAR_6++){
      if( VAR_10[VAR_6].xDel ){
        VAR_10[VAR_6].xDel(VAR_10[VAR_6].pUser);
      }
    }
    FUNC_8(VAR_4, VAR_10);
  }
  FUNC_10(&VAR_4->aCollSeq);

  for(VAR_5=FUNC_21(&VAR_4->aModule); VAR_5; VAR_5=FUNC_22(VAR_5)){
    Module *VAR_11 = (Module *)FUNC_20(VAR_5);
    if( VAR_11->xDestroy ){
      VAR_11->xDestroy(VAR_11->pAux);
    }
    FUNC_15(VAR_4, VAR_11);
    FUNC_8(VAR_4, VAR_11);
  }
  FUNC_10(&VAR_4->aModule);


  FUNC_9(VAR_4, VAR_3);
  FUNC_14(VAR_4->pErr);
  FUNC_4(VAR_4);





  VAR_4->magic = VAR_1;







  FUNC_8(VAR_4, VAR_4->aDb[1].pSchema);
  FUNC_19(VAR_4->mutex);
  VAR_4->magic = VAR_0;
  FUNC_18(VAR_4->mutex);
  FUNC_0( FUNC_11(VAR_4,0)==0 );
  if( VAR_4->lookaside.bMalloced ){
    FUNC_17(VAR_4->lookaside.pStart);
  }
  FUNC_17(VAR_4);
}
