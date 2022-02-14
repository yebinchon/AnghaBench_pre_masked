
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_env ;
typedef int env ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;

lsm_env *FUNC_2(void){
  static int VAR_0 = 0;
  static lsm_env VAR_1;
  if( VAR_0==0 ){
    FUNC_1(&VAR_1, FUNC_0(), sizeof(VAR_1));
    VAR_0 = 1;
  }
  return &VAR_1;
}
