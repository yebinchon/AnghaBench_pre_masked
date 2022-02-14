
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int lsm_cursor ;
typedef int MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;

int FUNC_4(lsm_cursor *VAR_1){
  if( VAR_1 ){
    lsm_db *VAR_2 = FUNC_3((MultiCursor *)VAR_1);
    FUNC_0(VAR_2);
    FUNC_2((MultiCursor *)VAR_1, 1);
    FUNC_1(VAR_2);
    FUNC_0(VAR_2);
  }
  return VAR_0;
}
