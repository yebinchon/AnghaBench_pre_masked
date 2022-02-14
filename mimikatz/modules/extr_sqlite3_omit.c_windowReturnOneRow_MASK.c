
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int csrApp; int regResult; int iEphCsr; int iArgCol; int regApp; TYPE_3__* pOwner; TYPE_5__* pFunc; struct TYPE_10__* pNextWin; } ;
typedef TYPE_4__ Window ;
typedef int Vdbe ;
struct TYPE_11__ {scalar_t__ zName; } ;
struct TYPE_8__ {TYPE_1__* pList; } ;
struct TYPE_9__ {TYPE_2__ x; } ;
struct TYPE_7__ {int nExpr; } ;
typedef int Parse ;
typedef TYPE_5__ FuncDef ;


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
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int *,int,int,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;

__attribute__((used)) static void FUNC_11(
  Parse *VAR_14,
  Window *VAR_15,
  int VAR_16,
  int VAR_17
){
  Vdbe *VAR_18 = FUNC_4(VAR_14);
  Window *VAR_19;
  for(VAR_19=VAR_15; VAR_19; VAR_19=VAR_19->pNextWin){
    FuncDef *VAR_20 = VAR_19->pFunc;
    if( VAR_20->zName==VAR_13
     || VAR_20->zName==VAR_10
    ){
      int VAR_21 = VAR_19->csrApp;
      int VAR_22 = FUNC_8(VAR_14);
      int VAR_23 = FUNC_3(VAR_14);
      FUNC_6(VAR_18, VAR_6, 0, VAR_19->regResult);

      if( VAR_20->zName==VAR_13 ){
        FUNC_7(VAR_18, VAR_2, VAR_15->iEphCsr, VAR_19->iArgCol+1,VAR_23);
        FUNC_10(VAR_14, VAR_23, 2);
      }else{
        FUNC_6(VAR_18, VAR_5, 1, VAR_23);
      }
      FUNC_7(VAR_18, VAR_0, VAR_23, VAR_19->regApp, VAR_23);
      FUNC_7(VAR_18, VAR_4, VAR_19->regApp+1, VAR_22, VAR_23);
      FUNC_1(VAR_18);
      FUNC_7(VAR_18, VAR_8, VAR_21, 0, VAR_23);
      FUNC_2(VAR_18);
      FUNC_7(VAR_18, VAR_2, VAR_21, VAR_19->iArgCol, VAR_19->regResult);
      FUNC_9(VAR_18, VAR_22);
      FUNC_5(VAR_14, VAR_23);
    }
    else if( VAR_20->zName==VAR_12 || VAR_20->zName==VAR_11 ){
      int VAR_24 = VAR_19->pOwner->x.pList->nExpr;
      int VAR_25 = VAR_15->iEphCsr;
      int VAR_26 = VAR_19->csrApp;
      int VAR_27 = FUNC_8(VAR_14);
      int VAR_28 = FUNC_3(VAR_14);

      if( VAR_24<3 ){
        FUNC_6(VAR_18, VAR_6, 0, VAR_19->regResult);
      }else{
        FUNC_7(VAR_18, VAR_2, VAR_25, VAR_19->iArgCol+2, VAR_19->regResult);
      }
      FUNC_6(VAR_18, VAR_7, VAR_25, VAR_28);
      if( VAR_24<2 ){
        int VAR_29 = (VAR_20->zName==VAR_12 ? 1 : -1);
        FUNC_6(VAR_18, VAR_1, VAR_28, VAR_29);
      }else{
        int VAR_30 = (VAR_20->zName==VAR_12 ? VAR_0 : VAR_9);
        int VAR_31 = FUNC_3(VAR_14);
        FUNC_7(VAR_18, VAR_2, VAR_25, VAR_19->iArgCol+1, VAR_31);
        FUNC_7(VAR_18, VAR_30, VAR_31, VAR_28, VAR_28);
        FUNC_5(VAR_14, VAR_31);
      }

      FUNC_7(VAR_18, VAR_8, VAR_26, VAR_27, VAR_28);
      FUNC_0(VAR_18);
      FUNC_7(VAR_18, VAR_2, VAR_26, VAR_19->iArgCol, VAR_19->regResult);
      FUNC_9(VAR_18, VAR_27);
      FUNC_5(VAR_14, VAR_28);
    }
  }
  FUNC_6(VAR_18, VAR_3, VAR_16, VAR_17);
}
