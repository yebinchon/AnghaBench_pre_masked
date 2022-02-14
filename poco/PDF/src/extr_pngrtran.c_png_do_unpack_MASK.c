
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_size_t ;
typedef TYPE_1__* png_row_infop ;
typedef int* png_bytep ;
typedef void* png_byte ;
struct TYPE_3__ {int bit_depth; int width; int channels; int rowbytes; void* pixel_depth; } ;


 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_0, png_bytep VAR_1)
{
   FUNC_0(1, "in png_do_unpack\n");



   if (VAR_0->bit_depth < 8)

   {
      png_uint_32 VAR_2;
      png_uint_32 VAR_3=VAR_0->width;

      switch (VAR_0->bit_depth)
      {
         case 1:
         {
            png_bytep VAR_4 = VAR_1 + (png_size_t)((VAR_3 - 1) >> 3);
            png_bytep VAR_5 = VAR_1 + (png_size_t)VAR_3 - 1;
            png_uint_32 VAR_6 = 7 - (int)((VAR_3 + 7) & 0x07);
            for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
            {
               *VAR_5 = (png_byte)((*VAR_4 >> VAR_6) & 0x01);
               if (VAR_6 == 7)
               {
                  VAR_6 = 0;
                  VAR_4--;
               }
               else
                  VAR_6++;

               VAR_5--;
            }
            break;
         }
         case 2:
         {

            png_bytep VAR_7 = VAR_1 + (png_size_t)((VAR_3 - 1) >> 2);
            png_bytep VAR_8 = VAR_1 + (png_size_t)VAR_3 - 1;
            png_uint_32 VAR_9 = (int)((3 - ((VAR_3 + 3) & 0x03)) << 1);
            for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
            {
               *VAR_8 = (png_byte)((*VAR_7 >> VAR_9) & 0x03);
               if (VAR_9 == 6)
               {
                  VAR_9 = 0;
                  VAR_7--;
               }
               else
                  VAR_9 += 2;

               VAR_8--;
            }
            break;
         }
         case 4:
         {
            png_bytep VAR_10 = VAR_1 + (png_size_t)((VAR_3 - 1) >> 1);
            png_bytep VAR_11 = VAR_1 + (png_size_t)VAR_3 - 1;
            png_uint_32 VAR_12 = (int)((1 - ((VAR_3 + 1) & 0x01)) << 2);
            for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
            {
               *VAR_11 = (png_byte)((*VAR_10 >> VAR_12) & 0x0f);
               if (VAR_12 == 4)
               {
                  VAR_12 = 0;
                  VAR_10--;
               }
               else
                  VAR_12 = 4;

               VAR_11--;
            }
            break;
         }
      }
      VAR_0->bit_depth = 8;
      VAR_0->pixel_depth = (png_byte)(8 * VAR_0->channels);
      VAR_0->rowbytes = VAR_3 * VAR_0->channels;
   }
}
