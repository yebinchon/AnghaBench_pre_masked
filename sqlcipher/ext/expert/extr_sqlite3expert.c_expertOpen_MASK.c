
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
typedef int ExpertCsr ;


 int VAR_0 ;
 int * FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_1, sqlite3_vtab_cursor **VAR_2){
  int VAR_3 = VAR_0;
  ExpertCsr *VAR_4;
  (void)VAR_1;
  VAR_4 = FUNC_0(&VAR_3, sizeof(ExpertCsr));
  *VAR_2 = (sqlite3_vtab_cursor*)VAR_4;
  return VAR_3;
}
