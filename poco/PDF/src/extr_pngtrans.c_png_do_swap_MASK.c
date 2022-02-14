
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef int * png_bytep ;
typedef int png_byte ;
struct TYPE_3__ {int bit_depth; scalar_t__ width; scalar_t__ channels; } ;


 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_0, png_bytep VAR_1)
{
   FUNC_0(1, "in png_do_swap\n");
   if (



       VAR_0->bit_depth == 16)
   {
      png_bytep VAR_2 = VAR_1;
      png_uint_32 VAR_3;
      png_uint_32 VAR_4= VAR_0->width * VAR_0->channels;

      for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++, VAR_2 += 2)
      {
         png_byte VAR_5 = *VAR_2;
         *VAR_2 = *(VAR_2 + 1);
         *(VAR_2 + 1) = VAR_5;
      }
   }
}
