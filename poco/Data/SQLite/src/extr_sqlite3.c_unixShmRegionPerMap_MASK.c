
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void){
  int VAR_0 = 32*1024;
  int VAR_1 = FUNC_1();
  FUNC_0( ((VAR_1-1)&VAR_1)==0 );
  if( VAR_1<VAR_0 ) return 1;
  return VAR_1/VAR_0;
}
