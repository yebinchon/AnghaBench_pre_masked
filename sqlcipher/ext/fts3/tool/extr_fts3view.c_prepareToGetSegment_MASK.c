
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int FUNC_0 (char const*) ;
 int * FUNC_1 (int *,char*,char const*,int ) ;

__attribute__((used)) static sqlite3_stmt *FUNC_2(
  sqlite3 *VAR_0,
  const char *VAR_1,
  const char *VAR_2
){
  sqlite3_stmt *VAR_3;
  if( VAR_2[0]=='r' ){
    VAR_3 = FUNC_1(VAR_0, "SELECT root FROM '%q_segdir' WHERE rowid=%lld",
                    VAR_1, FUNC_0(VAR_2+1));
  }else{
    VAR_3 = FUNC_1(VAR_0, "SELECT block FROM '%q_segments' WHERE blockid=%lld",
                    VAR_1, FUNC_0(VAR_2));
  }
  return VAR_3;
}
