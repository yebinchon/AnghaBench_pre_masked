
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  sqlite3_int64 VAR_3, VAR_4, VAR_5, VAR_6;
  int VAR_7, VAR_8;
  VAR_3 = FUNC_1(VAR_2[0]);
  VAR_4 = FUNC_1(VAR_2[1]);
  VAR_5 = FUNC_1(VAR_2[2]);
  VAR_6 = 0;
  for(VAR_8=0, VAR_7=VAR_5; VAR_7<63; VAR_7+=VAR_4, VAR_8++){
    VAR_6 |= ((VAR_3>>VAR_7)&1)<<VAR_8;
  }
  FUNC_0(VAR_0, VAR_6);
}
