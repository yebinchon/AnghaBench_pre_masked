
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_22__ {int iPKey; } ;
typedef TYPE_1__ Table ;
struct TYPE_26__ {int mayAbort; } ;
struct TYPE_25__ {int isDeferred; int nCol; TYPE_1__* pFrom; } ;
struct TYPE_24__ {int tnum; int* aiColumn; } ;
struct TYPE_23__ {int nTab; int isMultiWrite; int pToplevel; } ;
typedef TYPE_2__ Parse ;
typedef int KeyInfo ;
typedef TYPE_3__ Index ;
typedef TYPE_4__ FKey ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,char*,int ) ;
 char* FUNC_5 (int *,TYPE_3__*) ;
 int * FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,int,int,TYPE_1__*,int ) ;
 TYPE_7__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int,int) ;
 int FUNC_13 (int *,int ,int,int,int) ;
 int FUNC_14 (int *,int ,int,int,int,int ) ;
 int FUNC_15 (int *,int,char*,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;

__attribute__((used)) static void FUNC_21(
  Parse *VAR_20,
  int VAR_21,
  Table *VAR_22,
  Index *VAR_23,
  FKey *VAR_24,
  int *VAR_25,
  int VAR_26,
  int VAR_27,
  int VAR_28
){
  int VAR_29;
  Vdbe *VAR_30 = FUNC_3(VAR_20);
  int VAR_31 = VAR_20->nTab - 1;
  int VAR_32 = FUNC_19(VAR_30);
  if( VAR_27<0 ){
    FUNC_12(VAR_30, VAR_5, VAR_24->isDeferred, VAR_32);
  }
  for(VAR_29=0; VAR_29<VAR_24->nCol; VAR_29++){
    int VAR_33 = VAR_25[VAR_29] + VAR_26 + 1;
    FUNC_12(VAR_30, VAR_8, VAR_33, VAR_32);
  }

  if( VAR_28==0 ){
    if( VAR_23==0 ){


      int VAR_34;
      int VAR_35 = FUNC_2(VAR_20);






      FUNC_12(VAR_30, VAR_14, VAR_25[0]+1+VAR_26, VAR_35);
      VAR_34 = FUNC_12(VAR_30, VAR_10, VAR_35, 0);





      if( VAR_22==VAR_24->pFrom && VAR_27==1 ){
        FUNC_13(VAR_30, VAR_3, VAR_26, VAR_32, VAR_35);
      }

      FUNC_7(VAR_20, VAR_31, VAR_21, VAR_22, VAR_13);
      FUNC_13(VAR_30, VAR_12, VAR_31, 0, VAR_35);
      FUNC_12(VAR_30, VAR_7, 0, VAR_32);
      FUNC_18(VAR_30, FUNC_17(VAR_30)-2);
      FUNC_18(VAR_30, VAR_34);
      FUNC_10(VAR_20, VAR_35);
    }else{
      int VAR_36 = VAR_24->nCol;
      int VAR_37 = FUNC_1(VAR_20, VAR_36);
      int VAR_38 = FUNC_2(VAR_20);
      KeyInfo *VAR_39 = FUNC_6(VAR_20, VAR_23);

      FUNC_13(VAR_30, VAR_13, VAR_31, VAR_23->tnum, VAR_21);
      FUNC_15(VAR_30, -1, (char*)VAR_39, VAR_15);
      for(VAR_29=0; VAR_29<VAR_36; VAR_29++){
        FUNC_12(VAR_30, VAR_2, VAR_25[VAR_29]+1+VAR_26, VAR_37+VAR_29);
      }
      if( VAR_22==VAR_24->pFrom && VAR_27==1 ){
        int VAR_40 = FUNC_17(VAR_30) + VAR_36 + 1;
        for(VAR_29=0; VAR_29<VAR_36; VAR_29++){
          int VAR_41 = VAR_25[VAR_29]+1+VAR_26;
          int VAR_42 = VAR_23->aiColumn[VAR_29]+1+VAR_26;
          FUNC_0( VAR_25[VAR_29]!=VAR_22->iPKey );
          if( VAR_23->aiColumn[VAR_29]==VAR_22->iPKey ){

            VAR_42 = VAR_26;
          }
          FUNC_13(VAR_30, VAR_11, VAR_41, VAR_40, VAR_42);
          FUNC_16(VAR_30, VAR_19);
        }
        FUNC_12(VAR_30, VAR_7, 0, VAR_32);
      }

      FUNC_13(VAR_30, VAR_9, VAR_37, VAR_36, VAR_38);
      FUNC_15(VAR_30, -1, FUNC_5(VAR_30,VAR_23), VAR_17);
      FUNC_14(VAR_30, VAR_6, VAR_31, VAR_32, VAR_38, 0);

      FUNC_10(VAR_20, VAR_38);
      FUNC_9(VAR_20, VAR_37, VAR_36);
    }
  }

  if( !VAR_24->isDeferred && !VAR_20->pToplevel && !VAR_20->isMultiWrite ){




    FUNC_0( VAR_27==1 );
    FUNC_4(VAR_20, VAR_18,
        VAR_0, "foreign key constraint failed", VAR_16
    );
  }else{
    if( VAR_27>0 && VAR_24->isDeferred==0 ){
      FUNC_8(VAR_20)->mayAbort = 1;
    }
    FUNC_12(VAR_30, VAR_4, VAR_24->isDeferred, VAR_27);
  }

  FUNC_20(VAR_30, VAR_32);
  FUNC_11(VAR_30, VAR_1, VAR_31);
}
