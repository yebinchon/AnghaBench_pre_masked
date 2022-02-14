
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sqlite3 *VAR_1, const char *VAR_2, sqlite3_int64 VAR_3){
  sqlite3_stmt *VAR_4;
  int VAR_5 = 1;

  VAR_4 = FUNC_0(VAR_1, "SELECT block IS NULL FROM '%q_segments'"
                      " WHERE blockid=%lld", VAR_2, VAR_3);
  if( FUNC_3(VAR_4)==VAR_0 ){
    VAR_5 = FUNC_1(VAR_4, 0);
  }
  FUNC_2(VAR_4);
  return VAR_5;
}
