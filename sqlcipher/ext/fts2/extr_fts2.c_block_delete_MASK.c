
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_2,
                        sqlite_int64 VAR_3, sqlite_int64 VAR_4){
  sqlite3_stmt *VAR_5;
  int VAR_6 = FUNC_0(VAR_2, VAR_0, &VAR_5);
  if( VAR_6!=VAR_1 ) return VAR_6;

  VAR_6 = FUNC_2(VAR_5, 1, VAR_3);
  if( VAR_6!=VAR_1 ) return VAR_6;

  VAR_6 = FUNC_2(VAR_5, 2, VAR_4);
  if( VAR_6!=VAR_1 ) return VAR_6;

  return FUNC_1(VAR_5);
}
