
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef int * png_bytep ;
typedef void* png_byte ;
struct TYPE_3__ {scalar_t__ color_type; int bit_depth; scalar_t__ width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_2, png_bytep VAR_3)
{
   FUNC_0(1, "in png_do_write_invert_alpha\n");



   {
      if (VAR_2->color_type == VAR_1)
      {

         if (VAR_2->bit_depth == 8)
         {
            png_bytep VAR_4, VAR_5;
            png_uint_32 VAR_6;
            png_uint_32 VAR_7 = VAR_2->width;
            for (VAR_6 = 0, VAR_4 = VAR_5 = VAR_3; VAR_6 < VAR_7; VAR_6++)
            {





               VAR_4+=3; VAR_5 = VAR_4;
               *(VAR_5++) = (png_byte)(255 - *(VAR_4++));
            }
         }

         else
         {
            png_bytep VAR_8, VAR_9;
            png_uint_32 VAR_10;
            png_uint_32 VAR_11 = VAR_2->width;

            for (VAR_10 = 0, VAR_8 = VAR_9 = VAR_3; VAR_10 < VAR_11; VAR_10++)
            {
               VAR_8+=6; VAR_9 = VAR_8;
               *(VAR_9++) = (png_byte)(255 - *(VAR_8++));
               *(VAR_9++) = (png_byte)(255 - *(VAR_8++));
            }
         }
      }
      else if (VAR_2->color_type == VAR_0)
      {

         if (VAR_2->bit_depth == 8)
         {
            png_bytep VAR_12, VAR_13;
            png_uint_32 VAR_14;
            png_uint_32 VAR_15 = VAR_2->width;

            for (VAR_14 = 0, VAR_12 = VAR_13 = VAR_3; VAR_14 < VAR_15; VAR_14++)
            {
               *(VAR_13++) = *(VAR_12++);
               *(VAR_13++) = (png_byte)(255 - *(VAR_12++));
            }
         }

         else
         {
            png_bytep VAR_16, VAR_17;
            png_uint_32 VAR_18;
            png_uint_32 VAR_19 = VAR_2->width;

            for (VAR_18 = 0, VAR_16 = VAR_17 = VAR_3; VAR_18 < VAR_19; VAR_18++)
            {




               VAR_16+=2; VAR_17 = VAR_16;
               *(VAR_17++) = (png_byte)(255 - *(VAR_16++));
               *(VAR_17++) = (png_byte)(255 - *(VAR_16++));
            }
         }
      }
   }
}
