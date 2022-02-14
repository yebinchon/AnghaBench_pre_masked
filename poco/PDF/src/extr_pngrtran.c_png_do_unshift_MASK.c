
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_uint_16 ;
typedef TYPE_1__* png_row_infop ;
typedef TYPE_2__* png_color_8p ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_6__ {int red; int green; int blue; int gray; int alpha; } ;
struct TYPE_5__ {int color_type; int width; int bit_depth; int rowbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_3, png_bytep VAR_4, png_color_8p VAR_5)
{
   FUNC_0(1, "in png_do_unshift\n");
   if (



       VAR_3->color_type != VAR_2)
   {
      int VAR_6[4];
      int VAR_7 = 0;
      int VAR_8;
      png_uint_16 VAR_9 = 0;
      png_uint_32 VAR_10 = VAR_3->width;

      if (VAR_3->color_type & VAR_1)
      {
         VAR_6[VAR_7++] = VAR_3->bit_depth - VAR_5->red;
         VAR_6[VAR_7++] = VAR_3->bit_depth - VAR_5->green;
         VAR_6[VAR_7++] = VAR_3->bit_depth - VAR_5->blue;
      }
      else
      {
         VAR_6[VAR_7++] = VAR_3->bit_depth - VAR_5->gray;
      }
      if (VAR_3->color_type & VAR_0)
      {
         VAR_6[VAR_7++] = VAR_3->bit_depth - VAR_5->alpha;
      }

      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
      {
         if (VAR_6[VAR_8] <= 0)
            VAR_6[VAR_8] = 0;
         else
            VAR_9 = 1;
      }

      if (!VAR_9)
         return;

      switch (VAR_3->bit_depth)
      {
         case 2:
         {
            png_bytep VAR_11;
            png_uint_32 VAR_12;
            png_uint_32 VAR_13 = VAR_3->rowbytes;

            for (VAR_11 = VAR_4, VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
            {
               *VAR_11 >>= 1;
               *VAR_11++ &= 0x55;
            }
            break;
         }
         case 4:
         {
            png_bytep VAR_14 = VAR_4;
            png_uint_32 VAR_15;
            png_uint_32 VAR_16 = VAR_3->rowbytes;
            png_byte VAR_17 = (png_byte)((((int)0xf0 >> VAR_6[0]) & (int)0xf0) |
               (png_byte)((int)0xf >> VAR_6[0]));

            for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
            {
               *VAR_14 >>= VAR_6[0];
               *VAR_14++ &= VAR_17;
            }
            break;
         }
         case 8:
         {
            png_bytep VAR_18 = VAR_4;
            png_uint_32 VAR_19;
            png_uint_32 VAR_20 = VAR_10 * VAR_7;

            for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
            {
               *VAR_18++ >>= VAR_6[VAR_19%VAR_7];
            }
            break;
         }
         case 16:
         {
            png_bytep VAR_21 = VAR_4;
            png_uint_32 VAR_22;
            png_uint_32 VAR_23 = VAR_7 * VAR_10;

            for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
            {
               VAR_9 = (png_uint_16)((*VAR_21 << 8) + *(VAR_21 + 1));
               VAR_9 >>= VAR_6[VAR_22%VAR_7];
               *VAR_21++ = (png_byte)(VAR_9 >> 8);
               *VAR_21++ = (png_byte)(VAR_9 & 0xff);
            }
            break;
         }
      }
   }
}
