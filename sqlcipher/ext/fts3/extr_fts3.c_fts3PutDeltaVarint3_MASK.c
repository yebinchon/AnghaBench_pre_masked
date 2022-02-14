
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(
  char **VAR_0,
  int VAR_1,
  sqlite3_int64 *VAR_2,
  int *VAR_3,
  sqlite3_int64 VAR_4
){
  sqlite3_int64 VAR_5;
  if( VAR_1==0 || *VAR_3==0 ){
    VAR_5 = VAR_4 - *VAR_2;
  }else{
    VAR_5 = *VAR_2 - VAR_4;
  }
  FUNC_0( *VAR_3 || *VAR_2==0 );
  FUNC_0( *VAR_3==0 || VAR_5>0 );
  *VAR_0 += FUNC_1(*VAR_0, VAR_5);
  *VAR_2 = VAR_4;
  *VAR_3 = 1;
}
