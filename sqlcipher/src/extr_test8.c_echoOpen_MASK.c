
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
typedef int echo_vtab ;
typedef int echo_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_3, sqlite3_vtab_cursor **VAR_4){
  echo_cursor *VAR_5;
  if( FUNC_0((echo_vtab *)VAR_3, "xOpen") ){
    return VAR_0;
  }
  VAR_5 = FUNC_1(sizeof(echo_cursor));
  *VAR_4 = (sqlite3_vtab_cursor *)VAR_5;
  return (VAR_5 ? VAR_2 : VAR_1);
}
