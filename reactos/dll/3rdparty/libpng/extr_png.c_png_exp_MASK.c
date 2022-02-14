
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_fixed_point ;


 int* VAR_0 ;

__attribute__((used)) static png_uint_32
FUNC_0(png_fixed_point VAR_1)
{
   if (VAR_1 > 0 && VAR_1 <= 0xfffff)
   {

      png_uint_32 VAR_2 = VAR_0[(VAR_1 >> 12) & 0x0f];







      if (VAR_1 & 0x800)
         VAR_2 -= (((VAR_2 >> 16) * 44938U) + 16U) >> 5;

      if (VAR_1 & 0x400)
         VAR_2 -= (((VAR_2 >> 16) * 45181U) + 32U) >> 6;

      if (VAR_1 & 0x200)
         VAR_2 -= (((VAR_2 >> 16) * 45303U) + 64U) >> 7;

      if (VAR_1 & 0x100)
         VAR_2 -= (((VAR_2 >> 16) * 45365U) + 128U) >> 8;

      if (VAR_1 & 0x080)
         VAR_2 -= (((VAR_2 >> 16) * 45395U) + 256U) >> 9;

      if (VAR_1 & 0x040)
         VAR_2 -= (((VAR_2 >> 16) * 45410U) + 512U) >> 10;


      VAR_2 -= (((VAR_2 >> 16) * 355U * (VAR_1 & 0x3fU)) + 256U) >> 9;


      VAR_2 >>= VAR_1 >> 16;
      return VAR_2;
   }


   if (VAR_1 <= 0)
      return VAR_0[0];


   return 0;
}
