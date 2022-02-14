
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (unsigned char const*,int,int*) ;

__attribute__((used)) static int FUNC_1(
  const unsigned char *VAR_0,
  int VAR_1,
  sqlite3_int64 *VAR_2
){
  sqlite3_uint64 VAR_3 = 0;
  VAR_1 = FUNC_0(VAR_0, VAR_1, &VAR_3);
  if( VAR_3&1 ){
    *VAR_2 = -1 - (sqlite3_int64)(VAR_3>>1);
  }else{
    *VAR_2 = (sqlite3_int64)(VAR_3>>1);
  }
  return VAR_1;
}
