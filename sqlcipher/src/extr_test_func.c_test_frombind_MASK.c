
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_uint64 ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  sqlite3_uint64 VAR_3 = 0;
  int VAR_4;
  for(VAR_4=0; VAR_4<VAR_1 && VAR_4<63; VAR_4++){
    if( FUNC_1(VAR_2[VAR_4]) ) VAR_3 |= ((sqlite3_uint64)1)<<VAR_4;
  }
  FUNC_0(VAR_0, (sqlite3_int64)VAR_3);
}
