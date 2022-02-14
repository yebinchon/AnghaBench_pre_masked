
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,int,char const*,int,int ) ;
 int FUNC_3 (int *,int,int *) ;

__attribute__((used)) static int FUNC_4(fulltext_vtab *VAR_3, sqlite3_value *VAR_4,
                          const char *VAR_5, int VAR_6){
  sqlite3_stmt *VAR_7;
  int VAR_8 = FUNC_0(VAR_3, VAR_0, &VAR_7);
  if( VAR_8!=VAR_1 ) return VAR_8;

  VAR_8 = FUNC_3(VAR_7, 1, VAR_4);
  if( VAR_8!=VAR_1 ) return VAR_8;

  VAR_8 = FUNC_2(VAR_7, 2, VAR_5, VAR_6, VAR_2);
  if( VAR_8!=VAR_1 ) return VAR_8;

  return FUNC_1(VAR_3, VAR_0, &VAR_7);
}
