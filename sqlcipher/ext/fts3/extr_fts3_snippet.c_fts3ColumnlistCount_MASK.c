
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char **VAR_0){
  char *VAR_1 = *VAR_0;
  char VAR_2 = 0;
  int VAR_3 = 0;


  while( 0xFE & (*VAR_1 | VAR_2) ){
    VAR_2 = *VAR_1++ & 0x80;
    if( !VAR_2 ) VAR_3++;
  }

  *VAR_0 = VAR_1;
  return VAR_3;
}
