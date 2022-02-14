
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_row_infop ;
typedef size_t* png_bytep ;
struct TYPE_3__ {int bit_depth; int rowbytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;

void
FUNC_1(png_row_infop VAR_3, png_bytep VAR_4)
{
   FUNC_0(1, "in png_do_packswap\n");
   if (



       VAR_3->bit_depth < 8)
   {
      png_bytep VAR_5, VAR_6, VAR_7;

      VAR_6 = VAR_4 + VAR_3->rowbytes;

      if (VAR_3->bit_depth == 1)
         VAR_7 = (png_bytep)VAR_1;
      else if (VAR_3->bit_depth == 2)
         VAR_7 = (png_bytep)VAR_2;
      else if (VAR_3->bit_depth == 4)
         VAR_7 = (png_bytep)VAR_0;
      else
         return;

      for (VAR_5 = VAR_4; VAR_5 < VAR_6; VAR_5++)
         *VAR_5 = VAR_7[*VAR_5];
   }
}
