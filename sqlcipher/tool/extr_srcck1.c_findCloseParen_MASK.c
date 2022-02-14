
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(const char *VAR_0){
  unsigned int VAR_1 = 0;
  unsigned VAR_2;
  for(VAR_2=0; VAR_0[VAR_2]; VAR_2++){
    if( VAR_0[VAR_2]=='(' ) VAR_1++;
    if( VAR_0[VAR_2]==')' ){
      if( VAR_1==0 ) break;
      VAR_1--;
    }
  }
  return VAR_2;
}
