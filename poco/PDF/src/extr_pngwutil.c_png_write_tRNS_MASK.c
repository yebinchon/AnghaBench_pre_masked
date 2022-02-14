
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef TYPE_2__* png_color_16p ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_8__ {int gray; int red; int green; int blue; } ;
struct TYPE_7__ {int bit_depth; scalar_t__ num_palette; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int*,int ) ;

void
FUNC_4(png_structp VAR_5, png_bytep VAR_6, png_color_16p VAR_7,
   int VAR_8, int VAR_9)
{



   png_byte VAR_10[6];

   FUNC_0(1, "in png_write_tRNS\n");
   if (VAR_9 == VAR_1)
   {
      if (VAR_8 <= 0 || VAR_8 > (int)VAR_5->num_palette)
      {
         FUNC_2(VAR_5,"Invalid number of transparent colors specified");
         return;
      }

      FUNC_3(VAR_5, VAR_4, VAR_6, (png_size_t)VAR_8);
   }
   else if (VAR_9 == VAR_0)
   {

      if(VAR_7->gray >= (1 << VAR_5->bit_depth))
      {
         FUNC_2(VAR_5,
           "Ignoring attempt to write tRNS chunk out-of-range for bit_depth");
         return;
      }
      FUNC_1(VAR_10, VAR_7->gray);
      FUNC_3(VAR_5, VAR_4, VAR_10, (png_size_t)2);
   }
   else if (VAR_9 == VAR_2)
   {

      FUNC_1(VAR_10, VAR_7->red);
      FUNC_1(VAR_10 + 2, VAR_7->green);
      FUNC_1(VAR_10 + 4, VAR_7->blue);
      if(VAR_5->bit_depth == 8 && (VAR_10[0] | VAR_10[2] | VAR_10[4]))
         {
            FUNC_2(VAR_5,
              "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
            return;
         }
      FUNC_3(VAR_5, VAR_4, VAR_10, (png_size_t)6);
   }
   else
   {
      FUNC_2(VAR_5, "Can't write tRNS with an alpha channel");
   }
}
