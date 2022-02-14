
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static long
FUNC_0(const uint8 *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = VAR_0;
 int VAR_5;

 while (VAR_3--)
 {
  VAR_4 ^= (*VAR_2++) << 16;
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  {
   VAR_4 <<= 1;
   if (VAR_4 & 0x1000000)
    VAR_4 ^= VAR_1;
  }
 }
 return VAR_4 & 0xffffffL;
}
