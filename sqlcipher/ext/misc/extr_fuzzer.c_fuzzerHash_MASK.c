
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const char *VAR_1){
  unsigned int VAR_2 = 0;
  while( *VAR_1 ){ VAR_2 = (VAR_2<<3) ^ (VAR_2>>29) ^ *(VAR_1++); }
  return VAR_2 % VAR_0;
}
