
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef int * png_bytep ;
typedef int png_byte ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ color_type; int bit_depth; int rowbytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_2, png_bytep VAR_3)
{
   FUNC_0(1, "in png_do_read_swap_alpha\n");



   {
      png_uint_32 VAR_4 = VAR_2->width;
      if (VAR_2->color_type == VAR_1)
      {

         if (VAR_2->bit_depth == 8)
         {
            png_bytep VAR_5 = VAR_3 + VAR_2->rowbytes;
            png_bytep VAR_6 = VAR_5;
            png_byte VAR_7;
            png_uint_32 VAR_8;

            for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
            {
               VAR_7 = *(--VAR_5);
               *(--VAR_6) = *(--VAR_5);
               *(--VAR_6) = *(--VAR_5);
               *(--VAR_6) = *(--VAR_5);
               *(--VAR_6) = VAR_7;
            }
         }

         else
         {
            png_bytep VAR_9 = VAR_3 + VAR_2->rowbytes;
            png_bytep VAR_10 = VAR_9;
            png_byte VAR_11[2];
            png_uint_32 VAR_12;

            for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
            {
               VAR_11[0] = *(--VAR_9);
               VAR_11[1] = *(--VAR_9);
               *(--VAR_10) = *(--VAR_9);
               *(--VAR_10) = *(--VAR_9);
               *(--VAR_10) = *(--VAR_9);
               *(--VAR_10) = *(--VAR_9);
               *(--VAR_10) = *(--VAR_9);
               *(--VAR_10) = *(--VAR_9);
               *(--VAR_10) = VAR_11[0];
               *(--VAR_10) = VAR_11[1];
            }
         }
      }
      else if (VAR_2->color_type == VAR_0)
      {

         if (VAR_2->bit_depth == 8)
         {
            png_bytep VAR_13 = VAR_3 + VAR_2->rowbytes;
            png_bytep VAR_14 = VAR_13;
            png_byte VAR_15;
            png_uint_32 VAR_16;

            for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++)
            {
               VAR_15 = *(--VAR_13);
               *(--VAR_14) = *(--VAR_13);
               *(--VAR_14) = VAR_15;
            }
         }

         else
         {
            png_bytep VAR_17 = VAR_3 + VAR_2->rowbytes;
            png_bytep VAR_18 = VAR_17;
            png_byte VAR_19[2];
            png_uint_32 VAR_20;

            for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++)
            {
               VAR_19[0] = *(--VAR_17);
               VAR_19[1] = *(--VAR_17);
               *(--VAR_18) = *(--VAR_17);
               *(--VAR_18) = *(--VAR_17);
               *(--VAR_18) = VAR_19[0];
               *(--VAR_18) = VAR_19[1];
            }
         }
      }
   }
}
