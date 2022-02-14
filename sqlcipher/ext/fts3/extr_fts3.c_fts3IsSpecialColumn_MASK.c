
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(
  const char *VAR_0,
  int *VAR_1,
  char **VAR_2
){
  char *VAR_3;
  const char *VAR_4 = VAR_0;

  while( *VAR_4!='=' ){
    if( *VAR_4=='\0' ) return 0;
    VAR_4++;
  }

  *VAR_1 = (int)(VAR_4-VAR_0);
  VAR_3 = FUNC_1("%s", &VAR_4[1]);
  if( VAR_3 ){
    FUNC_0(VAR_3);
  }
  *VAR_2 = VAR_3;
  return 1;
}
