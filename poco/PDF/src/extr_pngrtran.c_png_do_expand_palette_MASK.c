
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_size_t ;
typedef TYPE_1__* png_row_infop ;
typedef TYPE_2__* png_colorp ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_6__ {int red; int green; int blue; } ;
struct TYPE_5__ {int width; scalar_t__ color_type; int bit_depth; int pixel_depth; int rowbytes; int channels; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_1, png_bytep VAR_2,
   png_colorp VAR_3, png_bytep VAR_4, int VAR_5)
{
   int VAR_6, VAR_7;
   png_bytep VAR_8, VAR_9;
   png_uint_32 VAR_10;
   png_uint_32 VAR_11=VAR_1->width;

   FUNC_0(1, "in png_do_expand_palette\n");
   if (



       VAR_1->color_type == VAR_0)
   {
      if (VAR_1->bit_depth < 8)
      {
         switch (VAR_1->bit_depth)
         {
            case 1:
            {
               VAR_8 = VAR_2 + (png_size_t)((VAR_11 - 1) >> 3);
               VAR_9 = VAR_2 + (png_size_t)VAR_11 - 1;
               VAR_6 = 7 - (int)((VAR_11 + 7) & 0x07);
               for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
               {
                  if ((*VAR_8 >> VAR_6) & 0x01)
                     *VAR_9 = 1;
                  else
                     *VAR_9 = 0;
                  if (VAR_6 == 7)
                  {
                     VAR_6 = 0;
                     VAR_8--;
                  }
                  else
                     VAR_6++;

                  VAR_9--;
               }
               break;
            }
            case 2:
            {
               VAR_8 = VAR_2 + (png_size_t)((VAR_11 - 1) >> 2);
               VAR_9 = VAR_2 + (png_size_t)VAR_11 - 1;
               VAR_6 = (int)((3 - ((VAR_11 + 3) & 0x03)) << 1);
               for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
               {
                  VAR_7 = (*VAR_8 >> VAR_6) & 0x03;
                  *VAR_9 = (png_byte)VAR_7;
                  if (VAR_6 == 6)
                  {
                     VAR_6 = 0;
                     VAR_8--;
                  }
                  else
                     VAR_6 += 2;

                  VAR_9--;
               }
               break;
            }
            case 4:
            {
               VAR_8 = VAR_2 + (png_size_t)((VAR_11 - 1) >> 1);
               VAR_9 = VAR_2 + (png_size_t)VAR_11 - 1;
               VAR_6 = (int)((VAR_11 & 0x01) << 2);
               for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
               {
                  VAR_7 = (*VAR_8 >> VAR_6) & 0x0f;
                  *VAR_9 = (png_byte)VAR_7;
                  if (VAR_6 == 4)
                  {
                     VAR_6 = 0;
                     VAR_8--;
                  }
                  else
                     VAR_6 += 4;

                  VAR_9--;
               }
               break;
            }
         }
         VAR_1->bit_depth = 8;
         VAR_1->pixel_depth = 8;
         VAR_1->rowbytes = VAR_11;
      }
      switch (VAR_1->bit_depth)
      {
         case 8:
         {
            if (VAR_4 != ((void*)0))
            {
               VAR_8 = VAR_2 + (png_size_t)VAR_11 - 1;
               VAR_9 = VAR_2 + (png_size_t)(VAR_11 << 2) - 1;

               for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
               {
                  if ((int)(*VAR_8) >= VAR_5)
                     *VAR_9-- = 0xff;
                  else
                     *VAR_9-- = VAR_4[*VAR_8];
                  *VAR_9-- = VAR_3[*VAR_8].blue;
                  *VAR_9-- = VAR_3[*VAR_8].green;
                  *VAR_9-- = VAR_3[*VAR_8].red;
                  VAR_8--;
               }
               VAR_1->bit_depth = 8;
               VAR_1->pixel_depth = 32;
               VAR_1->rowbytes = VAR_11 * 4;
               VAR_1->color_type = 6;
               VAR_1->channels = 4;
            }
            else
            {
               VAR_8 = VAR_2 + (png_size_t)VAR_11 - 1;
               VAR_9 = VAR_2 + (png_size_t)(VAR_11 * 3) - 1;

               for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
               {
                  *VAR_9-- = VAR_3[*VAR_8].blue;
                  *VAR_9-- = VAR_3[*VAR_8].green;
                  *VAR_9-- = VAR_3[*VAR_8].red;
                  VAR_8--;
               }
               VAR_1->bit_depth = 8;
               VAR_1->pixel_depth = 24;
               VAR_1->rowbytes = VAR_11 * 3;
               VAR_1->color_type = 2;
               VAR_1->channels = 3;
            }
            break;
         }
      }
   }
}
