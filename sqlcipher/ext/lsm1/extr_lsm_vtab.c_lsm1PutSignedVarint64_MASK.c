
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sqlite3_uint64 ;
typedef int sqlite3_int64 ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_0, sqlite3_int64 VAR_1){
  sqlite3_uint64 VAR_2;
  if( VAR_1>=0 ){
    VAR_2 = (sqlite3_uint64)VAR_1;
    return FUNC_0(VAR_0, VAR_2*2);
  }else{
    VAR_2 = (sqlite3_uint64)(-1-VAR_1);
    return FUNC_0(VAR_0, VAR_2*2+1);
  }
}
