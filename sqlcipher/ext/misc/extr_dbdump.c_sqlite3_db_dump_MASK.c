
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int x ;
typedef int sqlite3 ;
struct TYPE_5__ {int rc; int (* xCallback ) (char const*,void*) ;scalar_t__ nErr; scalar_t__ writableSchema; void* pArg; int * db; } ;
typedef TYPE_1__ DState ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,...) ;
 int FUNC_2 (TYPE_1__*,char*,char const*,...) ;
 int FUNC_3 (int *,char*,int ,int ,int ) ;

int FUNC_4(
  sqlite3 *VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  int (*VAR_3)(const char*,void*),
  void *VAR_4
){
  DState VAR_5;
  FUNC_0(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.rc = FUNC_3(VAR_0, "BEGIN", 0, 0, 0);
  if( VAR_5.rc ) return VAR_5.rc;
  VAR_5.db = VAR_0;
  VAR_5.xCallback = VAR_3;
  VAR_5.pArg = VAR_4;
  VAR_3("PRAGMA foreign_keys=OFF;\nBEGIN TRANSACTION;\n", VAR_4);
  if( VAR_2==0 ){
    FUNC_2(&VAR_5,
      "SELECT name, type, sql FROM \"%w\".sqlite_master "
      "WHERE sql NOT NULL AND type=='table' AND name!='sqlite_sequence'",
      VAR_1
    );
    FUNC_2(&VAR_5,
      "SELECT name, type, sql FROM \"%w\".sqlite_master "
      "WHERE name=='sqlite_sequence'", VAR_1
    );
    FUNC_1(&VAR_5,
      "SELECT sql FROM sqlite_master "
      "WHERE sql NOT NULL AND type IN ('index','trigger','view')", 0
    );
  }else{
    FUNC_2(&VAR_5,
      "SELECT name, type, sql FROM \"%w\".sqlite_master "
      "WHERE tbl_name=%Q COLLATE nocase AND type=='table'"
      "  AND sql NOT NULL",
      VAR_1, VAR_2
    );
    FUNC_1(&VAR_5,
      "SELECT sql FROM \"%w\".sqlite_master "
      "WHERE sql NOT NULL"
      "  AND type IN ('index','trigger','view')"
      "  AND tbl_name=%Q COLLATE nocase",
      VAR_1, VAR_2
    );
  }
  if( VAR_5.writableSchema ){
    VAR_3("PRAGMA writable_schema=OFF;\n", VAR_4);
  }
  VAR_3(VAR_5.nErr ? "ROLLBACK; -- due to errors\n" : "COMMIT;\n", VAR_4);
  FUNC_3(VAR_0, "COMMIT", 0, 0, 0);
  return VAR_5.rc;
}
