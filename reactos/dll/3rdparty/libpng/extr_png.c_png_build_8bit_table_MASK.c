
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structrp ;
typedef int png_fixed_point ;
typedef scalar_t__** png_bytepp ;
typedef scalar_t__* png_bytep ;
typedef scalar_t__ png_byte ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(png_structrp VAR_0, png_bytepp VAR_1,
    png_fixed_point VAR_2)
{
   unsigned int VAR_3;
   png_bytep VAR_4 = *VAR_1 = (png_bytep)FUNC_2(VAR_0, 256);

   if (FUNC_1(VAR_2) != 0)
      for (VAR_3=0; VAR_3<256; VAR_3++)
         VAR_4[VAR_3] = FUNC_0(VAR_3, VAR_2);

   else
      for (VAR_3=0; VAR_3<256; ++VAR_3)
         VAR_4[VAR_3] = (png_byte)(VAR_3 & 0xff);
}
