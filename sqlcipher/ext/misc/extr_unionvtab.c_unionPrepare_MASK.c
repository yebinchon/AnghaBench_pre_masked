
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char const*,int,int **,int ) ;

__attribute__((used)) static sqlite3_stmt *FUNC_4(
  int *VAR_1,
  sqlite3 *VAR_2,
  const char *VAR_3,
  char **VAR_4
){
  sqlite3_stmt *VAR_5 = 0;
  FUNC_0( VAR_4 );
  if( *VAR_1==VAR_0 ){
    int VAR_6 = FUNC_3(VAR_2, VAR_3, -1, &VAR_5, 0);
    if( VAR_6!=VAR_0 ){
      *VAR_4 = FUNC_2("sql error: %s", FUNC_1(VAR_2));
      *VAR_1 = VAR_6;
    }
  }
  return VAR_5;
}
