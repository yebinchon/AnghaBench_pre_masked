
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


struct TYPE_34__ {scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
typedef int sNC ;
typedef int Vdbe ;
struct TYPE_35__ {int orconf; int* aColmask; TYPE_3__* pTrigger; TYPE_5__* pProgram; struct TYPE_35__* pNext; } ;
typedef TYPE_2__ TriggerPrg ;
struct TYPE_36__ {scalar_t__ op; scalar_t__ tr_tm; int zName; int step_list; int pWhen; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_37__ {int zName; } ;
typedef TYPE_4__ Table ;
struct TYPE_40__ {TYPE_6__* pParse; } ;
struct TYPE_39__ {int pVdbe; scalar_t__ eTriggerOp; scalar_t__ nErr; int oldmask; int newmask; int nMaxArg; TYPE_2__* pTriggerPrg; int pZombieTab; int pAinc; int nTab; int nMem; int disableVtab; int nQueryLoop; int zAuthContext; struct TYPE_39__* pToplevel; TYPE_4__* pTriggerTab; TYPE_1__* db; } ;
struct TYPE_38__ {void* token; int nCsr; int nMem; int nOp; int aOp; } ;
typedef TYPE_5__ SubProgram ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ NameContext ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 int FUNC_3 (TYPE_7__*,int ,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_6__*,int *,int,int ) ;
 int * FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_1__*,char*,int ) ;
 TYPE_6__* FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (TYPE_7__*,int *) ;
 TYPE_6__* FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*,TYPE_6__*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int,TYPE_5__*) ;
 int FUNC_20 (TYPE_6__*) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int *,int *) ;
 TYPE_4__* FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_6__*,TYPE_6__*) ;

__attribute__((used)) static TriggerPrg *FUNC_25(
  Parse *VAR_8,
  Trigger *VAR_9,
  Table *VAR_10,
  int VAR_11
){
  Parse *VAR_12 = FUNC_11(VAR_8);
  sqlite3 *VAR_13 = VAR_8->db;
  TriggerPrg *VAR_14;
  Expr *VAR_15 = 0;
  Vdbe *VAR_16;
  NameContext VAR_17;
  SubProgram *VAR_18 = 0;
  Parse *VAR_19;
  int VAR_20 = 0;

  FUNC_1( VAR_9->zName==0 || VAR_10==FUNC_23(VAR_9) );
  FUNC_1( VAR_12->pVdbe );




  VAR_14 = FUNC_5(VAR_13, sizeof(TriggerPrg));
  if( !VAR_14 ) return 0;
  VAR_14->pNext = VAR_12->pTriggerPrg;
  VAR_12->pTriggerPrg = VAR_14;
  VAR_14->pProgram = VAR_18 = FUNC_5(VAR_13, sizeof(SubProgram));
  if( !VAR_18 ) return 0;
  FUNC_19(VAR_12->pVdbe, VAR_18);
  VAR_14->pTrigger = VAR_9;
  VAR_14->orconf = VAR_11;
  VAR_14->aColmask[0] = 0xffffffff;
  VAR_14->aColmask[1] = 0xffffffff;



  VAR_19 = FUNC_14(VAR_13, sizeof(Parse));
  if( !VAR_19 ) return 0;
  FUNC_3(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.pParse = VAR_19;
  VAR_19->db = VAR_13;
  VAR_19->pTriggerTab = VAR_10;
  VAR_19->pToplevel = VAR_12;
  VAR_19->zAuthContext = VAR_9->zName;
  VAR_19->eTriggerOp = VAR_9->op;
  VAR_19->nQueryLoop = VAR_8->nQueryLoop;
  VAR_19->disableVtab = VAR_8->disableVtab;

  VAR_16 = FUNC_9(VAR_19);
  if( VAR_16 ){
    FUNC_0((VAR_16, "Start: %s.%s (%s %s%s%s ON %s)",
      VAR_9->zName, FUNC_4(VAR_11),
      (VAR_9->tr_tm==VAR_7 ? "BEFORE" : "AFTER"),
        (VAR_9->op==VAR_6 ? "UPDATE" : ""),
        (VAR_9->op==VAR_5 ? "INSERT" : ""),
        (VAR_9->op==VAR_4 ? "DELETE" : ""),
      VAR_10->zName
    ));

    if( VAR_9->zName ){
      FUNC_17(VAR_16, -1,
        FUNC_10(VAR_13, "-- TRIGGER %s", VAR_9->zName), VAR_1
      );
    }





    if( VAR_9->pWhen ){
      VAR_15 = FUNC_7(VAR_13, VAR_9->pWhen, 0);
      if( VAR_3==FUNC_13(&VAR_17, VAR_15)
       && VAR_13->mallocFailed==0
      ){
        VAR_20 = FUNC_20(VAR_19);
        FUNC_8(VAR_19, VAR_15, VAR_20, VAR_2);
      }
      FUNC_6(VAR_13, VAR_15);
    }


    FUNC_2(VAR_19, VAR_9->step_list, VAR_11);


    if( VAR_20 ){
      FUNC_21(VAR_16, VAR_20);
    }
    FUNC_16(VAR_16, VAR_0);
    FUNC_0((VAR_16, "End: %s.%s", VAR_9->zName, FUNC_4(VAR_11)));

    FUNC_24(VAR_8, VAR_19);
    if( VAR_13->mallocFailed==0 && VAR_8->nErr==0 ){
      VAR_18->aOp = FUNC_22(VAR_16, &VAR_18->nOp, &VAR_12->nMaxArg);
    }
    VAR_18->nMem = VAR_19->nMem;
    VAR_18->nCsr = VAR_19->nTab;
    VAR_18->token = (void *)VAR_9;
    VAR_14->aColmask[0] = VAR_19->oldmask;
    VAR_14->aColmask[1] = VAR_19->newmask;
    FUNC_18(VAR_16);
  }

  FUNC_1( !VAR_19->pAinc && !VAR_19->pZombieTab );
  FUNC_1( !VAR_19->pTriggerPrg && !VAR_19->nMaxArg );
  FUNC_12(VAR_19);
  FUNC_15(VAR_13, VAR_19);

  return VAR_14;
}
