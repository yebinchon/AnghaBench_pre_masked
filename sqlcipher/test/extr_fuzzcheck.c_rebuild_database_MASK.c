
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(sqlite3 *VAR_0, int VAR_1){
  int VAR_2;
  char *VAR_3;
  VAR_3 = FUNC_4(
     "BEGIN;\n"
     "CREATE TEMP TABLE dbx AS SELECT DISTINCT dbcontent FROM db;\n"
     "DELETE FROM db;\n"
     "INSERT INTO db(dbid, dbcontent) "
        " SELECT NULL, dbcontent FROM dbx ORDER BY 2;\n"
     "DROP TABLE dbx;\n"
     "CREATE TEMP TABLE sx AS SELECT DISTINCT sqltext FROM xsql %s;\n"
     "DELETE FROM xsql;\n"
     "INSERT INTO xsql(sqlid,sqltext) "
        " SELECT NULL, sqltext FROM sx ORDER BY 2;\n"
     "DROP TABLE sx;\n"
     "COMMIT;\n"
     "PRAGMA page_size=1024;\n"
     "VACUUM;\n",
     VAR_1 ? " WHERE isdbsql(sqltext)" : ""
  );
  VAR_2 = FUNC_2(VAR_0, VAR_3, 0, 0, 0);
  FUNC_3(VAR_3);
  if( VAR_2 ) FUNC_0("cannot rebuild: %s", FUNC_1(VAR_0));
}
