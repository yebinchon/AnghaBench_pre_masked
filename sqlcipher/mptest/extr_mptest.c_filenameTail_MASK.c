
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0){
  int VAR_1, VAR_2;
  for(VAR_1=VAR_2=0; VAR_0[VAR_1]; VAR_1++) if( FUNC_0(VAR_0[VAR_1]) ) VAR_2 = VAR_1+1;
  return VAR_0+VAR_2;
}
