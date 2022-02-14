
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int i64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static sqlite3_int64 FUNC_2(sqlite3_value *VAR_1, i64 VAR_2){
  if( VAR_1 ){
    int VAR_3 = FUNC_1(VAR_1);
    if( VAR_3==VAR_0 ){
      return FUNC_0(VAR_1);
    }
  }
  return VAR_2;
}
