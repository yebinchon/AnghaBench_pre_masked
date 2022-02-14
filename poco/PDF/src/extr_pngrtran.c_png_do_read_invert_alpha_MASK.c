
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ color_type; int bit_depth; int rowbytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_2, png_bytep VAR_3)
{
   FUNC_0(1, "in png_do_read_invert_alpha\n");



   {
      png_uint_32 VAR_4 = VAR_2->width;
      if (VAR_2->color_type == VAR_1)
      {

         if (VAR_2->bit_depth == 8)
         {
            png_bytep VAR_5 = VAR_3 + VAR_2->rowbytes;
            png_bytep VAR_6 = VAR_5;
            png_uint_32 VAR_7;

            for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
            {
               *(--VAR_6) = (png_byte)(255 - *(--VAR_5));







               VAR_5-=3;
               VAR_6=VAR_5;
            }
         }

         else
         {
            png_bytep VAR_8 = VAR_3 + VAR_2->rowbytes;
            png_bytep VAR_9 = VAR_8;
            png_uint_32 VAR_10;

            for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
            {
               *(--VAR_9) = (png_byte)(255 - *(--VAR_8));
               *(--VAR_9) = (png_byte)(255 - *(--VAR_8));
               VAR_8-=6;
               VAR_9=VAR_8;
            }
         }
      }
      else if (VAR_2->color_type == VAR_0)
      {

         if (VAR_2->bit_depth == 8)
         {
            png_bytep VAR_11 = VAR_3 + VAR_2->rowbytes;
            png_bytep VAR_12 = VAR_11;
            png_uint_32 VAR_13;

            for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
            {
               *(--VAR_12) = (png_byte)(255 - *(--VAR_11));
               *(--VAR_12) = *(--VAR_11);
            }
         }

         else
         {
            png_bytep VAR_14 = VAR_3 + VAR_2->rowbytes;
            png_bytep VAR_15 = VAR_14;
            png_uint_32 VAR_16;

            for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++)
            {
               *(--VAR_15) = (png_byte)(255 - *(--VAR_14));
               *(--VAR_15) = (png_byte)(255 - *(--VAR_14));




               VAR_14-=2;
               VAR_15=VAR_14;
            }
         }
      }
   }
}
