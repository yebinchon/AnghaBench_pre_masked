
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_env ;


 int VAR_0 ;
 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int *,void*,size_t) ;

void *FUNC_2(lsm_env *VAR_1, void *VAR_2, size_t VAR_3, int *VAR_4){
  void *VAR_5 = 0;
  if( *VAR_4 ){
    FUNC_0(VAR_1, VAR_2);
  }else{
    VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
    if( !VAR_5 ) *VAR_4 = VAR_0;
  }
  return VAR_5;
}
