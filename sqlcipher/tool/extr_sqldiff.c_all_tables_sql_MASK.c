
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db; scalar_t__ bHandleVtab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

const char *FUNC_3(){
  if( VAR_2.bHandleVtab ){
    int VAR_4;

    VAR_4 = FUNC_2(VAR_2.db,
        "CREATE TEMP TABLE tblmap(module COLLATE nocase, postfix);"
        "INSERT INTO temp.tblmap VALUES"
        "('fts3', '_content'), ('fts3', '_segments'), ('fts3', '_segdir'),"

        "('fts4', '_content'), ('fts4', '_segments'), ('fts4', '_segdir'),"
        "('fts4', '_docsize'), ('fts4', '_stat'),"

        "('fts5', '_data'), ('fts5', '_idx'), ('fts5', '_content'),"
        "('fts5', '_docsize'), ('fts5', '_config'),"

        "('rtree', '_node'), ('rtree', '_rowid'), ('rtree', '_parent');"
        , 0, 0, 0
    );
    FUNC_0( VAR_4==VAR_0 );

    VAR_4 = FUNC_1(
        VAR_2.db, "module_name", 1, VAR_1, 0, VAR_3, 0, 0
    );
    FUNC_0( VAR_4==VAR_0 );

    return
      "SELECT name FROM main.sqlite_master\n"
      " WHERE type='table' AND (\n"
      "    module_name(sql) IS NULL OR \n"
      "    module_name(sql) IN (SELECT module FROM temp.tblmap)\n"
      " ) AND name NOT IN (\n"
      "  SELECT a.name || b.postfix \n"
        "FROM main.sqlite_master AS a, temp.tblmap AS b \n"
        "WHERE module_name(a.sql) = b.module\n"
      " )\n"
      "UNION \n"
      "SELECT name FROM aux.sqlite_master\n"
      " WHERE type='table' AND (\n"
      "    module_name(sql) IS NULL OR \n"
      "    module_name(sql) IN (SELECT module FROM temp.tblmap)\n"
      " ) AND name NOT IN (\n"
      "  SELECT a.name || b.postfix \n"
        "FROM aux.sqlite_master AS a, temp.tblmap AS b \n"
        "WHERE module_name(a.sql) = b.module\n"
      " )\n"
      " ORDER BY name";
  }else{
    return
      "SELECT name FROM main.sqlite_master\n"
      " WHERE type='table' AND sql NOT LIKE 'CREATE VIRTUAL%%'\n"
      " UNION\n"
      "SELECT name FROM aux.sqlite_master\n"
      " WHERE type='table' AND sql NOT LIKE 'CREATE VIRTUAL%%'\n"
      " ORDER BY name";
  }
}
