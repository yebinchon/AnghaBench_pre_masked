
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
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char const*,int,int ) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int ) ;

__attribute__((used)) static int FUNC_5(fulltext_vtab *VAR_3, int VAR_4, int VAR_5,
                      sqlite_int64 VAR_6,
                      sqlite_int64 VAR_7,
                      sqlite_int64 VAR_8,
                      const char *VAR_9, int VAR_10){
  sqlite3_stmt *VAR_11;
  int VAR_12 = FUNC_0(VAR_3, VAR_0, &VAR_11);
  if( VAR_12!=VAR_1 ) return VAR_12;

  VAR_12 = FUNC_3(VAR_11, 1, VAR_4);
  if( VAR_12!=VAR_1 ) return VAR_12;

  VAR_12 = FUNC_3(VAR_11, 2, VAR_5);
  if( VAR_12!=VAR_1 ) return VAR_12;

  VAR_12 = FUNC_4(VAR_11, 3, VAR_6);
  if( VAR_12!=VAR_1 ) return VAR_12;

  VAR_12 = FUNC_4(VAR_11, 4, VAR_7);
  if( VAR_12!=VAR_1 ) return VAR_12;

  VAR_12 = FUNC_4(VAR_11, 5, VAR_8);
  if( VAR_12!=VAR_1 ) return VAR_12;

  VAR_12 = FUNC_2(VAR_11, 6, VAR_9, VAR_10, VAR_2);
  if( VAR_12!=VAR_1 ) return VAR_12;

  return FUNC_1(VAR_11);
}
