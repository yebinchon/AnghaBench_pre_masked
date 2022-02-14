
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0){
  unsigned int VAR_1 = 0x08029FDF;
  unsigned int VAR_2 = 0x000361F8;
  if( VAR_0<768 || VAR_0>817 ) return 0;
  return (VAR_0 < 768+32) ?
      (VAR_1 & ((unsigned int)1 << (VAR_0-768))) :
      (VAR_2 & ((unsigned int)1 << (VAR_0-768-32)));
}
