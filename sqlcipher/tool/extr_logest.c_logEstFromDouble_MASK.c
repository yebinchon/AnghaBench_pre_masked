
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef int sqlite3_uint64 ;
typedef int a ;
typedef int LogEst ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,double*,int) ;

__attribute__((used)) static LogEst FUNC_3(double VAR_0){
  sqlite3_uint64 VAR_1;
  LogEst VAR_2;
  FUNC_0( sizeof(VAR_0)==8 && sizeof(VAR_1)==8 );
  if( VAR_0<=0.0 ) return -32768;
  if( VAR_0<0.01 ) return -FUNC_3(1.0/VAR_0);
  if( VAR_0<1.0 ) return FUNC_3(100.0*VAR_0) - 66;
  if( VAR_0<1024.0 ) return FUNC_1((sqlite3_uint64)(1024.0*VAR_0)) - 100;
  if( VAR_0<=2000000000.0 ) return FUNC_1((sqlite3_uint64)VAR_0);
  FUNC_2(&VAR_1, &VAR_0, 8);
  VAR_2 = (VAR_1>>52) - 1022;
  return VAR_2*10;
}
