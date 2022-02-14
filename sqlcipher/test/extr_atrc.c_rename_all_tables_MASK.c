
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_str ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char const*,char*,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,char const*,char const*) ;

int FUNC_8(
  sqlite3 *VAR_2,
  sqlite3_str *VAR_3,
  sqlite3_str *VAR_4
){
  sqlite3_stmt *VAR_5;
  int VAR_6;
  int VAR_7 = 0;

  VAR_6 = FUNC_5(VAR_2,
         "SELECT name FROM sqlite_master WHERE type='table'"
         " AND name NOT LIKE 'sqlite_%';",
         -1, &VAR_5, 0);
  if( VAR_6 ) return VAR_6;
  while( FUNC_6(VAR_5)==VAR_1 ){
    const char *VAR_8 = (const char*)FUNC_1(VAR_5, 0);
    char *VAR_9;
    char VAR_10[2];

    VAR_10[0] = (VAR_7%26) + 'a';
    VAR_10[1] = 0;
    VAR_9 = FUNC_4("tx%d", ++VAR_7);
    if( VAR_4 ){
      FUNC_7(VAR_4,
        "ALTER TABLE \"%s\" RENAME TO \"%w\";\n",
        VAR_9, VAR_8
      );
    }
    FUNC_0(VAR_2, VAR_8, VAR_10, VAR_3, VAR_4);
    FUNC_7(VAR_3,
      "ALTER TABLE \"%w\" RENAME TO \"%s\";\n",
      VAR_8, VAR_9
    );
    FUNC_3(VAR_9);
  }
  FUNC_2(VAR_5);
  return VAR_0;
}
