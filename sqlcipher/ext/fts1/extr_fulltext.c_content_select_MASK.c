
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(fulltext_vtab *VAR_4, sqlite_int64 VAR_5,
                          char **VAR_6){
  sqlite3_stmt *VAR_7;
  int VAR_8 = FUNC_1(VAR_4, VAR_0, &VAR_7);
  if( VAR_8!=VAR_2 ) return VAR_8;

  VAR_8 = FUNC_3(VAR_7, 1, VAR_5);
  if( VAR_8!=VAR_2 ) return VAR_8;

  VAR_8 = FUNC_2(VAR_4, VAR_0, &VAR_7);
  if( VAR_8!=VAR_3 ) return VAR_8;

  *VAR_6 = FUNC_6((const char *)FUNC_4(VAR_7, 0));



  VAR_8 = FUNC_5(VAR_7);
  if( VAR_8==VAR_1 ) return VAR_2;

  FUNC_0(*VAR_6);
  return VAR_8;
}
