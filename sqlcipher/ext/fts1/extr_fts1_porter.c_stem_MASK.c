
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(
  char **VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  int (*VAR_3)(const char*)
){
  char *VAR_4 = *VAR_0;
  while( *VAR_1 && *VAR_1==*VAR_4 ){ VAR_4++; VAR_1++; }
  if( *VAR_1!=0 ) return 0;
  if( VAR_3 && !VAR_3(VAR_4) ) return 1;
  while( *VAR_2 ){
    *(--VAR_4) = *(VAR_2++);
  }
  *VAR_0 = VAR_4;
  return 1;
}
