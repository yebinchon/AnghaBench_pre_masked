
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


struct TYPE_23__ {scalar_t__ busy; } ;
struct TYPE_21__ {scalar_t__ authLevel; } ;
struct TYPE_26__ {scalar_t__ mallocFailed; int nDb; TYPE_3__ init; TYPE_2__* aDb; TYPE_1__ auth; } ;
typedef TYPE_6__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_29__ {int nExpr; TYPE_5__* a; } ;
struct TYPE_28__ {scalar_t__ pToplevel; scalar_t__ nErr; scalar_t__ rc; scalar_t__ nTableLock; int nVtabLock; scalar_t__ pAinc; scalar_t__ nTab; scalar_t__ okConstFactor; TYPE_9__* pConstExpr; int * apVtabLock; scalar_t__ isMultiWrite; scalar_t__ mayAbort; int writeMask; int cookieMask; scalar_t__ nested; TYPE_6__* db; } ;
struct TYPE_27__ {int iGeneration; int schema_cookie; } ;
struct TYPE_24__ {int iConstExprReg; } ;
struct TYPE_25__ {TYPE_4__ u; int pExpr; } ;
struct TYPE_22__ {TYPE_7__* pSchema; } ;
struct TYPE_20__ {scalar_t__ opcode; } ;
typedef TYPE_7__ Schema ;
typedef TYPE_8__ Parse ;
typedef TYPE_9__ ExprList ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,char*) ;
 int FUNC_7 (TYPE_8__*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int ) ;
 int * FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ,int ,int ,char*,int ) ;
 int FUNC_13 (int *,int ,int,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (int *,int) ;
 TYPE_11__* FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,TYPE_8__*) ;
 int FUNC_20 (int *,int) ;

void FUNC_21(Parse *VAR_10){
  sqlite3 *VAR_11;
  Vdbe *VAR_12;

  FUNC_3( VAR_10->pToplevel==0 );
  VAR_11 = VAR_10->db;
  if( VAR_10->nested ) return;
  if( VAR_11->mallocFailed || VAR_10->nErr ){
    if( VAR_10->rc==VAR_8 ) VAR_10->rc = VAR_7;
    return;
  }




  VAR_12 = FUNC_9(VAR_10);
  FUNC_3( !VAR_10->isMultiWrite
       || FUNC_14(VAR_12, VAR_10->mayAbort));
  if( VAR_12 ){
    FUNC_11(VAR_12, VAR_0);
    if( VAR_11->mallocFailed==0
     && (FUNC_0(VAR_10->cookieMask) || VAR_10->pConstExpr)
    ){
      int VAR_13, VAR_14;
      FUNC_3( FUNC_16(VAR_12, 0)->opcode==VAR_1 );
      FUNC_18(VAR_12, 0);
      for(VAR_13=0; VAR_13<VAR_11->nDb; VAR_13++){
        Schema *VAR_15;
        if( FUNC_1(VAR_10->cookieMask, VAR_13)==0 ) continue;
        FUNC_20(VAR_12, VAR_13);
        VAR_15 = VAR_11->aDb[VAR_13].pSchema;
        FUNC_13(VAR_12,
          VAR_2,
          VAR_13,
          FUNC_1(VAR_10->writeMask,VAR_13),
          VAR_15->schema_cookie,
          VAR_15->iGeneration
        );
        if( VAR_11->init.busy==0 ) FUNC_15(VAR_12, 1);
        FUNC_2((VAR_12,
              "usesStmtJournal=%d", VAR_10->mayAbort && VAR_10->isMultiWrite));
      }

      for(VAR_14=0; VAR_14<VAR_10->nVtabLock; VAR_14++){
        char *VAR_16 = (char *)FUNC_8(VAR_11, VAR_10->apVtabLock[VAR_14]);
        FUNC_12(VAR_12, VAR_3, 0, 0, 0, VAR_16, VAR_4);
      }
      VAR_10->nVtabLock = 0;






      FUNC_4(VAR_10);



      FUNC_5(VAR_10);


      if( VAR_10->pConstExpr ){
        ExprList *VAR_17 = VAR_10->pConstExpr;
        VAR_10->okConstFactor = 0;
        for(VAR_14=0; VAR_14<VAR_17->nExpr; VAR_14++){
          FUNC_7(VAR_10, VAR_17->a[VAR_14].pExpr, VAR_17->a[VAR_14].u.iConstExprReg);
        }
      }


      FUNC_17(VAR_12, 1);
    }
  }




  if( VAR_12 && VAR_10->nErr==0 && !VAR_11->mallocFailed ){


    FUNC_3( VAR_10->pAinc==0 || VAR_10->nTab>0 );
    FUNC_19(VAR_12, VAR_10);
    VAR_10->rc = VAR_6;
  }else{
    VAR_10->rc = VAR_7;
  }
}
