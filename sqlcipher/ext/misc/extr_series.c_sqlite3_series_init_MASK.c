
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_api_routines ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*) ;

int FUNC_4(
  sqlite3 *VAR_3,
  char **VAR_4,
  const sqlite3_api_routines *VAR_5
){
  int VAR_6 = VAR_1;
  FUNC_0(VAR_5);

  if( FUNC_2()<3008012 ){
    *VAR_4 = FUNC_3(
        "generate_series() requires SQLite 3.8.12 or later");
    return VAR_0;
  }
  VAR_6 = FUNC_1(VAR_3, "generate_series", &VAR_2, 0);

  return VAR_6;
}
