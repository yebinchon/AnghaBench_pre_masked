
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int png_structp ;
typedef int png_size_t ;
typedef int png_byte ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,double,double) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int VAR_2 ;

void
FUNC_5(png_structp VAR_3, double VAR_4, double VAR_5,
   double VAR_6, double VAR_7, double VAR_8, double VAR_9,
   double VAR_10, double VAR_11)
{



   png_byte VAR_12[32];
   png_uint_32 VAR_13;

   FUNC_1(1, "in png_write_cHRM\n");

   if (VAR_4 < 0 || VAR_4 > 0.8 || VAR_5 < 0 || VAR_5 > 0.8 ||
       VAR_4 + VAR_5 > 1.0)
   {
      FUNC_3(VAR_3, "Invalid cHRM white point specified");

      FUNC_0(VAR_2,"white_x=%f, white_y=%f\n",VAR_4, VAR_5);

      return;
   }
   VAR_13 = (png_uint_32)(VAR_4 * 100000.0 + 0.5);
   FUNC_2(VAR_12, VAR_13);
   VAR_13 = (png_uint_32)(VAR_5 * 100000.0 + 0.5);
   FUNC_2(VAR_12 + 4, VAR_13);

   if (VAR_6 < 0 || VAR_7 < 0 || VAR_6 + VAR_7 > 1.0)
   {
      FUNC_3(VAR_3, "Invalid cHRM red point specified");
      return;
   }
   VAR_13 = (png_uint_32)(VAR_6 * 100000.0 + 0.5);
   FUNC_2(VAR_12 + 8, VAR_13);
   VAR_13 = (png_uint_32)(VAR_7 * 100000.0 + 0.5);
   FUNC_2(VAR_12 + 12, VAR_13);

   if (VAR_8 < 0 || VAR_9 < 0 || VAR_8 + VAR_9 > 1.0)
   {
      FUNC_3(VAR_3, "Invalid cHRM green point specified");
      return;
   }
   VAR_13 = (png_uint_32)(VAR_8 * 100000.0 + 0.5);
   FUNC_2(VAR_12 + 16, VAR_13);
   VAR_13 = (png_uint_32)(VAR_9 * 100000.0 + 0.5);
   FUNC_2(VAR_12 + 20, VAR_13);

   if (VAR_10 < 0 || VAR_11 < 0 || VAR_10 + VAR_11 > 1.0)
   {
      FUNC_3(VAR_3, "Invalid cHRM blue point specified");
      return;
   }
   VAR_13 = (png_uint_32)(VAR_10 * 100000.0 + 0.5);
   FUNC_2(VAR_12 + 24, VAR_13);
   VAR_13 = (png_uint_32)(VAR_11 * 100000.0 + 0.5);
   FUNC_2(VAR_12 + 28, VAR_13);

   FUNC_4(VAR_3, VAR_1, VAR_12, (png_size_t)32);
}
