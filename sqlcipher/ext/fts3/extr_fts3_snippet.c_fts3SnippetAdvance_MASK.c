
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,int*) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, int *VAR_1, int VAR_2){
  char *VAR_3 = *VAR_0;
  if( VAR_3 ){
    int VAR_4 = *VAR_1;

    while( VAR_4<VAR_2 ){
      if( 0==(*VAR_3 & 0xFE) ){
        VAR_4 = -1;
        VAR_3 = 0;
        break;
      }
      FUNC_0(&VAR_3, &VAR_4);
    }

    *VAR_1 = VAR_4;
    *VAR_0 = VAR_3;
  }
}
