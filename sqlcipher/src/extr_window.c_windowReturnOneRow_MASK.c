
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int regGosub; int addrGosub; int * pParse; int * pVdbe; TYPE_5__* pMWin; } ;
typedef TYPE_4__ WindowCodeArg ;
struct TYPE_13__ {int csrApp; int regResult; int iEphCsr; int iArgCol; int regApp; TYPE_3__* pOwner; TYPE_6__* pFunc; struct TYPE_13__* pNextWin; scalar_t__ regStartRowid; } ;
typedef TYPE_5__ Window ;
typedef int Vdbe ;
struct TYPE_14__ {scalar_t__ zName; } ;
struct TYPE_10__ {TYPE_1__* pList; } ;
struct TYPE_11__ {TYPE_2__ x; } ;
struct TYPE_9__ {int nExpr; } ;
typedef int Parse ;
typedef TYPE_6__ FuncDef ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int,int) ;
 int FUNC_6 (int *,int,int,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_11(WindowCodeArg *VAR_14){
  Window *VAR_15 = VAR_14->pMWin;
  Vdbe *VAR_16 = VAR_14->pVdbe;

  if( VAR_15->regStartRowid ){
    FUNC_10(VAR_14);
  }else{
    Parse *VAR_17 = VAR_14->pParse;
    Window *VAR_18;

    for(VAR_18=VAR_15; VAR_18; VAR_18=VAR_18->pNextWin){
      FuncDef *VAR_19 = VAR_18->pFunc;
      if( VAR_19->zName==VAR_13
       || VAR_19->zName==VAR_10
      ){
        int VAR_20 = VAR_18->csrApp;
        int VAR_21 = FUNC_7(VAR_17);
        int VAR_22 = FUNC_3(VAR_17);
        FUNC_5(VAR_16, VAR_6, 0, VAR_18->regResult);

        if( VAR_19->zName==VAR_13 ){
          FUNC_6(VAR_16, VAR_2,VAR_15->iEphCsr,VAR_18->iArgCol+1,VAR_22);
          FUNC_9(VAR_17, VAR_22, 2);
        }else{
          FUNC_5(VAR_16, VAR_5, 1, VAR_22);
        }
        FUNC_6(VAR_16, VAR_0, VAR_22, VAR_18->regApp, VAR_22);
        FUNC_6(VAR_16, VAR_4, VAR_18->regApp+1, VAR_21, VAR_22);
        FUNC_1(VAR_16);
        FUNC_6(VAR_16, VAR_8, VAR_20, 0, VAR_22);
        FUNC_2(VAR_16);
        FUNC_6(VAR_16, VAR_2, VAR_20, VAR_18->iArgCol, VAR_18->regResult);
        FUNC_8(VAR_16, VAR_21);
        FUNC_4(VAR_17, VAR_22);
      }
      else if( VAR_19->zName==VAR_12 || VAR_19->zName==VAR_11 ){
        int VAR_23 = VAR_18->pOwner->x.pList->nExpr;
        int VAR_24 = VAR_18->csrApp;
        int VAR_25 = FUNC_7(VAR_17);
        int VAR_26 = FUNC_3(VAR_17);
        int VAR_27 = VAR_15->iEphCsr;

        if( VAR_23<3 ){
          FUNC_5(VAR_16, VAR_6, 0, VAR_18->regResult);
        }else{
          FUNC_6(VAR_16, VAR_2, VAR_27,VAR_18->iArgCol+2,VAR_18->regResult);
        }
        FUNC_5(VAR_16, VAR_7, VAR_27, VAR_26);
        if( VAR_23<2 ){
          int VAR_28 = (VAR_19->zName==VAR_12 ? 1 : -1);
          FUNC_5(VAR_16, VAR_1, VAR_26, VAR_28);
        }else{
          int VAR_29 = (VAR_19->zName==VAR_12 ? VAR_0 : VAR_9);
          int VAR_30 = FUNC_3(VAR_17);
          FUNC_6(VAR_16, VAR_2, VAR_27, VAR_18->iArgCol+1, VAR_30);
          FUNC_6(VAR_16, VAR_29, VAR_30, VAR_26, VAR_26);
          FUNC_4(VAR_17, VAR_30);
        }

        FUNC_6(VAR_16, VAR_8, VAR_24, VAR_25, VAR_26);
        FUNC_0(VAR_16);
        FUNC_6(VAR_16, VAR_2, VAR_24, VAR_18->iArgCol, VAR_18->regResult);
        FUNC_8(VAR_16, VAR_25);
        FUNC_4(VAR_17, VAR_26);
      }
    }
  }
  FUNC_5(VAR_16, VAR_3, VAR_14->regGosub, VAR_14->addrGosub);
}
