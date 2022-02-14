
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int rc; int zErrmsg; int dbMain; int dbRbu; } ;
typedef TYPE_1__ sqlite3rbu ;
struct TYPE_10__ {int bCleanup; int pIdxIter; int pTblIter; } ;
typedef TYPE_2__ RbuObjIter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ,int *,int *,char*) ;
 int FUNC_2 (int ,int *,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(sqlite3rbu *VAR_1, RbuObjIter *VAR_2){
  int VAR_3;
  FUNC_0(VAR_2, 0, sizeof(RbuObjIter));

  VAR_3 = FUNC_2(VAR_1->dbRbu, &VAR_2->pTblIter, &VAR_1->zErrmsg,
    FUNC_5(
      "SELECT rbu_target_name(name, type='view') AS target, name "
      "FROM sqlite_master "
      "WHERE type IN ('table', 'view') AND target IS NOT NULL "
      " %s "
      "ORDER BY name"
  , FUNC_3(VAR_1) ? "AND rootpage!=0 AND rootpage IS NOT NULL" : ""));

  if( VAR_3==VAR_0 ){
    VAR_3 = FUNC_1(VAR_1->dbMain, &VAR_2->pIdxIter, &VAR_1->zErrmsg,
        "SELECT name, rootpage, sql IS NULL OR substr(8, 6)=='UNIQUE' "
        "  FROM main.sqlite_master "
        "  WHERE type='index' AND tbl_name = ?"
    );
  }

  VAR_2->bCleanup = 1;
  VAR_1->rc = VAR_3;
  return FUNC_4(VAR_1, VAR_2);
}
