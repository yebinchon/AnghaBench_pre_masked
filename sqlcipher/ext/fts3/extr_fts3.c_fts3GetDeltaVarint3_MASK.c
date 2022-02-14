
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(
  char **VAR_0,
  char *VAR_1,
  int VAR_2,
  sqlite3_int64 *VAR_3
){
  if( *VAR_0>=VAR_1 ){
    *VAR_0 = 0;
  }else{
    sqlite3_int64 VAR_4;
    *VAR_0 += FUNC_0(*VAR_0, &VAR_4);
    if( VAR_2 ){
      *VAR_3 -= VAR_4;
    }else{
      *VAR_3 += VAR_4;
    }
  }
}
