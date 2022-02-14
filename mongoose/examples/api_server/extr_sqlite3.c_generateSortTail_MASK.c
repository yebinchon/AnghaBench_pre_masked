
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_16__ {int iECursor; int nExpr; } ;
struct TYPE_15__ {int nMem; int nTab; } ;
struct TYPE_14__ {int selFlags; TYPE_4__* pOrderBy; } ;
struct TYPE_13__ {int eDest; int iSDParm; int iSdst; int affSdst; } ;
typedef TYPE_1__ SelectDest ;
typedef TYPE_2__ Select ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;


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


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (TYPE_3__*,int,int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int FUNC_8 (int *,int ,int,int,int) ;
 int FUNC_9 (int *,int ,int,int,int,int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(
  Parse *VAR_19,
  Select *VAR_20,
  Vdbe *VAR_21,
  int VAR_22,
  SelectDest *VAR_23
){
  int VAR_24 = FUNC_11(VAR_21);
  int VAR_25 = FUNC_11(VAR_21);
  int VAR_26;
  int VAR_27;
  int VAR_28 = 0;
  ExprList *VAR_29 = VAR_20->pOrderBy;

  int VAR_30 = VAR_23->eDest;
  int VAR_31 = VAR_23->iSDParm;

  int VAR_32;
  int VAR_33;

  VAR_27 = VAR_29->iECursor;
  VAR_32 = FUNC_4(VAR_19);
  if( VAR_30==VAR_18 || VAR_30==VAR_17 ){
    VAR_28 = VAR_19->nTab++;
    FUNC_8(VAR_21, VAR_9, VAR_28, VAR_32, VAR_22);
    VAR_33 = 0;
  }else{
    VAR_33 = FUNC_4(VAR_19);
  }
  if( VAR_20->selFlags & VAR_16 ){
    int VAR_34 = ++VAR_19->nMem;
    int VAR_35 = VAR_19->nTab++;
    FUNC_8(VAR_21, VAR_9, VAR_35, VAR_34, VAR_29->nExpr+2);
    VAR_26 = 1 + FUNC_7(VAR_21, VAR_14, VAR_27, VAR_24);
    FUNC_1(VAR_21, VAR_20, VAR_25);
    FUNC_7(VAR_21, VAR_12, VAR_27, VAR_34);
    FUNC_8(VAR_21, VAR_3, VAR_35, VAR_29->nExpr+1, VAR_32);
    FUNC_10(VAR_21, VAR_1);
  }else{
    VAR_26 = 1 + FUNC_7(VAR_21, VAR_11, VAR_27, VAR_24);
    FUNC_1(VAR_21, VAR_20, VAR_25);
    FUNC_8(VAR_21, VAR_3, VAR_27, VAR_29->nExpr+1, VAR_32);
  }
  switch( VAR_30 ){
    case 128:
    case 131: {
      FUNC_13( VAR_30==128 );
      FUNC_13( VAR_30==131 );
      FUNC_7(VAR_21, VAR_7, VAR_31, VAR_33);
      FUNC_8(VAR_21, VAR_5, VAR_31, VAR_32, VAR_33);
      FUNC_10(VAR_21, VAR_0);
      break;
    }

    case 129: {
      FUNC_0( VAR_22==1 );
      FUNC_9(VAR_21, VAR_6, VAR_32, 1, VAR_33,
                        &VAR_23->affSdst, 1);
      FUNC_2(VAR_19, VAR_32, 1);
      FUNC_7(VAR_21, VAR_4, VAR_31, VAR_33);
      break;
    }
    case 130: {
      FUNC_0( VAR_22==1 );
      FUNC_3(VAR_19, VAR_32, VAR_31, 1);

      break;
    }

    default: {
      int VAR_36;
      FUNC_0( VAR_30==VAR_18 || VAR_30==VAR_17 );
      FUNC_13( VAR_30==VAR_18 );
      FUNC_13( VAR_30==VAR_17 );
      for(VAR_36=0; VAR_36<VAR_22; VAR_36++){
        FUNC_0( VAR_32!=VAR_23->iSdst+VAR_36 );
        FUNC_8(VAR_21, VAR_3, VAR_28, VAR_36, VAR_23->iSdst+VAR_36);
        if( VAR_36==0 ){
          FUNC_10(VAR_21, VAR_1);
        }
      }
      if( VAR_30==VAR_18 ){
        FUNC_7(VAR_21, VAR_10, VAR_23->iSdst, VAR_22);
        FUNC_2(VAR_19, VAR_23->iSdst, VAR_22);
      }else{
        FUNC_6(VAR_21, VAR_15, VAR_23->iSDParm);
      }
      break;
    }
  }
  FUNC_5(VAR_19, VAR_32);
  FUNC_5(VAR_19, VAR_33);



  FUNC_12(VAR_21, VAR_25);
  if( VAR_20->selFlags & VAR_16 ){
    FUNC_7(VAR_21, VAR_13, VAR_27, VAR_26);
  }else{
    FUNC_7(VAR_21, VAR_8, VAR_27, VAR_26);
  }
  FUNC_12(VAR_21, VAR_24);
  if( VAR_30==VAR_18 || VAR_30==VAR_17 ){
    FUNC_7(VAR_21, VAR_2, VAR_28, 0);
  }
}
