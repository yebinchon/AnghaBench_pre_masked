
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int LogEst ;



__attribute__((used)) static sqlite3_uint64 FUNC_0(LogEst VAR_0){
  sqlite3_uint64 VAR_1;
  if( VAR_0<10 ) return 1;
  VAR_1 = VAR_0%10;
  VAR_0 /= 10;
  if( VAR_1>=5 ) VAR_1 -= 2;
  else if( VAR_1>=1 ) VAR_1 -= 1;
  if( VAR_0>=3 ) return (VAR_1+8)<<(VAR_0-3);
  return (VAR_1+8)>>(3-VAR_0);
}
