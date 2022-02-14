
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef int png_uint_16 ;
typedef TYPE_1__* png_structp ;
typedef TYPE_2__* png_row_infop ;
typedef int* png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_6__ {scalar_t__ width; int color_type; int bit_depth; int channels; scalar_t__ pixel_depth; int rowbytes; } ;
struct TYPE_5__ {scalar_t__ rgb_to_gray_red_coeff; scalar_t__ rgb_to_gray_green_coeff; scalar_t__ rgb_to_gray_blue_coeff; scalar_t__* gamma_to_1; int** gamma_16_to_1; int** gamma_16_from_1; int gamma_shift; int * gamma_from_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*) ;

int
FUNC_2(png_structp VAR_3, png_row_infop VAR_4, png_bytep VAR_5)

{
   png_uint_32 VAR_6;

   png_uint_32 VAR_7 = VAR_4->width;
   int VAR_8 = 0;

   FUNC_1(1, "in png_do_rgb_to_gray\n");
   if (



      (VAR_4->color_type & VAR_0))
   {
      png_uint_32 VAR_9 = VAR_3->rgb_to_gray_red_coeff;
      png_uint_32 VAR_10 = VAR_3->rgb_to_gray_green_coeff;
      png_uint_32 VAR_11 = VAR_3->rgb_to_gray_blue_coeff;

      if (VAR_4->color_type == VAR_1)
      {
         if (VAR_4->bit_depth == 8)
         {
            {
               png_bytep VAR_12 = VAR_5;
               png_bytep VAR_13 = VAR_5;
               for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
               {
                  png_byte VAR_14 = *(VAR_12++);
                  png_byte VAR_15 = *(VAR_12++);
                  png_byte VAR_16 = *(VAR_12++);
                  if(VAR_14 != VAR_15 || VAR_14 != VAR_16)
                  {
                     VAR_8 |= 1;
                     *(VAR_13++) = (png_byte)((VAR_9*VAR_14+VAR_10*VAR_15+VAR_11*VAR_16)>>15);
                  }
                  else
                     *(VAR_13++) = *(VAR_12-1);
               }
            }
         }

         else
         {
            {
               png_bytep VAR_17 = VAR_5;
               png_bytep VAR_18 = VAR_5;
               for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
               {
                  png_uint_16 VAR_19, VAR_20, VAR_21, VAR_22;

                  VAR_19 = (png_uint_16)(((*(VAR_17))<<8) | *(VAR_17+1)); VAR_17+=2;
                  VAR_20 = (png_uint_16)(((*(VAR_17))<<8) | *(VAR_17+1)); VAR_17+=2;
                  VAR_21 = (png_uint_16)(((*(VAR_17))<<8) | *(VAR_17+1)); VAR_17+=2;

                  if(VAR_19 != VAR_20 || VAR_19 != VAR_21)
                     VAR_8 |= 1;
                  VAR_22 = (png_uint_16)((VAR_9*VAR_19 + VAR_10*VAR_20 + VAR_11*VAR_21)>>15);
                  *(VAR_18++) = (png_byte)((VAR_22>>8) & 0xff);
                  *(VAR_18++) = (png_byte)(VAR_22 & 0xff);
               }
            }
         }
      }
      if (VAR_4->color_type == VAR_2)
      {
         if (VAR_4->bit_depth == 8)
         {
            {
               png_bytep VAR_23 = VAR_5;
               png_bytep VAR_24 = VAR_5;
               for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
               {
                  png_byte VAR_25 = *(VAR_23++);
                  png_byte VAR_26 = *(VAR_23++);
                  png_byte VAR_27 = *(VAR_23++);
                  if(VAR_25 != VAR_26 || VAR_25 != VAR_27)
                     VAR_8 |= 1;
                  *(VAR_24++) = (png_byte)((VAR_9*VAR_25 + VAR_10*VAR_26 + VAR_11*VAR_27)>>15);
                  *(VAR_24++) = *(VAR_23++);
               }
            }
         }
         else
         {
            {
               png_bytep VAR_28 = VAR_5;
               png_bytep VAR_29 = VAR_5;
               for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
               {
                  png_uint_16 VAR_30, VAR_31, VAR_32, VAR_33;
                  VAR_30 = (png_uint_16)((*(VAR_28)<<8) | *(VAR_28+1)); VAR_28+=2;
                  VAR_31 = (png_uint_16)((*(VAR_28)<<8) | *(VAR_28+1)); VAR_28+=2;
                  VAR_32 = (png_uint_16)((*(VAR_28)<<8) | *(VAR_28+1)); VAR_28+=2;
                  if(VAR_30 != VAR_31 || VAR_30 != VAR_32)
                     VAR_8 |= 1;
                  VAR_33 = (png_uint_16)((VAR_9*VAR_30 + VAR_10*VAR_31 + VAR_11*VAR_32)>>15);
                  *(VAR_29++) = (png_byte)((VAR_33>>8) & 0xff);
                  *(VAR_29++) = (png_byte)(VAR_33 & 0xff);
                  *(VAR_29++) = *(VAR_28++);
                  *(VAR_29++) = *(VAR_28++);
               }
            }
         }
      }
   VAR_4->channels -= (png_byte)2;
      VAR_4->color_type &= ~VAR_0;
      VAR_4->pixel_depth = (png_byte)(VAR_4->channels *
         VAR_4->bit_depth);
      VAR_4->rowbytes = FUNC_0(VAR_4->pixel_depth,VAR_7);
   }
   return VAR_8;
}
