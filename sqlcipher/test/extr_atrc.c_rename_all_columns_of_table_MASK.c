
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_str ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,char const*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char const*,char const*,...) ;

int FUNC_6(
  sqlite3 *VAR_3,
  const char *VAR_4,
  const char *VAR_5,
  sqlite3_str *VAR_6,
  sqlite3_str *VAR_7
){
  sqlite3_stmt *VAR_8;
  int VAR_9;
  int VAR_10 = 0;

  VAR_9 = FUNC_3(VAR_3,
         "SELECT name FROM pragma_table_info(?1);",
         -1, &VAR_8, 0);
  if( VAR_9 ) return VAR_9;
  FUNC_0(VAR_8, 1, VAR_4, -1, VAR_2);
  while( FUNC_4(VAR_8)==VAR_1 ){
    const char *VAR_11 = (const char*)FUNC_1(VAR_8, 0);
    VAR_10++;
    FUNC_5(VAR_6,
      "ALTER TABLE \"%w\" RENAME COLUMN \"%w\" TO \"%w%d\";\n",
      VAR_4, VAR_11, VAR_5, VAR_10
    );
    if( VAR_7 ){
      FUNC_5(VAR_7,
        "ALTER TABLE \"%w\" RENAME COLUMN \"%w%d\" TO \"%w\";\n",
        VAR_4, VAR_5, VAR_10, VAR_11
      );
    }
  }
  FUNC_2(VAR_8);
  return VAR_0;
}
