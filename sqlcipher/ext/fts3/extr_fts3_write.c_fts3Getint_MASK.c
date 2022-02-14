
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char **VAR_0){
  const char *VAR_1 = *VAR_0;
  int VAR_2 = 0;
  while( (*VAR_1)>='0' && (*VAR_1)<='9' && VAR_2<214748363 ) VAR_2 = 10*VAR_2 + *(VAR_1++) - '0';
  *VAR_0 = VAR_1;
  return VAR_2;
}
