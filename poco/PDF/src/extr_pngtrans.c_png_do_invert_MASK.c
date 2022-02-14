
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef scalar_t__* png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_3__ {scalar_t__ color_type; scalar_t__ rowbytes; int bit_depth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_2, png_bytep VAR_3)
{
   FUNC_0(1, "in png_do_invert\n");







   if (VAR_2->color_type == VAR_0)
   {
      png_bytep VAR_4 = VAR_3;
      png_uint_32 VAR_5;
      png_uint_32 VAR_6 = VAR_2->rowbytes;

      for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
      {
         *VAR_4 = (png_byte)(~(*VAR_4));
         VAR_4++;
      }
   }
   else if (VAR_2->color_type == VAR_1 &&
      VAR_2->bit_depth == 8)
   {
      png_bytep VAR_7 = VAR_3;
      png_uint_32 VAR_8;
      png_uint_32 VAR_9 = VAR_2->rowbytes;

      for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8+=2)
      {
         *VAR_7 = (png_byte)(~(*VAR_7));
         VAR_7+=2;
      }
   }
   else if (VAR_2->color_type == VAR_1 &&
      VAR_2->bit_depth == 16)
   {
      png_bytep VAR_10 = VAR_3;
      png_uint_32 VAR_11;
      png_uint_32 VAR_12 = VAR_2->rowbytes;

      for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11+=4)
      {
         *VAR_10 = (png_byte)(~(*VAR_10));
         *(VAR_10+1) = (png_byte)(~(*(VAR_10+1)));
         VAR_10+=4;
      }
   }
}
