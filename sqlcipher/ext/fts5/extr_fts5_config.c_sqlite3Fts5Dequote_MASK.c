
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;

void FUNC_3(char *VAR_0){
  char VAR_1;

  FUNC_0( 0==FUNC_2(VAR_0[0]) );
  VAR_1 = VAR_0[0];
  if( VAR_1=='[' || VAR_1=='\'' || VAR_1=='"' || VAR_1=='`' ){
    FUNC_1(VAR_0);
  }
}
