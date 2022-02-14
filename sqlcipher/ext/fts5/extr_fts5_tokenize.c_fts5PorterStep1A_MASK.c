
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, int *VAR_1){
  int VAR_2 = *VAR_1;
  if( VAR_0[VAR_2-1]=='s' ){
    if( VAR_0[VAR_2-2]=='e' ){
      if( (VAR_2>4 && VAR_0[VAR_2-4]=='s' && VAR_0[VAR_2-3]=='s')
       || (VAR_2>3 && VAR_0[VAR_2-3]=='i' )
      ){
        *VAR_1 = VAR_2-2;
      }else{
        *VAR_1 = VAR_2-1;
      }
    }
    else if( VAR_0[VAR_2-2]!='s' ){
      *VAR_1 = VAR_2-1;
    }
  }
}
