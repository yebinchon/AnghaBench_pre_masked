
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

unsigned long FUNC_0(unsigned long *VAR_1, unsigned int VAR_2) {
  if ((VAR_1[VAR_2 >> 5] & (VAR_0 << (VAR_2 & 0x1ful))) != 0)
    return (1);
  else
    return (0);
}
