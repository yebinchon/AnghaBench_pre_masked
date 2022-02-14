
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const char *VAR_0, int VAR_1, char *VAR_2, int *VAR_3){
  int VAR_4, VAR_5, VAR_6;
  int VAR_7 = 0;
  for(VAR_4=0; VAR_4<VAR_1; VAR_4++){
    char VAR_8 = VAR_0[VAR_4];
    if( VAR_8>='A' && VAR_8<='Z' ){
      VAR_2[VAR_4] = VAR_8 - 'A' + 'a';
    }else{
      if( VAR_8>='0' && VAR_8<='9' ) VAR_7 = 1;
      VAR_2[VAR_4] = VAR_8;
    }
  }
  VAR_5 = VAR_7 ? 3 : 10;
  if( VAR_1>VAR_5*2 ){
    for(VAR_6=VAR_5, VAR_4=VAR_1-VAR_5; VAR_4<VAR_1; VAR_4++, VAR_6++){
      VAR_2[VAR_6] = VAR_2[VAR_4];
    }
    VAR_4 = VAR_6;
  }
  VAR_2[VAR_4] = 0;
  *VAR_3 = VAR_4;
}
