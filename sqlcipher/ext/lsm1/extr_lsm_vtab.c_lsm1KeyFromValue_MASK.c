
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  int VAR_2,
  sqlite3_value *VAR_3,
  u8 *VAR_4,
  const u8 **VAR_5,
  int *VAR_6
){
  if( VAR_2==VAR_0 ){
    *VAR_5 = (const u8*)FUNC_1(VAR_3);
    *VAR_6 = FUNC_2(VAR_3);
  }else if( VAR_2==VAR_1 ){
    *VAR_5 = (const u8*)FUNC_4(VAR_3);
    *VAR_6 = FUNC_2(VAR_3);
  }else{
    sqlite3_int64 VAR_7 = FUNC_3(VAR_3);
    if( VAR_7<0 ) VAR_7 = 0;
    *VAR_6 = FUNC_0(VAR_4, VAR_7);
    *VAR_5 = VAR_4;
  }
}
