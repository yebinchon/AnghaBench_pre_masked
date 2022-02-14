
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_mutex ;
typedef int lsm_env ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
  lsm_env *VAR_2,
  int VAR_3,
  lsm_mutex **VAR_4
){
  FUNC_1( VAR_3>=1 && VAR_3<=(int)FUNC_0(VAR_1) );
  *VAR_4 = (lsm_mutex *)&VAR_1[VAR_3-1];
  return VAR_0;
}
