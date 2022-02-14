
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(char *VAR_0){
  char VAR_1;

  VAR_1 = VAR_0[0];
  if( VAR_1=='[' || VAR_1=='\'' || VAR_1=='"' || VAR_1=='`' ){
    int VAR_2 = 1;
    int VAR_3 = 0;


    if( VAR_1=='[' ) VAR_1 = ']';

    while( VAR_0[VAR_2] ){
      if( VAR_0[VAR_2]==VAR_1 ){
        if( VAR_0[VAR_2+1]!=VAR_1 ) break;
        VAR_0[VAR_3++] = VAR_1;
        VAR_2 += 2;
      }else{
        VAR_0[VAR_3++] = VAR_0[VAR_2++];
      }
    }
    VAR_0[VAR_3] = '\0';
  }
}
