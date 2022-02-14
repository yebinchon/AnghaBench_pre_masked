
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_uint_16 ;
typedef int png_size_t ;
typedef TYPE_1__* png_row_infop ;
typedef TYPE_2__* png_color_16p ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_6__ {int red; int green; int blue; int gray; } ;
struct TYPE_5__ {int width; scalar_t__ color_type; int bit_depth; int pixel_depth; int rowbytes; int channels; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;

void
FUNC_2(png_row_infop VAR_4, png_bytep VAR_5,
   png_color_16p VAR_6)
{
   int VAR_7, VAR_8;
   png_bytep VAR_9, VAR_10;
   png_uint_32 VAR_11;
   png_uint_32 VAR_12=VAR_4->width;

   FUNC_1(1, "in png_do_expand\n");



   {
      if (VAR_4->color_type == VAR_0)
      {
         png_uint_16 VAR_13 = (png_uint_16)(VAR_6 ? VAR_6->gray : 0);

         if (VAR_4->bit_depth < 8)
         {
            switch (VAR_4->bit_depth)
            {
               case 1:
               {
                  VAR_13 = (png_uint_16)((VAR_13&0x01)*0xff);
                  VAR_9 = VAR_5 + (png_size_t)((VAR_12 - 1) >> 3);
                  VAR_10 = VAR_5 + (png_size_t)VAR_12 - 1;
                  VAR_7 = 7 - (int)((VAR_12 + 7) & 0x07);
                  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
                  {
                     if ((*VAR_9 >> VAR_7) & 0x01)
                        *VAR_10 = 0xff;
                     else
                        *VAR_10 = 0;
                     if (VAR_7 == 7)
                     {
                        VAR_7 = 0;
                        VAR_9--;
                     }
                     else
                        VAR_7++;

                     VAR_10--;
                  }
                  break;
               }
               case 2:
               {
                  VAR_13 = (png_uint_16)((VAR_13&0x03)*0x55);
                  VAR_9 = VAR_5 + (png_size_t)((VAR_12 - 1) >> 2);
                  VAR_10 = VAR_5 + (png_size_t)VAR_12 - 1;
                  VAR_7 = (int)((3 - ((VAR_12 + 3) & 0x03)) << 1);
                  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
                  {
                     VAR_8 = (*VAR_9 >> VAR_7) & 0x03;
                     *VAR_10 = (png_byte)(VAR_8 | (VAR_8 << 2) | (VAR_8 << 4) |
                        (VAR_8 << 6));
                     if (VAR_7 == 6)
                     {
                        VAR_7 = 0;
                        VAR_9--;
                     }
                     else
                        VAR_7 += 2;

                     VAR_10--;
                  }
                  break;
               }
               case 4:
               {
                  VAR_13 = (png_uint_16)((VAR_13&0x0f)*0x11);
                  VAR_9 = VAR_5 + (png_size_t)((VAR_12 - 1) >> 1);
                  VAR_10 = VAR_5 + (png_size_t)VAR_12 - 1;
                  VAR_7 = (int)((1 - ((VAR_12 + 1) & 0x01)) << 2);
                  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
                  {
                     VAR_8 = (*VAR_9 >> VAR_7) & 0x0f;
                     *VAR_10 = (png_byte)(VAR_8 | (VAR_8 << 4));
                     if (VAR_7 == 4)
                     {
                        VAR_7 = 0;
                        VAR_9--;
                     }
                     else
                        VAR_7 = 4;

                     VAR_10--;
                  }
                  break;
               }
            }
            VAR_4->bit_depth = 8;
            VAR_4->pixel_depth = 8;
            VAR_4->rowbytes = VAR_12;
         }

         if (VAR_6 != ((void*)0))
         {
            if (VAR_4->bit_depth == 8)
            {
               VAR_13 = VAR_13 & 0xff;
               VAR_9 = VAR_5 + (png_size_t)VAR_12 - 1;
               VAR_10 = VAR_5 + (png_size_t)(VAR_12 << 1) - 1;
               for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
               {
                  if (*VAR_9 == VAR_13)
                     *VAR_10-- = 0;
                  else
                     *VAR_10-- = 0xff;
                  *VAR_10-- = *VAR_9--;
               }
            }
            else if (VAR_4->bit_depth == 16)
            {
               png_byte VAR_14 = (VAR_13 >> 8) & 0xff;
               png_byte VAR_15 = VAR_13 & 0xff;
               VAR_9 = VAR_5 + VAR_4->rowbytes - 1;
               VAR_10 = VAR_5 + (VAR_4->rowbytes << 1) - 1;
               for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
               {
                  if (*(VAR_9-1) == VAR_14 && *(VAR_9) == VAR_15)
                  {
                     *VAR_10-- = 0;
                     *VAR_10-- = 0;
                  }
                  else
                  {
                     *VAR_10-- = 0xff;
                     *VAR_10-- = 0xff;
                  }
                  *VAR_10-- = *VAR_9--;
                  *VAR_10-- = *VAR_9--;
               }
            }
            VAR_4->color_type = VAR_1;
            VAR_4->channels = 2;
            VAR_4->pixel_depth = (png_byte)(VAR_4->bit_depth << 1);
            VAR_4->rowbytes = FUNC_0(VAR_4->pixel_depth,
               VAR_12);
         }
      }
      else if (VAR_4->color_type == VAR_2 && VAR_6)
      {
         if (VAR_4->bit_depth == 8)
         {
            png_byte VAR_16 = VAR_6->red & 0xff;
            png_byte VAR_17 = VAR_6->green & 0xff;
            png_byte VAR_18 = VAR_6->blue & 0xff;
            VAR_9 = VAR_5 + (png_size_t)VAR_4->rowbytes - 1;
            VAR_10 = VAR_5 + (png_size_t)(VAR_12 << 2) - 1;
            for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
            {
               if (*(VAR_9 - 2) == VAR_16 && *(VAR_9 - 1) == VAR_17 && *(VAR_9) == VAR_18)
                  *VAR_10-- = 0;
               else
                  *VAR_10-- = 0xff;
               *VAR_10-- = *VAR_9--;
               *VAR_10-- = *VAR_9--;
               *VAR_10-- = *VAR_9--;
            }
         }
         else if (VAR_4->bit_depth == 16)
         {
            png_byte VAR_19 = (VAR_6->red >> 8) & 0xff;
            png_byte VAR_20 = (VAR_6->green >> 8) & 0xff;
            png_byte VAR_21 = (VAR_6->blue >> 8) & 0xff;
            png_byte VAR_22 = VAR_6->red & 0xff;
            png_byte VAR_23 = VAR_6->green & 0xff;
            png_byte VAR_24 = VAR_6->blue & 0xff;
            VAR_9 = VAR_5 + VAR_4->rowbytes - 1;
            VAR_10 = VAR_5 + (png_size_t)(VAR_12 << 3) - 1;
            for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
            {
               if (*(VAR_9 - 5) == VAR_19 &&
                  *(VAR_9 - 4) == VAR_22 &&
                  *(VAR_9 - 3) == VAR_20 &&
                  *(VAR_9 - 2) == VAR_23 &&
                  *(VAR_9 - 1) == VAR_21 &&
                  *(VAR_9 ) == VAR_24)
               {
                  *VAR_10-- = 0;
                  *VAR_10-- = 0;
               }
               else
               {
                  *VAR_10-- = 0xff;
                  *VAR_10-- = 0xff;
               }
               *VAR_10-- = *VAR_9--;
               *VAR_10-- = *VAR_9--;
               *VAR_10-- = *VAR_9--;
               *VAR_10-- = *VAR_9--;
               *VAR_10-- = *VAR_9--;
               *VAR_10-- = *VAR_9--;
            }
         }
         VAR_4->color_type = VAR_3;
         VAR_4->channels = 4;
         VAR_4->pixel_depth = (png_byte)(VAR_4->bit_depth << 2);
         VAR_4->rowbytes = FUNC_0(VAR_4->pixel_depth,VAR_12);
      }
   }
}
