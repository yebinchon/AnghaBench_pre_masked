
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int rc; scalar_t__ eStage; int dbMain; int dbRbu; TYPE_1__* pTargetFd; } ;
typedef TYPE_3__ sqlite3rbu ;
struct TYPE_12__ {TYPE_2__* pMethods; } ;
typedef TYPE_4__ sqlite3_file ;
struct TYPE_10__ {int (* xSync ) (TYPE_4__*,int ) ;} ;
struct TYPE_9__ {TYPE_4__* pReal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int ,char const*,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;

int FUNC_5(sqlite3rbu *VAR_6){
  int VAR_7 = VAR_6->rc;
  if( VAR_7==VAR_3 ) return VAR_4;

  FUNC_0( VAR_6->eStage>=VAR_2 && VAR_6->eStage<=VAR_1 );
  if( VAR_6->eStage==VAR_2 ){
    FUNC_0( VAR_7!=VAR_3 );
    if( VAR_7==VAR_4 ) VAR_7 = FUNC_3(VAR_6->dbMain, "COMMIT", 0, 0, 0);
  }


  if( VAR_7==VAR_4 && VAR_6->eStage==VAR_0 ){
    sqlite3_file *VAR_8 = VAR_6->pTargetFd->pReal;
    VAR_7 = VAR_8->pMethods->xSync(VAR_8, VAR_5);
  }

  VAR_6->rc = VAR_7;
  FUNC_2(VAR_6, VAR_6->eStage);
  VAR_7 = VAR_6->rc;

  if( VAR_6->eStage==VAR_2 ){
    FUNC_0( VAR_7!=VAR_3 );
    if( VAR_7==VAR_4 ) VAR_7 = FUNC_3(VAR_6->dbRbu, "COMMIT", 0, 0, 0);
    if( VAR_7==VAR_4 ){
      const char *VAR_9 = FUNC_1(VAR_6) ? "BEGIN" : "BEGIN IMMEDIATE";
      VAR_7 = FUNC_3(VAR_6->dbRbu, VAR_9, 0, 0, 0);
    }
    if( VAR_7==VAR_4 ) VAR_7 = FUNC_3(VAR_6->dbMain, "BEGIN IMMEDIATE", 0, 0,0);
  }

  VAR_6->rc = VAR_7;
  return VAR_7;
}
