
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_row_infop ;
typedef void** png_bytep ;
struct TYPE_3__ {size_t rowbytes; int channels; int bit_depth; int pixel_depth; scalar_t__ color_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_0(png_row_infop VAR_4, png_bytep VAR_5, int VAR_6)
{
   png_bytep VAR_7 = VAR_5;
   png_bytep VAR_8 = VAR_5;
   png_bytep VAR_9 = VAR_5 + VAR_4->rowbytes;
   if (VAR_4->channels == 2)
   {
      if (VAR_4->bit_depth == 8)
      {
         if (VAR_6 != 0)
            ++VAR_7;
         else
         {
            VAR_7 += 2; ++VAR_8;
         }


         while (VAR_7 < VAR_9)
         {
            *VAR_8++ = *VAR_7; VAR_7 += 2;
         }

         VAR_4->pixel_depth = 8;
      }

      else if (VAR_4->bit_depth == 16)
      {
         if (VAR_6 != 0)
            VAR_7 += 2;
         else
         {
            VAR_7 += 4; VAR_8 += 2;
         }

         while (VAR_7 < VAR_9)
         {
            *VAR_8++ = *VAR_7++; *VAR_8++ = *VAR_7; VAR_7 += 3;
         }

         VAR_4->pixel_depth = 16;
      }

      else
         return;

      VAR_4->channels = 1;


      if (VAR_4->color_type == VAR_1)
         VAR_4->color_type = VAR_0;
   }


   else if (VAR_4->channels == 4)
   {
      if (VAR_4->bit_depth == 8)
      {
         if (VAR_6 != 0)
            ++VAR_7;
         else
         {
            VAR_7 += 4; VAR_8 += 3;
         }


         while (VAR_7 < VAR_9)
         {
            *VAR_8++ = *VAR_7++; *VAR_8++ = *VAR_7++; *VAR_8++ = *VAR_7; VAR_7 += 2;
         }

         VAR_4->pixel_depth = 24;
      }

      else if (VAR_4->bit_depth == 16)
      {
         if (VAR_6 != 0)
            VAR_7 += 2;
         else
         {
            VAR_7 += 8; VAR_8 += 6;
         }

         while (VAR_7 < VAR_9)
         {

            *VAR_8++ = *VAR_7++; *VAR_8++ = *VAR_7++;
            *VAR_8++ = *VAR_7++; *VAR_8++ = *VAR_7++;
            *VAR_8++ = *VAR_7++; *VAR_8++ = *VAR_7; VAR_7 += 3;
         }

         VAR_4->pixel_depth = 48;
      }

      else
         return;

      VAR_4->channels = 3;


      if (VAR_4->color_type == VAR_3)
         VAR_4->color_type = VAR_2;
   }

   else
      return;


   VAR_4->rowbytes = (size_t)(VAR_8-VAR_5);
}
