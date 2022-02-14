
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef int * png_bytep ;
struct TYPE_3__ {int width; int channels; int bit_depth; int pixel_depth; int rowbytes; int color_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_7, png_bytep VAR_8, png_uint_32 VAR_9)
{
   FUNC_0(1, "in png_do_strip_filler\n");



   {
      png_bytep VAR_10=VAR_8;
      png_bytep VAR_11=VAR_8;
      png_uint_32 VAR_12=VAR_7->width;
      png_uint_32 VAR_13;

      if ((VAR_7->color_type == VAR_3 ||
         (VAR_7->color_type == VAR_4 &&
         (VAR_9 & VAR_6))) &&
         VAR_7->channels == 4)
      {
         if (VAR_7->bit_depth == 8)
         {

            if (VAR_9 & VAR_5)
            {
               VAR_11+=3; VAR_10+=4;
               for (VAR_13 = 1; VAR_13 < VAR_12; VAR_13++)
               {
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  VAR_10++;
               }
            }

            else
            {
               for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
               {
                  VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
               }
            }
            VAR_7->pixel_depth = 24;
            VAR_7->rowbytes = VAR_12 * 3;
         }
         else
         {
            if (VAR_9 & VAR_5)
            {

               VAR_10 += 8; VAR_11 += 6;
               for (VAR_13 = 1; VAR_13 < VAR_12; VAR_13++)
               {






                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  VAR_10 += 2;
               }
            }
            else
            {

               for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
               {






                  VAR_10+=2;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
               }
            }
            VAR_7->pixel_depth = 48;
            VAR_7->rowbytes = VAR_12 * 6;
         }
         VAR_7->channels = 3;
      }
      else if ((VAR_7->color_type == VAR_1 ||
         (VAR_7->color_type == VAR_2 &&
         (VAR_9 & VAR_6))) &&
          VAR_7->channels == 2)
      {
         if (VAR_7->bit_depth == 8)
         {

            if (VAR_9 & VAR_5)
            {
               for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
               {
                  *VAR_11++ = *VAR_10++;
                  VAR_10++;
               }
            }

            else
            {
               for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
               {
                  VAR_10++;
                  *VAR_11++ = *VAR_10++;
               }
            }
            VAR_7->pixel_depth = 8;
            VAR_7->rowbytes = VAR_12;
         }
         else
         {
            if (VAR_9 & VAR_5)
            {

               VAR_10 += 4; VAR_11 += 2;
               for (VAR_13 = 1; VAR_13 < VAR_12; VAR_13++)
               {
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
                  VAR_10 += 2;
               }
            }
            else
            {

               for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
               {
                  VAR_10 += 2;
                  *VAR_11++ = *VAR_10++;
                  *VAR_11++ = *VAR_10++;
               }
            }
            VAR_7->pixel_depth = 16;
            VAR_7->rowbytes = VAR_12 * 2;
         }
         VAR_7->channels = 1;
      }
      if (VAR_9 & VAR_6)
        VAR_7->color_type &= ~VAR_0;
   }
}
