
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef scalar_t__ i64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  i64 VAR_3;
  int VAR_4;
  FUNC_1( VAR_1==1 );
  FUNC_0(VAR_1);
  VAR_3 = FUNC_4(VAR_2[0]);
  if( VAR_3<0 ) VAR_3 = 0;
  VAR_4 = FUNC_3(VAR_0, VAR_3);
  if( VAR_4 ){
    FUNC_2(VAR_0, VAR_4);
  }
}
