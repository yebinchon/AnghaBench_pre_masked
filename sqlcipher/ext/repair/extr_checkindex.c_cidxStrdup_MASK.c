
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

char *FUNC_3(int *VAR_1, const char *VAR_2){
  char *VAR_3 = 0;
  if( *VAR_1==VAR_0 ){
    int VAR_4 = (int)FUNC_2(VAR_2);
    VAR_3 = FUNC_0(VAR_1, VAR_4+1);
    if( VAR_3 ) FUNC_1(VAR_3, VAR_2, VAR_4+1);
  }
  return VAR_3;
}
