
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

uint32_t FUNC_0(const void *VAR_2, unsigned int VAR_3, uint32_t VAR_4 )
{
   const unsigned char *VAR_5 = (const unsigned char *)VAR_2;

   unsigned int VAR_6 = VAR_4 & 0xffff;
   unsigned int VAR_7 = VAR_4 >> 16;

   while (VAR_3 > 0)
   {
      int VAR_8 = VAR_3 < VAR_1 ? VAR_3 : VAR_1;
      int VAR_9;

      for (VAR_9 = VAR_8 / 16; VAR_9; --VAR_9, VAR_5 += 16)
      {
         VAR_6 += VAR_5[0]; VAR_7 += VAR_6; VAR_6 += VAR_5[1]; VAR_7 += VAR_6;
         VAR_6 += VAR_5[2]; VAR_7 += VAR_6; VAR_6 += VAR_5[3]; VAR_7 += VAR_6;
         VAR_6 += VAR_5[4]; VAR_7 += VAR_6; VAR_6 += VAR_5[5]; VAR_7 += VAR_6;
         VAR_6 += VAR_5[6]; VAR_7 += VAR_6; VAR_6 += VAR_5[7]; VAR_7 += VAR_6;

         VAR_6 += VAR_5[8]; VAR_7 += VAR_6; VAR_6 += VAR_5[9]; VAR_7 += VAR_6;
         VAR_6 += VAR_5[10]; VAR_7 += VAR_6; VAR_6 += VAR_5[11]; VAR_7 += VAR_6;
         VAR_6 += VAR_5[12]; VAR_7 += VAR_6; VAR_6 += VAR_5[13]; VAR_7 += VAR_6;
         VAR_6 += VAR_5[14]; VAR_7 += VAR_6; VAR_6 += VAR_5[15]; VAR_7 += VAR_6;
      }

      for (VAR_9 = VAR_8 % 16; VAR_9; --VAR_9) { VAR_6 += *VAR_5++; VAR_7 += VAR_6; }

      VAR_6 %= VAR_0;
      VAR_7 %= VAR_0;

      VAR_3 -= VAR_8;
   }

   return (VAR_7 << 16) | VAR_6;
}
