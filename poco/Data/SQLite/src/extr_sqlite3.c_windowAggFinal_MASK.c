
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pMWin; int * pParse; } ;
typedef TYPE_1__ WindowCodeArg ;
struct TYPE_7__ {scalar_t__ regStartRowid; scalar_t__ eStart; int regResult; int csrApp; int regAccum; TYPE_5__* pFunc; scalar_t__ regApp; struct TYPE_7__* pNextWin; } ;
typedef TYPE_2__ Window ;
typedef int Vdbe ;
struct TYPE_8__ {int funcFlags; } ;
typedef int Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int *,int ,int,int,int) ;
 int FUNC_6 (int *,TYPE_5__*,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(WindowCodeArg *VAR_9, int VAR_10){
  Parse *VAR_11 = VAR_9->pParse;
  Window *VAR_12 = VAR_9->pMWin;
  Vdbe *VAR_13 = FUNC_2(VAR_11);
  Window *VAR_14;

  for(VAR_14=VAR_12; VAR_14; VAR_14=VAR_14->pNextWin){
    if( VAR_12->regStartRowid==0
     && (VAR_14->pFunc->funcFlags & VAR_7)
     && (VAR_14->eStart!=VAR_8)
    ){
      FUNC_4(VAR_13, VAR_5, 0, VAR_14->regResult);
      FUNC_3(VAR_13, VAR_4, VAR_14->csrApp);
      FUNC_0(VAR_13);
      FUNC_5(VAR_13, VAR_2, VAR_14->csrApp, 0, VAR_14->regResult);
      FUNC_8(VAR_13, FUNC_7(VAR_13)-2);
    }else if( VAR_14->regApp ){
      FUNC_1( VAR_12->regStartRowid==0 );
    }else{
      int VAR_15 = FUNC_9(VAR_14);
      if( VAR_10 ){
        FUNC_4(VAR_13, VAR_0, VAR_14->regAccum, VAR_15);
        FUNC_6(VAR_13, VAR_14->pFunc, VAR_6);
        FUNC_4(VAR_13, VAR_3, VAR_14->regAccum, VAR_14->regResult);
        FUNC_4(VAR_13, VAR_5, 0, VAR_14->regAccum);
      }else{
        FUNC_5(VAR_13, VAR_1,VAR_14->regAccum,VAR_15,VAR_14->regResult);
        FUNC_6(VAR_13, VAR_14->pFunc, VAR_6);
      }
    }
  }
}
