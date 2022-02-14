
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ rc; int dbMain; int zErrmsg; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_9__ {scalar_t__ eType; int iPkTnum; int * azTblType; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int **,int *,char*) ;
 scalar_t__ FUNC_1 (int ,int **,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 char* FUNC_3 (TYPE_1__*,char*,char*,...) ;
 int FUNC_4 (TYPE_1__*,int ,char*,char*,char*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_11(sqlite3rbu *VAR_4, RbuObjIter *VAR_5){
  if( VAR_4->rc==VAR_1 && VAR_5->eType==VAR_0 ){
    int VAR_6 = VAR_5->iPkTnum;
    sqlite3_stmt *VAR_7 = 0;
    const char *VAR_8 = 0;
    sqlite3_stmt *VAR_9 = 0;
    const char *VAR_10 = "";
    char *VAR_11 = 0;
    char *VAR_12 = 0;




    VAR_4->rc = FUNC_0(VAR_4->dbMain, &VAR_7, &VAR_4->zErrmsg,
        "SELECT name FROM sqlite_master WHERE rootpage = ?"
    );
    if( VAR_4->rc==VAR_1 ){
      FUNC_5(VAR_7, 1, VAR_6);
      if( VAR_2==FUNC_9(VAR_7) ){
        VAR_8 = (const char*)FUNC_7(VAR_7, 0);
      }
    }
    if( VAR_8 ){
      VAR_4->rc = FUNC_1(VAR_4->dbMain, &VAR_9, &VAR_4->zErrmsg,
          FUNC_8("PRAGMA main.index_xinfo = %Q", VAR_8)
      );
    }
    FUNC_2(VAR_4, VAR_7);

    while( VAR_4->rc==VAR_1 && VAR_2==FUNC_9(VAR_9) ){
      int VAR_13 = FUNC_6(VAR_9, 5);
      if( VAR_13 ){
        int VAR_14 = FUNC_6(VAR_9, 1);
        int VAR_15 = FUNC_6(VAR_9, 3);
        const char *VAR_16 = (const char*)FUNC_7(VAR_9, 4);
        VAR_11 = FUNC_3(VAR_4, "%z%sc%d %s COLLATE %Q", VAR_11, VAR_10,
            VAR_14, VAR_5->azTblType[VAR_14], VAR_16
        );
        VAR_12 = FUNC_3(VAR_4, "%z%sc%d%s", VAR_12, VAR_10, VAR_14, VAR_15?" DESC":"");
        VAR_10 = ", ";
      }
    }
    VAR_11 = FUNC_3(VAR_4, "%z, id INTEGER", VAR_11);
    FUNC_2(VAR_4, VAR_9);

    FUNC_10(VAR_3, VAR_4->dbMain, "main", 1, VAR_6);
    FUNC_4(VAR_4, VAR_4->dbMain,
        "CREATE TABLE rbu_imposter2(%z, PRIMARY KEY(%z)) WITHOUT ROWID",
        VAR_11, VAR_12
    );
    FUNC_10(VAR_3, VAR_4->dbMain, "main", 0, 0);
  }
}
