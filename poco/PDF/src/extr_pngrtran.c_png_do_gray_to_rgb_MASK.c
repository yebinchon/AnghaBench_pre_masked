
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef int png_size_t ;
typedef TYPE_1__* png_row_infop ;
typedef void** png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_3__ {scalar_t__ width; int bit_depth; int color_type; int channels; scalar_t__ pixel_depth; int rowbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*) ;

void
FUNC_2(png_row_infop VAR_3, png_bytep VAR_4)
{
   png_uint_32 VAR_5;
   png_uint_32 VAR_6 = VAR_3->width;

   FUNC_1(1, "in png_do_gray_to_rgb\n");
   if (VAR_3->bit_depth >= 8 &&



      !(VAR_3->color_type & VAR_0))
   {
      if (VAR_3->color_type == VAR_1)
      {
         if (VAR_3->bit_depth == 8)
         {
            png_bytep VAR_7 = VAR_4 + (png_size_t)VAR_6 - 1;
            png_bytep VAR_8 = VAR_7 + (png_size_t)VAR_6 * 2;
            for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
            {
               *(VAR_8--) = *VAR_7;
               *(VAR_8--) = *VAR_7;
               *(VAR_8--) = *(VAR_7--);
            }
         }
         else
         {
            png_bytep VAR_9 = VAR_4 + (png_size_t)VAR_6 * 2 - 1;
            png_bytep VAR_10 = VAR_9 + (png_size_t)VAR_6 * 4;
            for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
            {
               *(VAR_10--) = *VAR_9;
               *(VAR_10--) = *(VAR_9 - 1);
               *(VAR_10--) = *VAR_9;
               *(VAR_10--) = *(VAR_9 - 1);
               *(VAR_10--) = *(VAR_9--);
               *(VAR_10--) = *(VAR_9--);
            }
         }
      }
      else if (VAR_3->color_type == VAR_2)
      {
         if (VAR_3->bit_depth == 8)
         {
            png_bytep VAR_11 = VAR_4 + (png_size_t)VAR_6 * 2 - 1;
            png_bytep VAR_12 = VAR_11 + (png_size_t)VAR_6 * 2;
            for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
            {
               *(VAR_12--) = *(VAR_11--);
               *(VAR_12--) = *VAR_11;
               *(VAR_12--) = *VAR_11;
               *(VAR_12--) = *(VAR_11--);
            }
         }
         else
         {
            png_bytep VAR_13 = VAR_4 + (png_size_t)VAR_6 * 4 - 1;
            png_bytep VAR_14 = VAR_13 + (png_size_t)VAR_6 * 4;
            for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
            {
               *(VAR_14--) = *(VAR_13--);
               *(VAR_14--) = *(VAR_13--);
               *(VAR_14--) = *VAR_13;
               *(VAR_14--) = *(VAR_13 - 1);
               *(VAR_14--) = *VAR_13;
               *(VAR_14--) = *(VAR_13 - 1);
               *(VAR_14--) = *(VAR_13--);
               *(VAR_14--) = *(VAR_13--);
            }
         }
      }
      VAR_3->channels += (png_byte)2;
      VAR_3->color_type |= VAR_0;
      VAR_3->pixel_depth = (png_byte)(VAR_3->channels *
         VAR_3->bit_depth);
      VAR_3->rowbytes = FUNC_0(VAR_3->pixel_depth,VAR_6);
   }
}
