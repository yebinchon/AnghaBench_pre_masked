
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int TestDb ;


 int FUNC_0 (int *,int ,void*) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(TestDb *VAR_1, int VAR_2){
  lsm_db *VAR_3 = FUNC_1(VAR_1);
  if( VAR_3 ){
    FUNC_0(VAR_3, (VAR_2 ? VAR_0 : 0), (void *)"client");
  }
}
