
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ rc; scalar_t__ nFrame; int pgsz; scalar_t__ iWalCksum; int nPagePerSector; TYPE_2__* pTargetFd; scalar_t__ eStage; int aBuf; int nStep; int dbMain; } ;
typedef TYPE_4__ sqlite3rbu ;
struct TYPE_17__ {TYPE_3__* pMethods; } ;
typedef TYPE_5__ sqlite3_file ;
struct TYPE_18__ {scalar_t__ iWalCksum; int nRow; } ;
struct TYPE_15__ {int (* xSectorSize ) (TYPE_5__*) ;scalar_t__ (* xSync ) (TYPE_5__*,int ) ;} ;
struct TYPE_14__ {TYPE_1__* pWalFd; TYPE_5__* pReal; } ;
struct TYPE_13__ {TYPE_5__* pReal; } ;
typedef TYPE_6__ RbuState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_6(sqlite3rbu *VAR_7, RbuState *VAR_8){




  if( VAR_8==0 ){
    VAR_7->eStage = 0;
    if( VAR_7->rc==VAR_5 ){
      VAR_7->rc = FUNC_3(VAR_7->dbMain, "SELECT * FROM sqlite_master", 0, 0, 0);
    }
  }
  if( VAR_7->rc==VAR_5 ){
    int VAR_9;
    VAR_7->eStage = VAR_0;
    VAR_9 = FUNC_3(VAR_7->dbMain, "PRAGMA main.wal_checkpoint=restart", 0, 0,0);
    if( VAR_9!=VAR_4 ) VAR_7->rc = VAR_9;
  }

  if( VAR_7->rc==VAR_5 && VAR_7->nFrame>0 ){
    VAR_7->eStage = VAR_1;
    VAR_7->nStep = (VAR_8 ? VAR_8->nRow : 0);
    VAR_7->aBuf = FUNC_1(VAR_7, VAR_7->pgsz);
    VAR_7->iWalCksum = FUNC_2(VAR_7);
  }

  if( VAR_7->rc==VAR_5 ){
    if( VAR_7->nFrame==0 || (VAR_8 && VAR_8->iWalCksum!=VAR_7->iWalCksum) ){
      VAR_7->rc = VAR_3;
      VAR_7->eStage = VAR_2;
    }else{
      int VAR_10;
      sqlite3_file *VAR_11 = VAR_7->pTargetFd->pReal;
      sqlite3_file *VAR_12 = VAR_7->pTargetFd->pWalFd->pReal;
      FUNC_0( VAR_7->nPagePerSector==0 );
      VAR_10 = VAR_11->pMethods->xSectorSize(VAR_11);
      if( VAR_10>VAR_7->pgsz ){
        VAR_7->nPagePerSector = VAR_10 / VAR_7->pgsz;
      }else{
        VAR_7->nPagePerSector = 1;
      }





      VAR_7->rc = VAR_12->pMethods->xSync(VAR_12, VAR_6);
    }
  }
}
