
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dbv; TYPE_3__* pTable; int db; } ;
typedef TYPE_2__ sqlite3expert ;
typedef int sqlite3_stmt ;
struct TYPE_9__ {int nCol; TYPE_1__* aCol; struct TYPE_9__* pNext; } ;
struct TYPE_7__ {int zColl; int zName; } ;
typedef TYPE_3__ IdxTable ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int*,char*,char*,...) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int ,char const*,TYPE_3__**,char**) ;
 int FUNC_3 (int ,int **,char**,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char const*,int ,int ,char**) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(sqlite3expert *VAR_2, char **VAR_3){
  int VAR_4 = FUNC_4(VAR_2);
  sqlite3_stmt *VAR_5 = 0;






  VAR_4 = FUNC_3(VAR_2->db, &VAR_5, VAR_3,
      "SELECT type, name, sql, 1 FROM sqlite_master "
      "WHERE type IN ('table','view') AND name NOT LIKE 'sqlite_%%' "
      " UNION ALL "
      "SELECT type, name, sql, 2 FROM sqlite_master "
      "WHERE type = 'trigger'"
      "  AND tbl_name IN(SELECT name FROM sqlite_master WHERE type = 'view') "
      "ORDER BY 4, 1"
  );
  while( VAR_4==VAR_0 && VAR_1==FUNC_8(VAR_5) ){
    const char *VAR_6 = (const char*)FUNC_5(VAR_5, 0);
    const char *VAR_7 = (const char*)FUNC_5(VAR_5, 1);
    const char *VAR_8 = (const char*)FUNC_5(VAR_5, 2);

    if( VAR_6[0]=='v' || VAR_6[1]=='r' ){
      VAR_4 = FUNC_6(VAR_2->dbv, VAR_8, 0, 0, VAR_3);
    }else{
      IdxTable *VAR_9;
      VAR_4 = FUNC_2(VAR_2->db, VAR_7, &VAR_9, VAR_3);
      if( VAR_4==VAR_0 ){
        int VAR_10;
        char *VAR_11 = 0;
        char *VAR_12 = 0;
        VAR_9->pNext = VAR_2->pTable;
        VAR_2->pTable = VAR_9;


        VAR_11 = FUNC_0(&VAR_4, 0, "CREATE TABLE x(");
        for(VAR_10=0; VAR_10<VAR_9->nCol; VAR_10++){
          VAR_11 = FUNC_0(&VAR_4, VAR_11, "%s%Q COLLATE %s",
              (VAR_10==0 ? "" : ", "), VAR_9->aCol[VAR_10].zName, VAR_9->aCol[VAR_10].zColl
          );
        }
        VAR_11 = FUNC_0(&VAR_4, VAR_11, ")");


        VAR_12 = FUNC_0(&VAR_4, 0,
            "CREATE VIRTUAL TABLE %Q USING expert(%Q)", VAR_7, VAR_11
        );
        if( VAR_4==VAR_0 ){
          VAR_4 = FUNC_6(VAR_2->dbv, VAR_12, 0, 0, VAR_3);
        }
        FUNC_7(VAR_11);
        FUNC_7(VAR_12);
      }
    }
  }
  FUNC_1(&VAR_4, VAR_5);
  return VAR_4;
}
