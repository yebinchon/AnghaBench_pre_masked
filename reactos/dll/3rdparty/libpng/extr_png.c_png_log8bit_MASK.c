
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_int_32 ;


 int* VAR_0 ;

__attribute__((used)) static png_int_32
FUNC_0(unsigned int VAR_1)
{
   unsigned int VAR_2 = 0;






   if ((VAR_1 &= 0xff) == 0)
      return -1;

   if ((VAR_1 & 0xf0) == 0)
      VAR_2 = 4, VAR_1 <<= 4;

   if ((VAR_1 & 0xc0) == 0)
      VAR_2 += 2, VAR_1 <<= 2;

   if ((VAR_1 & 0x80) == 0)
      VAR_2 += 1, VAR_1 <<= 1;


   return (png_int_32)((VAR_2 << 16) + ((VAR_0[VAR_1-128]+32768)>>16));
}
