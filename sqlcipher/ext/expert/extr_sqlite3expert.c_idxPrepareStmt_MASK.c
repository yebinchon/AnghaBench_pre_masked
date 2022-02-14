
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,char const*,int,int **,int ) ;

__attribute__((used)) static int FUNC_2(
  sqlite3 *VAR_1,
  sqlite3_stmt **VAR_2,
  char **VAR_3,
  const char *VAR_4
){
  int VAR_5 = FUNC_1(VAR_1, VAR_4, -1, VAR_2, 0);
  if( VAR_5!=VAR_0 ){
    *VAR_2 = 0;
    FUNC_0(VAR_1, VAR_3);
  }
  return VAR_5;
}
