
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const void *VAR_0, int VAR_1){
  int VAR_2 = 0;
  const char *VAR_3 = (const char *)VAR_0;
  while( VAR_1-- > 0 ){
    VAR_2 = (VAR_2<<3) ^ VAR_2 ^ *(VAR_3++);
  }
  return VAR_2 & 0x7fffffff;
}
