
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(char *VAR_0){
  int VAR_1;
  char VAR_2 = VAR_0[0];
  size_t VAR_3, VAR_4;

  if( VAR_2!='\'' && VAR_2!='"' ) return;
  VAR_4 = FUNC_0(VAR_0);
  if( VAR_4<2 || VAR_0[VAR_4-1]!=VAR_0[0] ) return;
  for(VAR_3=1, VAR_1=0; VAR_3<VAR_4-1; VAR_3++){
    if( VAR_0[VAR_3]==VAR_2 && VAR_0[VAR_3+1]==VAR_2 ) VAR_3++;
    VAR_0[VAR_1++] = VAR_0[VAR_3];
  }
  VAR_0[VAR_1] = 0;
}
