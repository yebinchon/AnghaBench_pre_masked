
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

void FUNC_2(char *VAR_0){
  char VAR_1;
  int VAR_2, VAR_3;
  if( VAR_0==0 ) return;
  VAR_1 = VAR_0[0];
  if( !FUNC_1(VAR_1) ) return;
  if( VAR_1=='[' ) VAR_1 = ']';
  for(VAR_2=1, VAR_3=0;; VAR_2++){
    FUNC_0( VAR_0[VAR_2] );
    if( VAR_0[VAR_2]==VAR_1 ){
      if( VAR_0[VAR_2+1]==VAR_1 ){
        VAR_0[VAR_3++] = VAR_1;
        VAR_2++;
      }else{
        break;
      }
    }else{
      VAR_0[VAR_3++] = VAR_0[VAR_2];
    }
  }
  VAR_0[VAR_3] = 0;
}
