
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;



uint64
FUNC_0(const char *VAR_0, int VAR_1)
{
 uint64 VAR_2 = 0;

 if (*VAR_0 == '\200')
 {

  while (--VAR_1)
  {
   VAR_2 <<= 8;
   VAR_2 |= (unsigned char) (*++VAR_0);
  }
 }
 else
 {

  while (VAR_1-- && *VAR_0 >= '0' && *VAR_0 <= '7')
  {
   VAR_2 <<= 3;
   VAR_2 |= (*VAR_0 - '0');
   VAR_0++;
  }
 }
 return VAR_2;
}
