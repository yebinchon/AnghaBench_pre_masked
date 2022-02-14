
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
typedef int intarray_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  int VAR_4 = VAR_0;
  intarray_cursor *VAR_5;
  VAR_5 = FUNC_1(sizeof(intarray_cursor));
  if( VAR_5 ){
    FUNC_0(VAR_5, 0, sizeof(intarray_cursor));
    *VAR_3 = (sqlite3_vtab_cursor *)VAR_5;
    VAR_4 = VAR_1;
  }
  return VAR_4;
}
