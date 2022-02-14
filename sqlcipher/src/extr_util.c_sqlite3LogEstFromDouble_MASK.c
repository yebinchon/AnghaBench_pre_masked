
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef int u64 ;
typedef int a ;
typedef int LogEst ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,double*,int) ;
 int FUNC_2 (int) ;

LogEst FUNC_3(double VAR_0){
  u64 VAR_1;
  LogEst VAR_2;
  FUNC_0( sizeof(VAR_0)==8 && sizeof(VAR_1)==8 );
  if( VAR_0<=1 ) return 0;
  if( VAR_0<=2000000000 ) return FUNC_2((u64)VAR_0);
  FUNC_1(&VAR_1, &VAR_0, 8);
  VAR_2 = (VAR_1>>52) - 1022;
  return VAR_2*10;
}
