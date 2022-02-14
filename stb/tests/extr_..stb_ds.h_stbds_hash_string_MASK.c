
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (size_t,int) ;
 size_t FUNC_1 (size_t,int) ;

size_t FUNC_2(char *VAR_0, size_t VAR_1)
{
  size_t VAR_2 = VAR_1;
  while (*VAR_0)
     VAR_2 = FUNC_0(VAR_2, 9) + (unsigned char) *VAR_0++;


  VAR_2 ^= VAR_1;
  VAR_2 = (~VAR_2) + (VAR_2 << 18);
  VAR_2 ^= VAR_2 ^ FUNC_1(VAR_2,31);
  VAR_2 = VAR_2 * 21;
  VAR_2 ^= VAR_2 ^ FUNC_1(VAR_2,11);
  VAR_2 += (VAR_2 << 6);
  VAR_2 ^= FUNC_1(VAR_2,22);
  return VAR_2+VAR_1;
}
