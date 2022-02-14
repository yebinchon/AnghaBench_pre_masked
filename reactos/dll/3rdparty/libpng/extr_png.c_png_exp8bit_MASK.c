
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_fixed_point ;
typedef int png_byte ;


 int FUNC_0 (int ) ;

__attribute__((used)) static png_byte
FUNC_1(png_fixed_point VAR_0)
{

   png_uint_32 VAR_1 = FUNC_0(VAR_0);





   VAR_1 -= VAR_1 >> 8;
   return (png_byte)(((VAR_1 + 0x7fffffU) >> 24) & 0xff);
}
