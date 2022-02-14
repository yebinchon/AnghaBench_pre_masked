
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*) ;

char *FUNC_3(int *VAR_2, const char *VAR_3, int VAR_4){
  char *VAR_5 = 0;
  if( *VAR_2==VAR_1 ){
    if( VAR_4<0 ){
      VAR_4 = (int)FUNC_2(VAR_3);
    }
    VAR_5 = (char*)FUNC_1(VAR_4+1);
    if( VAR_5 ){
      FUNC_0(VAR_5, VAR_3, VAR_4);
      VAR_5[VAR_4] = '\0';
    }else{
      *VAR_2 = VAR_0;
    }
  }
  return VAR_5;
}
