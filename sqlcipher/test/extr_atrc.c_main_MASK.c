
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_str ;
typedef int sqlite3 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int **) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int VAR_0 ;

int FUNC_8(int VAR_1, char **VAR_2){
  sqlite3 *VAR_3;
  int VAR_4;
  sqlite3_str *VAR_5;
  sqlite3_str *VAR_6;
  char *VAR_7;
  char *VAR_8, *VAR_9;
  if( VAR_1!=2 ){
    FUNC_0(VAR_0, "Usage: %s DATABASE\n", VAR_2[0]);
  }
  VAR_7 = VAR_2[1];
  VAR_4 = FUNC_5(VAR_7, &VAR_3);
  if( VAR_4 ){
    FUNC_0(VAR_0, "sqlite3_open() returns %d\n", VAR_4);
    return 1;
  }
  VAR_5 = FUNC_7(VAR_3);
  VAR_6 = FUNC_7(VAR_3);
  FUNC_2(VAR_3, VAR_5, VAR_6);
  VAR_8 = FUNC_6(VAR_5);
  VAR_9 = FUNC_6(VAR_6);
  FUNC_3(VAR_3);
  FUNC_1("BEGIN;\n");
  FUNC_1("%s", VAR_8);
  FUNC_4(VAR_8);
  FUNC_1(".schema --indent\n");
  FUNC_1("PRAGMA integrity_check;\n");
  FUNC_1("%s", VAR_9);
  FUNC_4(VAR_9);
  FUNC_1("PRAGMA integrity_check;\n");
  FUNC_1("ROLLBACK;\n");
  return 0;
}
