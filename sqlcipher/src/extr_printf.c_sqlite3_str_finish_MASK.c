
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_str ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

char *FUNC_2(sqlite3_str *VAR_1){
  char *VAR_2;
  if( VAR_1!=0 && VAR_1!=&VAR_0 ){
    VAR_2 = FUNC_0(VAR_1);
    FUNC_1(VAR_1);
  }else{
    VAR_2 = 0;
  }
  return VAR_2;
}
