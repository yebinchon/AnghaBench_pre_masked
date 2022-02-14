
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int rc; scalar_t__ dbMain; scalar_t__ dbRbu; scalar_t__ zTarget; char* zRbu; scalar_t__ zState; int nRbu; scalar_t__ eStage; void* zErrmsg; TYPE_1__* pRbuFd; int zStateDb; } ;
typedef TYPE_2__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_14__ {scalar_t__ eStage; } ;
struct TYPE_12__ {scalar_t__ bNolock; scalar_t__ pWalFd; } ;
typedef TYPE_3__ RbuState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (scalar_t__,int **,void**,char*) ;
 int VAR_10 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*,char const*,char const*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,char*,...) ;
 void* FUNC_9 (TYPE_2__*,char*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,int ) ;
 void* FUNC_12 (scalar_t__,char*,int,int ,void*,int ,int ,int ) ;
 char* FUNC_13 (scalar_t__,char*) ;
 void* FUNC_14 (scalar_t__,char*,int ,int ,int ) ;
 void* FUNC_15 (scalar_t__,char*,int ,void*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 void* FUNC_18 (char*,...) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static void FUNC_21(sqlite3rbu *VAR_13, int *VAR_14){
  FUNC_0( VAR_13->rc || (VAR_13->dbMain==0 && VAR_13->dbRbu==0) );
  FUNC_0( VAR_13->rc || FUNC_5(VAR_13) || VAR_13->zTarget!=0 );


  VAR_13->dbRbu = FUNC_9(VAR_13, VAR_13->zRbu, 1);

  if( VAR_13->rc==VAR_7 && FUNC_5(VAR_13) ){
    FUNC_15(VAR_13->dbRbu, "main", VAR_4, (void*)VAR_13);
    if( VAR_13->zState==0 ){
      const char *VAR_15 = FUNC_13(VAR_13->dbRbu, "main");
      VAR_13->zState = FUNC_7(VAR_13, "file://%s-vacuum?modeof=%s", VAR_15, VAR_15);
    }
  }



  if( VAR_13->zState ){
    FUNC_8(VAR_13, VAR_13->dbRbu, "ATTACH %Q AS stat", VAR_13->zState);
    FUNC_2(VAR_13->zStateDb, "stat", 4);
  }else{
    FUNC_2(VAR_13->zStateDb, "main", 4);
  }
  FUNC_8(VAR_13, VAR_13->dbRbu, VAR_0, VAR_13->zStateDb);
  if( VAR_13->rc==VAR_7 && FUNC_5(VAR_13) ){
    int VAR_16 = 0;
    int VAR_17;
    VAR_13->nRbu = 0;
    VAR_13->pRbuFd = 0;
    VAR_17 = FUNC_15(VAR_13->dbRbu, "main", VAR_4, (void*)VAR_13);
    if( VAR_17!=VAR_6 ) VAR_13->rc = VAR_17;
    if( VAR_13->eStage>=VAR_1 ){
      VAR_16 = 1;
    }else{
      RbuState *VAR_18 = FUNC_6(VAR_13);
      if( VAR_18 ){
        VAR_16 = (VAR_18->eStage>=VAR_1);
        FUNC_4(VAR_18);
      }
    }
    if( VAR_16 ) VAR_13->dbMain = FUNC_9(VAR_13, VAR_13->zRbu, VAR_13->nRbu<=1);
  }

  VAR_13->eStage = 0;
  if( VAR_13->rc==VAR_7 && VAR_13->dbMain==0 ){
    if( !FUNC_5(VAR_13) ){
      VAR_13->dbMain = FUNC_9(VAR_13, VAR_13->zTarget, 1);
    }else if( VAR_13->pRbuFd->pWalFd ){
      if( VAR_14 ){
        VAR_13->pRbuFd->bNolock = 0;
        FUNC_10(VAR_13->dbRbu);
        FUNC_10(VAR_13->dbMain);
        VAR_13->dbMain = 0;
        VAR_13->dbRbu = 0;
        *VAR_14 = 1;
        return;
      }
      VAR_13->rc = VAR_2;
      VAR_13->zErrmsg = FUNC_18("cannot vacuum wal mode database");
    }else{
      char *VAR_19;
      char *VAR_20 = 0;
      if( FUNC_20(VAR_13->zRbu)>=5 && 0==FUNC_1("file:", VAR_13->zRbu, 5) ){
        VAR_20 = &VAR_13->zRbu[5];
        while( *VAR_20 ){
          if( *VAR_20++=='?' ) break;
        }
        if( *VAR_20=='\0' ) VAR_20 = 0;
      }

      VAR_19 = FUNC_18("file:%s-vactmp?rbu_memory=1%s%s",
          FUNC_13(VAR_13->dbRbu, "main"),
          (VAR_20==0 ? "" : "&"), (VAR_20==0 ? "" : VAR_20)
      );

      if( VAR_19==0 ){
        VAR_13->rc = VAR_5;
        return;
      }
      VAR_13->dbMain = FUNC_9(VAR_13, VAR_19, VAR_13->nRbu<=1);
      FUNC_17(VAR_19);
    }
  }

  if( VAR_13->rc==VAR_7 ){
    VAR_13->rc = FUNC_12(VAR_13->dbMain,
        "rbu_tmp_insert", -1, VAR_9, (void*)VAR_13, VAR_12, 0, 0
    );
  }

  if( VAR_13->rc==VAR_7 ){
    VAR_13->rc = FUNC_12(VAR_13->dbMain,
        "rbu_fossil_delta", 2, VAR_9, 0, VAR_10, 0, 0
    );
  }

  if( VAR_13->rc==VAR_7 ){
    VAR_13->rc = FUNC_12(VAR_13->dbRbu,
        "rbu_target_name", -1, VAR_9, (void*)VAR_13, VAR_11, 0, 0
    );
  }

  if( VAR_13->rc==VAR_7 ){
    VAR_13->rc = FUNC_15(VAR_13->dbMain, "main", VAR_3, (void*)VAR_13);
  }
  FUNC_8(VAR_13, VAR_13->dbMain, "SELECT * FROM sqlite_master");




  if( VAR_13->rc==VAR_7 ){
    VAR_13->rc = FUNC_15(VAR_13->dbMain, "main", VAR_3, (void*)VAR_13);
  }

  if( VAR_13->rc==VAR_6 ){
    VAR_13->rc = VAR_2;
    VAR_13->zErrmsg = FUNC_18("rbu vfs not found");
  }
}
