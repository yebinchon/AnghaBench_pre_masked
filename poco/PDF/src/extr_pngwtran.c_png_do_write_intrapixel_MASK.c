
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_3__ {int color_type; scalar_t__ width; int bit_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_3, png_bytep VAR_4)
{
   FUNC_0(1, "in png_do_write_intrapixel\n");
   if (



       (VAR_3->color_type & VAR_0))
   {
      int VAR_5;
      png_uint_32 VAR_6 = VAR_3->width;
      if (VAR_3->bit_depth == 8)
      {
         png_bytep VAR_7;
         png_uint_32 VAR_8;

         if (VAR_3->color_type == VAR_1)
            VAR_5 = 3;
         else if (VAR_3->color_type == VAR_2)
            VAR_5 = 4;
         else
            return;

         for (VAR_8 = 0, VAR_7 = VAR_4; VAR_8 < VAR_6; VAR_8++, VAR_7 += VAR_5)
         {
            *(VAR_7) = (png_byte)((*VAR_7 - *(VAR_7+1))&0xff);
            *(VAR_7+2) = (png_byte)((*(VAR_7+2) - *(VAR_7+1))&0xff);
         }
      }
      else if (VAR_3->bit_depth == 16)
      {
         png_bytep VAR_9;
         png_uint_32 VAR_10;

         if (VAR_3->color_type == VAR_1)
            VAR_5 = 6;
         else if (VAR_3->color_type == VAR_2)
            VAR_5 = 8;
         else
            return;

         for (VAR_10 = 0, VAR_9 = VAR_4; VAR_10 < VAR_6; VAR_10++, VAR_9 += VAR_5)
         {
            png_uint_32 VAR_11 = (*(VAR_9 ) << 8) | *(VAR_9+1);
            png_uint_32 VAR_12 = (*(VAR_9+2) << 8) | *(VAR_9+3);
            png_uint_32 VAR_13 = (*(VAR_9+4) << 8) | *(VAR_9+5);
            png_uint_32 VAR_14 = (png_uint_32)((VAR_11-VAR_12) & 0xffffL);
            png_uint_32 VAR_15 = (png_uint_32)((VAR_13-VAR_12) & 0xffffL);
            *(VAR_9 ) = (png_byte)((VAR_14 >> 8) & 0xff);
            *(VAR_9+1) = (png_byte)(VAR_14 & 0xff);
            *(VAR_9+4) = (png_byte)((VAR_15 >> 8) & 0xff);
            *(VAR_9+5) = (png_byte)(VAR_15 & 0xff);
         }
      }
   }
}
