
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(sqlite3 *VAR_1, const char *VAR_2){
  sqlite3_stmt *VAR_3;
  VAR_3 = FUNC_0(VAR_1,
            "SELECT sql FROM sqlite_master"
            " WHERE name LIKE '%q%%'"
            " ORDER BY 1",
            VAR_2);
  while( FUNC_5(VAR_3)==VAR_0 ){
    FUNC_1("%s;\n", FUNC_3(VAR_3, 0));
  }
  FUNC_4(VAR_3);
  VAR_3 = FUNC_0(VAR_1, "PRAGMA page_size");
  while( FUNC_5(VAR_3)==VAR_0 ){
    FUNC_1("PRAGMA page_size=%s;\n", FUNC_3(VAR_3, 0));
  }
  FUNC_4(VAR_3);
  VAR_3 = FUNC_0(VAR_1, "PRAGMA journal_mode");
  while( FUNC_5(VAR_3)==VAR_0 ){
    FUNC_1("PRAGMA journal_mode=%s;\n", FUNC_3(VAR_3, 0));
  }
  FUNC_4(VAR_3);
  VAR_3 = FUNC_0(VAR_1, "PRAGMA auto_vacuum");
  while( FUNC_5(VAR_3)==VAR_0 ){
    const char *VAR_4 = "???";
    switch( FUNC_2(VAR_3, 0) ){
      case 0: VAR_4 = "OFF"; break;
      case 1: VAR_4 = "FULL"; break;
      case 2: VAR_4 = "INCREMENTAL"; break;
    }
    FUNC_1("PRAGMA auto_vacuum=%s;\n", VAR_4);
  }
  FUNC_4(VAR_3);
  VAR_3 = FUNC_0(VAR_1, "PRAGMA encoding");
  while( FUNC_5(VAR_3)==VAR_0 ){
    FUNC_1("PRAGMA encoding=%s;\n", FUNC_3(VAR_3, 0));
  }
  FUNC_4(VAR_3);
}
