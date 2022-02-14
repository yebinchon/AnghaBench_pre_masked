
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
   FUNC_0(1, "in png_do_write_swap_alpha\n");



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
               png_byte VAR_8 = *(VAR_4++);
               *(VAR_5++) = *(VAR_4++);
               *(VAR_5++) = *(VAR_4++);
               *(VAR_5++) = *(VAR_4++);
               *(VAR_5++) = VAR_8;
            }
         }

         else
         {
            png_bytep VAR_9, VAR_10;
            png_uint_32 VAR_11;
            png_uint_32 VAR_12 = VAR_2->width;

            for (VAR_11 = 0, VAR_9 = VAR_10 = VAR_3; VAR_11 < VAR_12; VAR_11++)
            {
               png_byte VAR_13[2];
               VAR_13[0] = *(VAR_9++);
               VAR_13[1] = *(VAR_9++);
               *(VAR_10++) = *(VAR_9++);
               *(VAR_10++) = *(VAR_9++);
               *(VAR_10++) = *(VAR_9++);
               *(VAR_10++) = *(VAR_9++);
               *(VAR_10++) = *(VAR_9++);
               *(VAR_10++) = *(VAR_9++);
               *(VAR_10++) = VAR_13[0];
               *(VAR_10++) = VAR_13[1];
            }
         }
      }
      else if (VAR_2->color_type == VAR_0)
      {

         if (VAR_2->bit_depth == 8)
         {
            png_bytep VAR_14, VAR_15;
            png_uint_32 VAR_16;
            png_uint_32 VAR_17 = VAR_2->width;

            for (VAR_16 = 0, VAR_14 = VAR_15 = VAR_3; VAR_16 < VAR_17; VAR_16++)
            {
               png_byte VAR_18 = *(VAR_14++);
               *(VAR_15++) = *(VAR_14++);
               *(VAR_15++) = VAR_18;
            }
         }

         else
         {
            png_bytep VAR_19, VAR_20;
            png_uint_32 VAR_21;
            png_uint_32 VAR_22 = VAR_2->width;

            for (VAR_21 = 0, VAR_19 = VAR_20 = VAR_3; VAR_21 < VAR_22; VAR_21++)
            {
               png_byte VAR_23[2];
               VAR_23[0] = *(VAR_19++);
               VAR_23[1] = *(VAR_19++);
               *(VAR_20++) = *(VAR_19++);
               *(VAR_20++) = *(VAR_19++);
               *(VAR_20++) = VAR_23[0];
               *(VAR_20++) = VAR_23[1];
            }
         }
      }
   }
}
