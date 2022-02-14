
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
typedef int Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  sqlite3_vtab_cursor *VAR_4;

  FUNC_0(VAR_2);





  *VAR_3 = VAR_4 = (sqlite3_vtab_cursor *)FUNC_2(sizeof(Fts3Cursor));
  if( !VAR_4 ){
    return VAR_0;
  }
  FUNC_1(VAR_4, 0, sizeof(Fts3Cursor));
  return VAR_1;
}
