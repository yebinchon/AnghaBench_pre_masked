
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_28__ {int zTbl; int pSelect; int zDataTbl; int abIndexed; int bCleanup; } ;
struct TYPE_26__ {int eStage; int rc; size_t nStep; size_t nFrame; int iMaxFrame; int nPagePerSector; int nProgress; TYPE_6__* aFrame; TYPE_1__* pTargetFd; int zErrmsg; int dbRbu; int dbMain; int zStateDb; TYPE_5__ objiter; } ;
typedef TYPE_3__ sqlite3rbu ;
struct TYPE_27__ {TYPE_2__* pMethods; } ;
typedef TYPE_4__ sqlite3_file ;
struct TYPE_29__ {int iDbPage; } ;
struct TYPE_25__ {int (* xSync ) (TYPE_4__*,int ) ;int (* xShmMap ) (TYPE_4__*,int ,int,int ,void volatile**) ;} ;
struct TYPE_24__ {TYPE_4__* pReal; } ;
typedef TYPE_5__ RbuObjIter ;
typedef TYPE_6__ RbuFrame ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,char*,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 void* FUNC_12 (int ,char*,int ,int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (TYPE_4__*,int ,int,int ,void volatile**) ;

int FUNC_17(sqlite3rbu *VAR_6){
  if( VAR_6 ){
    switch( VAR_6->eStage ){
      case 128: {
        RbuObjIter *VAR_7 = &VAR_6->objiter;



        if( FUNC_5(VAR_6) && VAR_6->nProgress==0 && VAR_6->rc==VAR_3 ){
          FUNC_3(VAR_6);
          FUNC_2(VAR_6, "user_version");
          FUNC_2(VAR_6, "application_id");
        }

        while( VAR_6->rc==VAR_3 && VAR_7->zTbl ){

          if( VAR_7->bCleanup ){



            if( FUNC_5(VAR_6)==0 && VAR_7->abIndexed ){
              FUNC_6(VAR_6, VAR_6->dbRbu,
                  "DELETE FROM %s.'rbu_tmp_%q'", VAR_6->zStateDb, VAR_7->zDataTbl
              );
            }
          }else{
            FUNC_9(VAR_6, VAR_7, 0);


            if( VAR_6->rc==VAR_3 ){
              int VAR_8 = FUNC_14(VAR_7->pSelect);
              if( VAR_8==VAR_4 ){
                VAR_6->nProgress++;
                VAR_6->nStep++;
                return FUNC_11(VAR_6);
              }
              VAR_6->rc = FUNC_13(VAR_7->pSelect);
              VAR_6->nStep = 0;
            }
          }

          FUNC_8(VAR_6, VAR_7);
        }

        if( VAR_6->rc==VAR_3 ){
          FUNC_0( VAR_7->zTbl==0 );
          FUNC_10(VAR_6, 129);
          FUNC_4(VAR_6);
          if( VAR_6->rc==VAR_3 ){
            VAR_6->rc = FUNC_12(VAR_6->dbMain, "COMMIT", 0, 0, &VAR_6->zErrmsg);
          }
          if( VAR_6->rc==VAR_3 ){
            VAR_6->rc = FUNC_12(VAR_6->dbRbu, "COMMIT", 0, 0, &VAR_6->zErrmsg);
          }
          VAR_6->eStage = 129;
        }
        break;
      }

      case 129: {
        if( VAR_6->rc==VAR_3 ){
          FUNC_7(VAR_6);
          VAR_6->nProgress++;
        }
        break;
      }

      case 130: {
        if( VAR_6->rc==VAR_3 ){
          if( VAR_6->nStep>=VAR_6->nFrame ){
            sqlite3_file *VAR_9 = VAR_6->pTargetFd->pReal;


            VAR_6->rc = VAR_9->pMethods->xSync(VAR_9, VAR_5);


            if( VAR_6->rc==VAR_3 ){
              void volatile *VAR_10;
              VAR_6->rc = VAR_9->pMethods->xShmMap(VAR_9, 0, 32*1024, 0, &VAR_10);
              if( VAR_6->rc==VAR_3 ){
                ((u32 volatile*)VAR_10)[24] = VAR_6->iMaxFrame;
              }
            }

            if( VAR_6->rc==VAR_3 ){
              VAR_6->eStage = VAR_0;
              VAR_6->rc = VAR_1;
            }
          }else{
            u32 VAR_11;
            do{
              RbuFrame *VAR_12 = &VAR_6->aFrame[VAR_6->nStep];
              VAR_11 = (VAR_12->iDbPage-1) / VAR_6->nPagePerSector;
              FUNC_1(VAR_6, VAR_12);
              VAR_6->nStep++;
            }while( VAR_6->nStep<VAR_6->nFrame
                 && VAR_11==((VAR_6->aFrame[VAR_6->nStep].iDbPage-1) / VAR_6->nPagePerSector)
                 && VAR_6->rc==VAR_3
            );
          }
          VAR_6->nProgress++;
        }
        break;
      }

      default:
        break;
    }
    return VAR_6->rc;
  }else{
    return VAR_2;
  }
}
