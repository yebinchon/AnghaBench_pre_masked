
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0){
  char VAR_1;
  while( ((VAR_1=VAR_0[0])>='0' && VAR_1<='9') || VAR_1=='.' || VAR_1=='E' || VAR_1=='e'
          || VAR_1=='+' || VAR_1=='-' ) VAR_0++;
  return VAR_0[0]==0;
}
