
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_size_t ;
typedef TYPE_1__* png_row_infop ;
typedef int * png_bytep ;
typedef int png_byte ;
struct TYPE_3__ {int width; scalar_t__ color_type; int bit_depth; int channels; int pixel_depth; int rowbytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_3, png_bytep VAR_4,
   png_uint_32 VAR_5, png_uint_32 VAR_6)
{
   png_uint_32 VAR_7;
   png_uint_32 VAR_8 = VAR_3->width;

   png_byte VAR_9 = (png_byte)((VAR_5>>8) & 0xff);
   png_byte VAR_10 = (png_byte)(VAR_5 & 0xff);

   FUNC_0(1, "in png_do_read_filler\n");
   if (



       VAR_3->color_type == VAR_0)
   {
      if(VAR_3->bit_depth == 8)
      {

         if (VAR_6 & VAR_2)
         {
            png_bytep VAR_11 = VAR_4 + (png_size_t)VAR_8;
            png_bytep VAR_12 = VAR_11 + (png_size_t)VAR_8;
            for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++)
            {
               *(--VAR_12) = VAR_10;
               *(--VAR_12) = *(--VAR_11);
            }
            *(--VAR_12) = VAR_10;
            VAR_3->channels = 2;
            VAR_3->pixel_depth = 16;
            VAR_3->rowbytes = VAR_8 * 2;
         }

         else
         {
            png_bytep VAR_13 = VAR_4 + (png_size_t)VAR_8;
            png_bytep VAR_14 = VAR_13 + (png_size_t)VAR_8;
            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            {
               *(--VAR_14) = *(--VAR_13);
               *(--VAR_14) = VAR_10;
            }
            VAR_3->channels = 2;
            VAR_3->pixel_depth = 16;
            VAR_3->rowbytes = VAR_8 * 2;
         }
      }
      else if(VAR_3->bit_depth == 16)
      {

         if (VAR_6 & VAR_2)
         {
            png_bytep VAR_15 = VAR_4 + (png_size_t)VAR_8 * 2;
            png_bytep VAR_16 = VAR_15 + (png_size_t)VAR_8 * 2;
            for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++)
            {
               *(--VAR_16) = VAR_9;
               *(--VAR_16) = VAR_10;
               *(--VAR_16) = *(--VAR_15);
               *(--VAR_16) = *(--VAR_15);
            }
            *(--VAR_16) = VAR_9;
            *(--VAR_16) = VAR_10;
            VAR_3->channels = 2;
            VAR_3->pixel_depth = 32;
            VAR_3->rowbytes = VAR_8 * 4;
         }

         else
         {
            png_bytep VAR_17 = VAR_4 + (png_size_t)VAR_8 * 2;
            png_bytep VAR_18 = VAR_17 + (png_size_t)VAR_8 * 2;
            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            {
               *(--VAR_18) = *(--VAR_17);
               *(--VAR_18) = *(--VAR_17);
               *(--VAR_18) = VAR_9;
               *(--VAR_18) = VAR_10;
            }
            VAR_3->channels = 2;
            VAR_3->pixel_depth = 32;
            VAR_3->rowbytes = VAR_8 * 4;
         }
      }
   }
   else if (VAR_3->color_type == VAR_1)
   {
      if(VAR_3->bit_depth == 8)
      {

         if (VAR_6 & VAR_2)
         {
            png_bytep VAR_19 = VAR_4 + (png_size_t)VAR_8 * 3;
            png_bytep VAR_20 = VAR_19 + (png_size_t)VAR_8;
            for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++)
            {
               *(--VAR_20) = VAR_10;
               *(--VAR_20) = *(--VAR_19);
               *(--VAR_20) = *(--VAR_19);
               *(--VAR_20) = *(--VAR_19);
            }
            *(--VAR_20) = VAR_10;
            VAR_3->channels = 4;
            VAR_3->pixel_depth = 32;
            VAR_3->rowbytes = VAR_8 * 4;
         }

         else
         {
            png_bytep VAR_21 = VAR_4 + (png_size_t)VAR_8 * 3;
            png_bytep VAR_22 = VAR_21 + (png_size_t)VAR_8;
            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            {
               *(--VAR_22) = *(--VAR_21);
               *(--VAR_22) = *(--VAR_21);
               *(--VAR_22) = *(--VAR_21);
               *(--VAR_22) = VAR_10;
            }
            VAR_3->channels = 4;
            VAR_3->pixel_depth = 32;
            VAR_3->rowbytes = VAR_8 * 4;
         }
      }
      else if(VAR_3->bit_depth == 16)
      {

         if (VAR_6 & VAR_2)
         {
            png_bytep VAR_23 = VAR_4 + (png_size_t)VAR_8 * 6;
            png_bytep VAR_24 = VAR_23 + (png_size_t)VAR_8 * 2;
            for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++)
            {
               *(--VAR_24) = VAR_9;
               *(--VAR_24) = VAR_10;
               *(--VAR_24) = *(--VAR_23);
               *(--VAR_24) = *(--VAR_23);
               *(--VAR_24) = *(--VAR_23);
               *(--VAR_24) = *(--VAR_23);
               *(--VAR_24) = *(--VAR_23);
               *(--VAR_24) = *(--VAR_23);
            }
            *(--VAR_24) = VAR_9;
            *(--VAR_24) = VAR_10;
            VAR_3->channels = 4;
            VAR_3->pixel_depth = 64;
            VAR_3->rowbytes = VAR_8 * 8;
         }

         else
         {
            png_bytep VAR_25 = VAR_4 + (png_size_t)VAR_8 * 6;
            png_bytep VAR_26 = VAR_25 + (png_size_t)VAR_8 * 2;
            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            {
               *(--VAR_26) = *(--VAR_25);
               *(--VAR_26) = *(--VAR_25);
               *(--VAR_26) = *(--VAR_25);
               *(--VAR_26) = *(--VAR_25);
               *(--VAR_26) = *(--VAR_25);
               *(--VAR_26) = *(--VAR_25);
               *(--VAR_26) = VAR_9;
               *(--VAR_26) = VAR_10;
            }
            VAR_3->channels = 4;
            VAR_3->pixel_depth = 64;
            VAR_3->rowbytes = VAR_8 * 8;
         }
      }
   }
}
