
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, int VAR_1){
  const char *VAR_2 = (const char *)VAR_0;
  unsigned VAR_3 = 0;
  if( VAR_1<=0 ) VAR_1 = (int) FUNC_0(VAR_2);
  while( VAR_1 > 0 ){
    VAR_3 = (VAR_3<<3) ^ VAR_3 ^ *VAR_2++;
    VAR_1--;
  }
  return (int)(VAR_3 & 0x7fffffff);
}
