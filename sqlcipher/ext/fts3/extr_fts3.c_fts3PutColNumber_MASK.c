
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(char **VAR_0, int VAR_1){
  int VAR_2 = 0;
  if( VAR_1 ){
    char *VAR_3 = *VAR_0;
    VAR_2 = 1 + FUNC_0(&VAR_3[1], VAR_1);
    *VAR_3 = 0x01;
    *VAR_0 = &VAR_3[VAR_2];
  }
  return VAR_2;
}
