
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_7__ {scalar_t__ pMethods; } ;
struct TYPE_6__ {void* rcErr; TYPE_2__* pDest; int dbDest; int szPage; int zDestFile; } ;
typedef TYPE_1__ ScrubState ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int * FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ,TYPE_2__**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,int ) ;
 void* FUNC_9 (int ,int *,int,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(ScrubState *VAR_8){
  sqlite3_stmt *VAR_9;
  int VAR_10;
  char *VAR_11;
  if( VAR_8->rcErr ) return;
  VAR_8->rcErr = FUNC_9(VAR_8->zDestFile, &VAR_8->dbDest,
                 VAR_5 | VAR_3 |
                 VAR_6 | VAR_4, 0);
  if( VAR_8->rcErr ){
    FUNC_0(VAR_8, "cannot open destination database: %s",
                      FUNC_3(VAR_8->dbDest));
    return;
  }
  VAR_11 = FUNC_8("PRAGMA page_size(%u);", VAR_8->szPage);
  if( VAR_11==0 ){
    VAR_8->rcErr = VAR_2;
    return;
  }
  VAR_8->rcErr = FUNC_4(VAR_8->dbDest, VAR_11, 0, 0, 0);
  FUNC_7(VAR_11);
  if( VAR_8->rcErr ){
    FUNC_0(VAR_8,
       "cannot set the page size on the destination database: %s",
       FUNC_3(VAR_8->dbDest));
    return;
  }
  FUNC_4(VAR_8->dbDest, "PRAGMA journal_mode=OFF;", 0, 0, 0);
  VAR_8->rcErr = FUNC_4(VAR_8->dbDest, "BEGIN EXCLUSIVE;", 0, 0, 0);
  if( VAR_8->rcErr ){
    FUNC_0(VAR_8,
       "cannot start a write transaction on the destination database: %s",
       FUNC_3(VAR_8->dbDest));
    return;
  }
  VAR_9 = FUNC_1(VAR_8, VAR_8->dbDest, "PRAGMA page_count;");
  if( VAR_9==0 ) return;
  VAR_10 = FUNC_10(VAR_9);
  if( VAR_10!=VAR_7 ){
    FUNC_0(VAR_8, "cannot measure the size of the destination");
  }else if( FUNC_2(VAR_9, 0)>1 ){
    FUNC_0(VAR_8, "destination database is not empty - holds %d pages",
                   FUNC_2(VAR_9, 0));
  }
  FUNC_6(VAR_9);
  FUNC_5(VAR_8->dbDest, "main", VAR_1, &VAR_8->pDest);
  if( VAR_8->pDest==0 || VAR_8->pDest->pMethods==0 ){
    FUNC_0(VAR_8, "cannot get the destination file handle");
    VAR_8->rcErr = VAR_0;
  }
}
