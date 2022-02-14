
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned long long) ;

unsigned int FUNC_2(const char *VAR_2, unsigned int VAR_3, unsigned long long *VAR_4)
{
 unsigned long long VAR_5;
 unsigned int VAR_6;

 VAR_5 = 0;
 VAR_6 = 0;
 while (1) {
  unsigned int VAR_7 = *VAR_2;
  unsigned int VAR_8 = VAR_7 | 0x20;
  unsigned int VAR_9;

  if ('0' <= VAR_7 && VAR_7 <= '9')
   VAR_9 = VAR_7 - '0';
  else if ('a' <= VAR_8 && VAR_8 <= 'f')
   VAR_9 = VAR_8 - 'a' + 10;
  else
   break;

  if (VAR_9 >= VAR_3)
   break;




  if (FUNC_1(VAR_5 & (~0ull << 60))) {
   if (VAR_5 > FUNC_0(VAR_1 - VAR_9, VAR_3))
    VAR_6 |= VAR_0;
  }
  VAR_5 = VAR_5 * VAR_3 + VAR_9;
  VAR_6++;
  VAR_2++;
 }
 *VAR_4 = VAR_5;
 return VAR_6;
}
