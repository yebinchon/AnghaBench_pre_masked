
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_structp ;
typedef int png_size_t ;
typedef long png_fixed_point ;
typedef int png_byte ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,long,long) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int VAR_2 ;

void
FUNC_5(png_structp VAR_3, png_fixed_point VAR_4,
   png_fixed_point VAR_5, png_fixed_point VAR_6, png_fixed_point VAR_7,
   png_fixed_point VAR_8, png_fixed_point VAR_9, png_fixed_point VAR_10,
   png_fixed_point VAR_11)
{



   png_byte VAR_12[32];

   FUNC_1(1, "in png_write_cHRM\n");

   if (VAR_4 > 80000L || VAR_5 > 80000L || VAR_4 + VAR_5 > 100000L)
   {
      FUNC_3(VAR_3, "Invalid fixed cHRM white point specified");

      FUNC_0(VAR_2,"white_x=%ld, white_y=%ld\n",VAR_4, VAR_5);

      return;
   }
   FUNC_2(VAR_12, (png_uint_32)VAR_4);
   FUNC_2(VAR_12 + 4, (png_uint_32)VAR_5);

   if (VAR_6 + VAR_7 > 100000L)
   {
      FUNC_3(VAR_3, "Invalid cHRM fixed red point specified");
      return;
   }
   FUNC_2(VAR_12 + 8, (png_uint_32)VAR_6);
   FUNC_2(VAR_12 + 12, (png_uint_32)VAR_7);

   if (VAR_8 + VAR_9 > 100000L)
   {
      FUNC_3(VAR_3, "Invalid fixed cHRM green point specified");
      return;
   }
   FUNC_2(VAR_12 + 16, (png_uint_32)VAR_8);
   FUNC_2(VAR_12 + 20, (png_uint_32)VAR_9);

   if (VAR_10 + VAR_11 > 100000L)
   {
      FUNC_3(VAR_3, "Invalid fixed cHRM blue point specified");
      return;
   }
   FUNC_2(VAR_12 + 24, (png_uint_32)VAR_10);
   FUNC_2(VAR_12 + 28, (png_uint_32)VAR_11);

   FUNC_4(VAR_3, VAR_1, VAR_12, (png_size_t)32);
}
