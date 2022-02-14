
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ eType; scalar_t__ eStart; scalar_t__ eEnd; int nBufferCol; int regPart; int iEphCsr; TYPE_7__* pOrderBy; TYPE_7__* pPartition; } ;
typedef TYPE_4__ Window ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_23__ {int nExpr; } ;
struct TYPE_22__ {int nMem; } ;
struct TYPE_21__ {TYPE_3__* pSrc; TYPE_4__* pWin; } ;
struct TYPE_19__ {TYPE_2__* a; } ;
struct TYPE_18__ {int iCursor; TYPE_1__* pTab; } ;
struct TYPE_17__ {int nCol; } ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef int KeyInfo ;
typedef TYPE_7__ ExprList ;


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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (TYPE_6__*) ;
 int * FUNC_4 (TYPE_6__*,TYPE_7__*,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int FUNC_8 (int *,int ,int,int,int) ;
 int FUNC_9 (int *,void*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_6__*,TYPE_4__*,int) ;
 int FUNC_14 (TYPE_6__*,TYPE_4__*,int,int ,int,int ) ;

__attribute__((used)) static void FUNC_15(
  Parse *VAR_17,
  Select *VAR_18,
  WhereInfo *VAR_19,
  int VAR_20,
  int VAR_21
){
  Window *VAR_22 = VAR_18->pWin;
  Vdbe *VAR_23 = FUNC_3(VAR_17);
  int VAR_24;
  int VAR_25 = VAR_18->pSrc->a[0].iCursor;
  int VAR_26 = VAR_18->pSrc->a[0].pTab->nCol;
  int VAR_27 = VAR_17->nMem+1;
  int VAR_28 = VAR_27+VAR_26;
  int VAR_29 = VAR_28+1;
  int VAR_30;
  ExprList *VAR_31 = VAR_22->pPartition;
  ExprList *VAR_32 = VAR_22->pOrderBy;

  FUNC_2( VAR_22->eType==VAR_15
      || (VAR_22->eStart==VAR_16 && VAR_22->eEnd==VAR_14)
  );

  FUNC_2( (VAR_22->eStart==VAR_16 && VAR_22->eEnd==VAR_14)
       || (VAR_22->eStart==VAR_16 && VAR_22->eEnd==VAR_16)
       || (VAR_22->eStart==VAR_14 && VAR_22->eEnd==VAR_14)
       || (VAR_22->eStart==VAR_14 && VAR_22->eEnd==VAR_16 && !VAR_32)
  );

  if( VAR_22->eEnd==VAR_16 ){
    VAR_32 = 0;
  }

  VAR_17->nMem += VAR_26 + 2;



  for(VAR_24=0; VAR_24<VAR_26; VAR_24++){
    FUNC_8(VAR_23, VAR_1, VAR_25, VAR_24, VAR_27+VAR_24);
  }


  if( VAR_31 || VAR_32 ){
    int VAR_33 = (VAR_31 ? VAR_31->nExpr : 0);
    int VAR_34 = 0;
    int VAR_35 = 0;
    int VAR_36 = (VAR_32 ? VAR_32->nExpr : 0);

    if( VAR_31 ){
      int VAR_37 = VAR_27 + VAR_22->nBufferCol;
      KeyInfo *VAR_38 = FUNC_4(VAR_17, VAR_31, 0, 0);
      VAR_30 = FUNC_8(VAR_23, VAR_2, VAR_37, VAR_22->regPart,VAR_33);
      FUNC_9(VAR_23, (void*)VAR_38, VAR_13);
      VAR_35 = FUNC_8(VAR_23, VAR_7, VAR_30+2, 0, VAR_30+2);
      FUNC_1(VAR_23);
      FUNC_13(VAR_17, VAR_22, 1);
      if( VAR_32 ){
        VAR_34 = FUNC_5(VAR_23, VAR_5);
      }
    }

    if( VAR_32 ){
      int VAR_39 = VAR_27 + VAR_22->nBufferCol + VAR_33;
      int VAR_40 = VAR_22->regPart + VAR_33;

      if( VAR_35 ) FUNC_11(VAR_23, VAR_35);
      if( VAR_22->eType==VAR_15 ){
        KeyInfo *VAR_41 = FUNC_4(VAR_17, VAR_32, 0, 0);
        VAR_30 = FUNC_8(VAR_23, VAR_2, VAR_39, VAR_40, VAR_36);
        FUNC_9(VAR_23, (void*)VAR_41, VAR_13);
        VAR_35 = FUNC_8(VAR_23, VAR_7, VAR_30+2, 0, VAR_30+2);
        FUNC_0(VAR_23);
      }else{
        VAR_35 = 0;
      }
      FUNC_13(VAR_17, VAR_22, VAR_22->eStart==VAR_14);
      if( VAR_34 ) FUNC_11(VAR_23, VAR_34);
    }

    FUNC_7(VAR_23, VAR_12, VAR_22->iEphCsr,FUNC_10(VAR_23)+3);
    FUNC_0(VAR_23);
    FUNC_7(VAR_23, VAR_4, VAR_20, VAR_21);
    FUNC_7(VAR_23, VAR_10, VAR_22->iEphCsr, FUNC_10(VAR_23)-1);
    FUNC_0(VAR_23);

    FUNC_6(VAR_23, VAR_11, VAR_22->iEphCsr);
    FUNC_8(
        VAR_23, VAR_3, VAR_27+VAR_22->nBufferCol, VAR_22->regPart, VAR_33+VAR_36-1
    );

    if( VAR_35 ) FUNC_11(VAR_23, VAR_35);
  }


  FUNC_14(VAR_17, VAR_22, -1, 0, VAR_27, 0);


  if( VAR_22->nBufferCol>0 ){
    FUNC_8(VAR_23, VAR_8, VAR_27, VAR_22->nBufferCol, VAR_28);
  }else{
    FUNC_7(VAR_23, VAR_0, 0, VAR_28);
    FUNC_9(VAR_23, (void*)"", 0);
  }
  FUNC_7(VAR_23, VAR_9, VAR_22->iEphCsr, VAR_29);
  FUNC_8(VAR_23, VAR_6, VAR_22->iEphCsr, VAR_28, VAR_29);


  FUNC_12(VAR_19);

  FUNC_13(VAR_17, VAR_22, 1);
  FUNC_7(VAR_23, VAR_12, VAR_22->iEphCsr,FUNC_10(VAR_23)+3);
  FUNC_0(VAR_23);
  FUNC_7(VAR_23, VAR_4, VAR_20, VAR_21);
  FUNC_7(VAR_23, VAR_10, VAR_22->iEphCsr, FUNC_10(VAR_23)-1);
  FUNC_0(VAR_23);
}
