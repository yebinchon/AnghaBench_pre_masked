
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_14__ {int iArgCol; int iEphCsr; scalar_t__ regStartRowid; scalar_t__ eStart; int regApp; int csrApp; int regAccum; TYPE_4__* pOwner; scalar_t__ pFilter; TYPE_6__* pFunc; struct TYPE_14__* pNextWin; } ;
typedef TYPE_5__ Window ;
typedef int Vdbe ;
struct TYPE_15__ {scalar_t__ zName; int funcFlags; scalar_t__ xSFunc; } ;
struct TYPE_12__ {TYPE_2__* pList; } ;
struct TYPE_13__ {TYPE_3__ x; } ;
struct TYPE_11__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_10__ {int pExpr; } ;
typedef int Parse ;
typedef TYPE_6__ FuncDef ;
typedef int CollSeq ;


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
 scalar_t__ VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int ,int,int,int) ;
 int FUNC_10 (int *,int ,int ,int ,int ,char const*,int ) ;
 int FUNC_11 (int *,int ,int,int ,int,int) ;
 int FUNC_12 (int *,TYPE_6__*,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_17(
  Parse *VAR_20,
  Window *VAR_21,
  int VAR_22,
  int VAR_23,
  int VAR_24
){
  Vdbe *VAR_25 = FUNC_5(VAR_20);
  Window *VAR_26;
  for(VAR_26=VAR_21; VAR_26; VAR_26=VAR_26->pNextWin){
    FuncDef *VAR_27 = VAR_26->pFunc;
    int VAR_28;
    int VAR_29 = FUNC_16(VAR_26);
    int VAR_30;

    for(VAR_30=0; VAR_30<VAR_29; VAR_30++){
      if( VAR_30!=1 || VAR_27->zName!=VAR_19 ){
        FUNC_9(VAR_25, VAR_4, VAR_22, VAR_26->iArgCol+VAR_30, VAR_24+VAR_30);
      }else{
        FUNC_9(VAR_25, VAR_4, VAR_21->iEphCsr, VAR_26->iArgCol+VAR_30, VAR_24+VAR_30);
      }
    }
    VAR_28 = VAR_24;

    if( VAR_21->regStartRowid==0
     && (VAR_27->funcFlags & VAR_14)
     && (VAR_26->eStart!=VAR_16)
    ){
      int VAR_31 = FUNC_7(VAR_25, VAR_8, VAR_28);
      FUNC_0(VAR_25);
      if( VAR_23==0 ){
        FUNC_8(VAR_25, VAR_0, VAR_26->regApp+1, 1);
        FUNC_8(VAR_25, VAR_10, VAR_28, VAR_26->regApp);
        FUNC_9(VAR_25, VAR_9, VAR_26->regApp, 2, VAR_26->regApp+2);
        FUNC_8(VAR_25, VAR_6, VAR_26->csrApp, VAR_26->regApp+2);
      }else{
        FUNC_11(VAR_25, VAR_11, VAR_26->csrApp, 0, VAR_28, 1);
        FUNC_1(VAR_25);
        FUNC_7(VAR_25, VAR_5, VAR_26->csrApp);
        FUNC_15(VAR_25, FUNC_14(VAR_25)-2);
      }
      FUNC_15(VAR_25, VAR_31);
    }else if( VAR_26->regApp ){
      FUNC_2( VAR_27->zName==VAR_19
           || VAR_27->zName==VAR_17
      );
      FUNC_2( VAR_23==0 || VAR_23==1 );
      FUNC_8(VAR_25, VAR_0, VAR_26->regApp+1-VAR_23, 1);
    }else if( VAR_27->xSFunc!=VAR_18 ){
      int VAR_32 = 0;
      if( VAR_26->pFilter ){
        int VAR_33;
        FUNC_2( VAR_29==0 || VAR_29==VAR_26->pOwner->x.pList->nExpr );
        FUNC_2( VAR_29 || VAR_26->pOwner->x.pList==0 );
        VAR_33 = FUNC_4(VAR_20);
        FUNC_9(VAR_25, VAR_4, VAR_22, VAR_26->iArgCol+VAR_29,VAR_33);
        VAR_32 = FUNC_9(VAR_25, VAR_7, VAR_33, 0, 1);
        FUNC_0(VAR_25);
        FUNC_6(VAR_20, VAR_33);
      }
      if( VAR_27->funcFlags & VAR_15 ){
        CollSeq *VAR_34;
        FUNC_2( VAR_29>0 );
        VAR_34 = FUNC_3(VAR_20, VAR_26->pOwner->x.pList->a[0].pExpr);
        FUNC_10(VAR_25, VAR_3, 0,0,0, (const char*)VAR_34, VAR_12);
      }
      FUNC_9(VAR_25, VAR_23? VAR_1 : VAR_2,
                        VAR_23, VAR_28, VAR_26->regAccum);
      FUNC_12(VAR_25, VAR_27, VAR_13);
      FUNC_13(VAR_25, (u8)VAR_29);
      if( VAR_32 ) FUNC_15(VAR_25, VAR_32);
    }
  }
}
