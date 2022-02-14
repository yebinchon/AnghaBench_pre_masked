
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_22__ {scalar_t__ zTbl; } ;
struct TYPE_23__ {int rc; char* zTarget; char* zRbu; scalar_t__ eStage; void* zErrmsg; TYPE_10__ objiter; int * dbRbu; int * dbMain; TYPE_2__* pTargetFd; TYPE_2__* pRbuFd; scalar_t__ nStep; int iOalSz; int nProgress; int nPhaseOneStep; int zState; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3 ;
struct TYPE_24__ {scalar_t__ iCookie; scalar_t__ pWalFd; } ;
typedef TYPE_2__ rbu_file ;
struct TYPE_25__ {scalar_t__ eStage; scalar_t__ iCookie; int iOalSz; int nProgress; int nPhaseOneStep; } ;
typedef TYPE_3__ RbuState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_3__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,char const*) ;
 int FUNC_11 (TYPE_1__*,TYPE_10__*) ;
 int FUNC_12 (TYPE_1__*,int*) ;
 int FUNC_13 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_14 (TYPE_1__*,TYPE_3__*) ;
 void* FUNC_15 (int *,char*,int ,int ,void**) ;
 int FUNC_16 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_17 (size_t) ;
 void* FUNC_18 (char*,...) ;
 size_t FUNC_19 (char const*) ;

__attribute__((used)) static sqlite3rbu *FUNC_20(
  const char *VAR_10,
  const char *VAR_11,
  const char *VAR_12
){
  sqlite3rbu *VAR_13;
  size_t VAR_14 = VAR_10 ? FUNC_19(VAR_10) : 0;
  size_t VAR_15 = FUNC_19(VAR_11);
  size_t VAR_16 = sizeof(sqlite3rbu) + VAR_14+1 + VAR_15+1;

  VAR_13 = (sqlite3rbu*)FUNC_17(VAR_16);
  if( VAR_13 ){
    RbuState *VAR_17 = 0;


    FUNC_2(VAR_13, 0, sizeof(sqlite3rbu));
    FUNC_4(VAR_13);


    if( VAR_13->rc==VAR_9 ){
      char *VAR_18 = (char*)&VAR_13[1];
      int VAR_19 = 0;
      if( VAR_10 ){
        VAR_13->zTarget = VAR_18;
        FUNC_1(VAR_13->zTarget, VAR_10, VAR_14+1);
        VAR_18 += VAR_14+1;
      }
      VAR_13->zRbu = VAR_18;
      FUNC_1(VAR_13->zRbu, VAR_11, VAR_15+1);
      VAR_18 += VAR_15+1;
      if( VAR_12 ){
        VAR_13->zState = FUNC_10(VAR_13, "%s", VAR_12);
      }
      FUNC_12(VAR_13, &VAR_19);
      if( VAR_19 ){
        FUNC_12(VAR_13, 0);
      }
    }

    if( VAR_13->rc==VAR_9 ){
      VAR_17 = FUNC_9(VAR_13);
      FUNC_0( VAR_17 || VAR_13->rc!=VAR_9 );
      if( VAR_13->rc==VAR_9 ){

        if( VAR_17->eStage==0 ){
          FUNC_5(VAR_13);
          FUNC_7(VAR_13);
          VAR_13->eStage = VAR_3;
        }else{
          VAR_13->eStage = VAR_17->eStage;
          VAR_13->nPhaseOneStep = VAR_17->nPhaseOneStep;
        }
        VAR_13->nProgress = VAR_17->nProgress;
        VAR_13->iOalSz = VAR_17->iOalSz;
      }
    }
    FUNC_0( VAR_13->rc!=VAR_9 || VAR_13->eStage!=0 );

    if( VAR_13->rc==VAR_9 && VAR_13->pTargetFd->pWalFd ){
      if( VAR_13->eStage==VAR_3 ){
        VAR_13->rc = VAR_7;
        VAR_13->zErrmsg = FUNC_18("cannot update wal mode database");
      }else if( VAR_13->eStage==VAR_2 ){
        VAR_13->eStage = VAR_0;
        VAR_13->nStep = 0;
      }
    }

    if( VAR_13->rc==VAR_9
     && (VAR_13->eStage==VAR_3 || VAR_13->eStage==VAR_2)
     && VAR_17->eStage!=0
    ){
      rbu_file *VAR_20 = (FUNC_8(VAR_13) ? VAR_13->pRbuFd : VAR_13->pTargetFd);
      if( VAR_20->iCookie!=VAR_17->iCookie ){




        VAR_13->rc = VAR_4;
        VAR_13->zErrmsg = FUNC_18("database modified during rbu %s",
            (FUNC_8(VAR_13) ? "vacuum" : "update")
        );
      }
    }

    if( VAR_13->rc==VAR_9 ){
      if( VAR_13->eStage==VAR_3 ){
        sqlite3 *VAR_21 = VAR_13->dbMain;
        VAR_13->rc = FUNC_15(VAR_13->dbRbu, "BEGIN", 0, 0, &VAR_13->zErrmsg);


        if( VAR_13->rc==VAR_9 ){
          VAR_13->rc = FUNC_11(VAR_13, &VAR_13->objiter);
        }



        if( VAR_13->rc==VAR_9 && VAR_13->objiter.zTbl==0 ){
          VAR_13->rc = VAR_6;
          VAR_13->eStage = VAR_1;
        }else{
          if( VAR_13->rc==VAR_9 && VAR_17->eStage==0 && FUNC_8(VAR_13) ){
            FUNC_3(VAR_13, "page_size");
            FUNC_3(VAR_13, "auto_vacuum");
          }



          if( VAR_13->rc==VAR_9 ){
            VAR_13->rc = FUNC_15(VAR_21, "BEGIN IMMEDIATE", 0, 0, &VAR_13->zErrmsg);
          }




          if( VAR_13->rc==VAR_9 ){
            int VAR_22 = FUNC_16(VAR_21, "main", VAR_8, 0);
            if( VAR_22==VAR_9 ){
              VAR_13->rc = FUNC_15(
                VAR_21, "PRAGMA journal_mode=off",0,0,&VAR_13->zErrmsg);
            }
          }

          if( VAR_13->rc==VAR_9 ){
            FUNC_14(VAR_13, VAR_17);
          }
        }
      }else if( VAR_13->eStage==VAR_2 ){

      }else if( VAR_13->eStage==VAR_0 ){
        FUNC_13(VAR_13, VAR_17);
      }else if( VAR_13->eStage==VAR_1 ){
        VAR_13->rc = VAR_6;
      }else{
        VAR_13->rc = VAR_5;
      }
    }

    FUNC_6(VAR_17);
  }

  return VAR_13;
}
