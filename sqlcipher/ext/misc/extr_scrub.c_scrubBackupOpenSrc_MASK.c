
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_7__ {scalar_t__ pMethods; } ;
struct TYPE_6__ {scalar_t__ rcErr; TYPE_2__* pSrc; int dbSrc; void* nPage; void* szPage; int zSrcFile; } ;
typedef TYPE_1__ ScrubState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int * FUNC_1 (TYPE_1__*,int ,char*) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ,TYPE_2__**) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(ScrubState *VAR_7){
  sqlite3_stmt *VAR_8;
  int VAR_9;

  VAR_7->rcErr = FUNC_7(VAR_7->zSrcFile, &VAR_7->dbSrc,
                 VAR_4 |
                 VAR_5 | VAR_3, 0);
  if( VAR_7->rcErr ){
    FUNC_0(VAR_7, "cannot open source database: %s",
                      FUNC_3(VAR_7->dbSrc));
    return;
  }
  VAR_7->rcErr = FUNC_4(VAR_7->dbSrc, "SELECT 1 FROM sqlite_master; BEGIN;",
                          0, 0, 0);
  if( VAR_7->rcErr ){
    FUNC_0(VAR_7,
       "cannot start a read transaction on the source database: %s",
       FUNC_3(VAR_7->dbSrc));
    return;
  }
  VAR_9 = FUNC_9(VAR_7->dbSrc, "main", VAR_0,
                                 0, 0);
  if( VAR_9 ){
    FUNC_0(VAR_7, "cannot checkpoint the source database");
    return;
  }
  VAR_8 = FUNC_1(VAR_7, VAR_7->dbSrc, "PRAGMA page_size");
  if( VAR_8==0 ) return;
  VAR_9 = FUNC_8(VAR_8);
  if( VAR_9==VAR_6 ){
    VAR_7->szPage = FUNC_2(VAR_8, 0);
  }else{
    FUNC_0(VAR_7, "unable to determine the page size");
  }
  FUNC_6(VAR_8);
  if( VAR_7->rcErr ) return;
  VAR_8 = FUNC_1(VAR_7, VAR_7->dbSrc, "PRAGMA page_count");
  if( VAR_8==0 ) return;
  VAR_9 = FUNC_8(VAR_8);
  if( VAR_9==VAR_6 ){
    VAR_7->nPage = FUNC_2(VAR_8, 0);
  }else{
    FUNC_0(VAR_7, "unable to determine the size of the source database");
  }
  FUNC_6(VAR_8);
  FUNC_5(VAR_7->dbSrc, "main", VAR_2, &VAR_7->pSrc);
  if( VAR_7->pSrc==0 || VAR_7->pSrc->pMethods==0 ){
    FUNC_0(VAR_7, "cannot get the source file handle");
    VAR_7->rcErr = VAR_1;
  }
}
