
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

int FUNC_3(
  const char *VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  const char *VAR_3
){
  int VAR_4;
  for(VAR_4=0; FUNC_0(VAR_0[VAR_4]) && VAR_0[VAR_4]!='.'; VAR_4++){}
  if( VAR_3 && (FUNC_2(VAR_0, VAR_3, VAR_4)!=0 || VAR_3[VAR_4]!=0) ){
    return 0;
  }
  VAR_0 += VAR_4+1;
  for(VAR_4=0; FUNC_0(VAR_0[VAR_4]) && VAR_0[VAR_4]!='.'; VAR_4++){}
  if( VAR_2 && (FUNC_2(VAR_0, VAR_2, VAR_4)!=0 || VAR_2[VAR_4]!=0) ){
    return 0;
  }
  VAR_0 += VAR_4+1;
  if( VAR_1 && FUNC_1(VAR_0, VAR_1)!=0 ){
    return 0;
  }
  return 1;
}
