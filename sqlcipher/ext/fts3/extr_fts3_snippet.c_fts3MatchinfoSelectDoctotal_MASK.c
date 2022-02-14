
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int sqlite3_stmt ;
typedef scalar_t__ sqlite3_int64 ;
typedef int Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,scalar_t__*) ;
 int FUNC_2 (int *,int **) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
  Fts3Table *VAR_2,
  sqlite3_stmt **VAR_3,
  sqlite3_int64 *VAR_4,
  const char **VAR_5
){
  sqlite3_stmt *VAR_6;
  const char *VAR_7;
  sqlite3_int64 VAR_8;

  if( !*VAR_3 ){
    int VAR_9 = FUNC_2(VAR_2, VAR_3);
    if( VAR_9!=VAR_1 ) return VAR_9;
  }
  VAR_6 = *VAR_3;
  FUNC_0( FUNC_4(VAR_6)==1 );

  VAR_7 = FUNC_3(VAR_6, 0);
  VAR_7 += FUNC_1(VAR_7, &VAR_8);
  if( VAR_8==0 ) return VAR_0;
  *VAR_4 = (u32)VAR_8;

  if( VAR_5 ) *VAR_5 = VAR_7;
  return VAR_1;
}
