
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zDataTbl; int zIdx; int zTbl; } ;
struct TYPE_7__ {int rc; TYPE_1__ objiter; int nPhaseOneStep; int iOalSz; int iWalCksum; int nProgress; int nStep; int zStateDb; int zErrmsg; int dbRbu; TYPE_3__* pTargetFd; TYPE_3__* pRbuFd; } ;
typedef TYPE_2__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_8__ {scalar_t__ iCookie; } ;
typedef TYPE_3__ rbu_file ;
typedef int i64 ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int **,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(sqlite3rbu *VAR_12, int VAR_13){
  if( VAR_12->rc==VAR_11 || VAR_12->rc==VAR_10 ){
    sqlite3_stmt *VAR_14 = 0;
    rbu_file *VAR_15 = (FUNC_2(VAR_12) ? VAR_12->pRbuFd : VAR_12->pTargetFd);
    int VAR_16;

    FUNC_0( VAR_12->zErrmsg==0 );
    VAR_16 = FUNC_1(VAR_12->dbRbu, &VAR_14, &VAR_12->zErrmsg,
        FUNC_4(
          "INSERT OR REPLACE INTO %s.rbu_state(k, v) VALUES "
          "(%d, %d), "
          "(%d, %Q), "
          "(%d, %Q), "
          "(%d, %d), "
          "(%d, %d), "
          "(%d, %lld), "
          "(%d, %lld), "
          "(%d, %lld), "
          "(%d, %lld), "
          "(%d, %Q)  ",
          VAR_12->zStateDb,
          VAR_8, VAR_13,
          VAR_9, VAR_12->objiter.zTbl,
          VAR_3, VAR_12->objiter.zIdx,
          VAR_7, VAR_12->nStep,
          VAR_6, VAR_12->nProgress,
          VAR_0, VAR_12->iWalCksum,
          VAR_1, (i64)VAR_15->iCookie,
          VAR_4, VAR_12->iOalSz,
          VAR_5, VAR_12->nPhaseOneStep,
          VAR_2, VAR_12->objiter.zDataTbl
      )
    );
    FUNC_0( VAR_14==0 || VAR_16==VAR_11 );

    if( VAR_16==VAR_11 ){
      FUNC_5(VAR_14);
      VAR_16 = FUNC_3(VAR_14);
    }
    if( VAR_16!=VAR_11 ) VAR_12->rc = VAR_16;
  }
}
