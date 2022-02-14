
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
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char const*,int,int,int *,int *) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
  fulltext_vtab *VAR_5,
  sqlite_int64 VAR_6,
  const char *VAR_7, int VAR_8, int VAR_9,
  sqlite_int64 *VAR_10, sqlite_int64 *VAR_11
){
  sqlite3_stmt *VAR_12 = ((void*)0);
  int VAR_13;

  FUNC_0( VAR_6!=0 );
  FUNC_0( VAR_7!=((void*)0) );
  FUNC_0( VAR_8!=0 );
  FUNC_0( VAR_10!=((void*)0) );
  FUNC_0( VAR_11!=((void*)0) );

  VAR_13 = FUNC_2(VAR_5, VAR_0, &VAR_12);
  if( VAR_13!=VAR_3 ) return VAR_13;

  VAR_13 = FUNC_3(VAR_12, 1, VAR_6);
  if( VAR_13!=VAR_3 ) return VAR_13;

  VAR_13 = FUNC_6(VAR_12);
  if( VAR_13==VAR_1 ) return VAR_2;
  if( VAR_13!=VAR_4 ) return VAR_13;

  FUNC_1(FUNC_4(VAR_12, 0), FUNC_5(VAR_12, 0),
                        VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);




  VAR_13 = FUNC_6(VAR_12);
  if( VAR_13==VAR_4 ) return VAR_2;
  if( VAR_13!=VAR_1 ) return VAR_13;

  return VAR_3;
}
