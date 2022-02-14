
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int,char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(
  char **VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  char **VAR_3
){
  const char *VAR_4;
  VAR_4 = FUNC_3(VAR_1,(int)FUNC_1(VAR_1),VAR_2);
  if( VAR_4==0 ) return 0;
  if( *VAR_3 ){
    *VAR_0 = FUNC_0("more than one '%s' parameter", VAR_1);
    return 1;
  }
  *VAR_3 = FUNC_0("%s", VAR_4);
  if( *VAR_3==0 ){
    *VAR_0 = FUNC_0("out of memory");
    return 1;
  }
  FUNC_4(*VAR_3);
  FUNC_2(*VAR_3);
  return 0;
}
