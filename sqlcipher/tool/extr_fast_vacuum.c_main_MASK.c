
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int sqlite3 ;
typedef int r ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char const*,...) ;
 int FUNC_9 (char const*,int **) ;
 int FUNC_10 (int,int *) ;
 int VAR_0 ;

int FUNC_11(int VAR_1, char **VAR_2){
  sqlite3 *VAR_3;
  int VAR_4;
  sqlite3_uint64 VAR_5;
  const char *VAR_6;
  char *VAR_7;
  char *VAR_8;
  char *VAR_9;

  if( VAR_1!=2 ){
    FUNC_2(VAR_0, "Usage: %s DATABASE\n", VAR_2[0]);
    return 1;
  }



  VAR_6 = VAR_2[1];
  FUNC_3("-- open database file \"%s\"\n", VAR_6);
  VAR_4 = FUNC_9(VAR_6, &VAR_3);
  if( VAR_4 ){
    FUNC_2(VAR_0, "%s: %s\n", VAR_6, FUNC_6(VAR_4));
    return 1;
  }





  FUNC_10(sizeof(VAR_5), &VAR_5);
  VAR_8 = FUNC_8("%s-vacuum-%016llx", VAR_6, VAR_5);
  VAR_7 = FUNC_8("%s-backup-%016llx", VAR_6, VAR_5);



  VAR_9 = FUNC_8("ATTACH '%q' AS vacuum_db;", VAR_8);
  FUNC_1(VAR_3, VAR_9);
  FUNC_7(VAR_9);
  FUNC_1(VAR_3, "PRAGMA writable_schema=ON");
  FUNC_1(VAR_3, "BEGIN");





  FUNC_0(VAR_3,
      "SELECT 'CREATE TABLE vacuum_db.' || substr(sql,14) "
      "  FROM sqlite_master WHERE type='table' AND name!='sqlite_sequence'"
      "   AND rootpage>0"
  );
  FUNC_0(VAR_3,
      "SELECT 'CREATE INDEX vacuum_db.' || substr(sql,14)"
      "  FROM sqlite_master WHERE sql LIKE 'CREATE INDEX %'"
  );
  FUNC_0(VAR_3,
      "SELECT 'CREATE UNIQUE INDEX vacuum_db.' || substr(sql,21) "
      "  FROM sqlite_master WHERE sql LIKE 'CREATE UNIQUE INDEX %'"
  );





  FUNC_0(VAR_3,
      "SELECT 'INSERT INTO vacuum_db.' || quote(name) "
      "|| ' SELECT * FROM main.' || quote(name) "
      "FROM main.sqlite_master "
      "WHERE type = 'table' AND name!='sqlite_sequence' "
      "  AND rootpage>0"
  );



  FUNC_0(VAR_3,
      "SELECT 'DELETE FROM vacuum_db.' || quote(name) "
      "FROM vacuum_db.sqlite_master WHERE name='sqlite_sequence'"
  );
  FUNC_0(VAR_3,
      "SELECT 'INSERT INTO vacuum_db.' || quote(name) "
      "|| ' SELECT * FROM main.' || quote(name) "
      "FROM vacuum_db.sqlite_master WHERE name=='sqlite_sequence'"
  );






  FUNC_1(VAR_3,
      "INSERT INTO vacuum_db.sqlite_master "
      "  SELECT type, name, tbl_name, rootpage, sql"
      "    FROM main.sqlite_master"
      "   WHERE type='view' OR type='trigger'"
      "      OR (type='table' AND rootpage=0)"
  );



  FUNC_1(VAR_3, "COMMIT");
  FUNC_3("-- close database\n");
  FUNC_5(VAR_3);






  FUNC_3("-- rename \"%s\" to \"%s\"\n", VAR_6, VAR_7);
  FUNC_4(VAR_6, VAR_7);
  FUNC_3("-- rename \"%s\" to \"%s\"\n", VAR_8, VAR_6);
  FUNC_4(VAR_8, VAR_6);


  FUNC_7(VAR_8);
  FUNC_7(VAR_7);
  return 0;
}
