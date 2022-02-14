
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ i16 ;
typedef int Vdbe ;
typedef int Trigger ;
struct TYPE_22__ {int nCol; scalar_t__ pSelect; int zName; } ;
typedef TYPE_1__ Table ;
struct TYPE_23__ {int nMem; scalar_t__ nested; int * pVdbe; } ;
typedef TYPE_2__ Parse ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,int,TYPE_1__*,int,scalar_t__,int) ;
 int FUNC_6 (int *,TYPE_1__*,int,int,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int ,int,int ,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int,int ,int ,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,int,int,int ,int) ;
 int FUNC_12 (TYPE_2__*,int *,int ,int ,int,TYPE_1__*,scalar_t__) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,int ,int,int) ;
 int FUNC_15 (int *,scalar_t__,int,int,int,scalar_t__) ;
 int FUNC_16 (int *,char*,int ) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int *,int) ;
 scalar_t__ FUNC_21 (int ,char*) ;
 int FUNC_22 (int) ;

void FUNC_23(
  Parse *VAR_13,
  Table *VAR_14,
  Trigger *VAR_15,
  int VAR_16,
  int VAR_17,
  int VAR_18,
  i16 VAR_19,
  u8 VAR_20,
  u8 VAR_21,
  u8 VAR_22,
  int VAR_23
){
  Vdbe *VAR_24 = VAR_13->pVdbe;
  int VAR_25 = 0;
  int VAR_26;
  u8 VAR_27;


  FUNC_4( VAR_24 );
  FUNC_3((VAR_24, "BEGIN: GenRowDel(%d,%d,%d,%d)",
                         VAR_16, VAR_17, VAR_18, (int)VAR_19));




  VAR_26 = FUNC_19(VAR_13);
  VAR_27 = FUNC_0(VAR_14) ? VAR_7 : VAR_8;
  if( VAR_22==VAR_1 ){
    FUNC_15(VAR_24, VAR_27, VAR_16, VAR_26, VAR_18, VAR_19);
    FUNC_2(VAR_24, VAR_27==VAR_7);
    FUNC_2(VAR_24, VAR_27==VAR_8);
  }



  if( FUNC_10(VAR_13, VAR_14, 0, 0) || VAR_15 ){
    u32 VAR_28;
    int VAR_29;
    int VAR_30;



    VAR_28 = FUNC_12(
        VAR_13, VAR_15, 0, 0, VAR_12|VAR_11, VAR_14, VAR_21
    );
    VAR_28 |= FUNC_9(VAR_13, VAR_14);
    VAR_25 = VAR_13->nMem+1;
    VAR_13->nMem += (1 + VAR_14->nCol);



    FUNC_14(VAR_24, VAR_5, VAR_18, VAR_25);
    for(VAR_29=0; VAR_29<VAR_14->nCol; VAR_29++){
      FUNC_22( VAR_28!=0xffffffff && VAR_29==31 );
      FUNC_22( VAR_28!=0xffffffff && VAR_29==32 );
      if( VAR_28==0xffffffff || (VAR_29<=31 && (VAR_28 & FUNC_1(VAR_29))!=0) ){
        FUNC_6(VAR_24, VAR_14, VAR_16, VAR_29, VAR_25+VAR_29+1);
      }
    }


    VAR_30 = FUNC_18(VAR_24);
    FUNC_5(VAR_13, VAR_15,
        VAR_10, 0, VAR_12, VAR_14, VAR_25, VAR_21, VAR_26
    );
    if( VAR_30<FUNC_18(VAR_24) ){
      FUNC_15(VAR_24, VAR_27, VAR_16, VAR_26, VAR_18, VAR_19);
      FUNC_2(VAR_24, VAR_27==VAR_7);
      FUNC_2(VAR_24, VAR_27==VAR_8);
      FUNC_22( VAR_23>=0 );
      VAR_23 = -1;
    }




    FUNC_8(VAR_13, VAR_14, VAR_25, 0, 0, 0);
  }
  if( VAR_14->pSelect==0 ){
    u8 VAR_31 = 0;
    FUNC_11(VAR_13, VAR_14, VAR_16, VAR_17,0,VAR_23);
    FUNC_14(VAR_24, VAR_6, VAR_16, (VAR_20?VAR_3:0));
    if( VAR_13->nested==0 || 0==FUNC_21(VAR_14->zName, "sqlite_stat1") ){
      FUNC_16(VAR_24, (char*)VAR_14, VAR_9);
    }
    if( VAR_22!=VAR_1 ){
      FUNC_17(VAR_24, VAR_2);
    }
    if( VAR_23>=0 && VAR_23!=VAR_16 ){
      FUNC_13(VAR_24, VAR_6, VAR_23);
    }
    if( VAR_22==VAR_0 ) VAR_31 |= VAR_4;
    FUNC_17(VAR_24, VAR_31);
  }




  FUNC_7(VAR_13, VAR_14, 0, VAR_25, 0, 0);


  FUNC_5(VAR_13, VAR_15,
      VAR_10, 0, VAR_11, VAR_14, VAR_25, VAR_21, VAR_26
  );




  FUNC_20(VAR_24, VAR_26);
  FUNC_3((VAR_24, "END: GenRowDel()"));
}
