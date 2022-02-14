
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef TYPE_2__* png_color_8p ;
typedef scalar_t__ png_byte ;
struct TYPE_8__ {scalar_t__ red; scalar_t__ green; scalar_t__ blue; int gray; int alpha; } ;
struct TYPE_7__ {int usr_bit_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__*,int) ;

void
FUNC_3(png_structp VAR_5, png_color_8p VAR_6, int VAR_7)
{



   png_byte VAR_8[4];
   png_size_t VAR_9;

   FUNC_0(1, "in png_write_sBIT\n");

   if (VAR_7 & VAR_1)
   {
      png_byte VAR_10;

      VAR_10 = (png_byte)(VAR_7==VAR_2 ? 8 :
                VAR_5->usr_bit_depth);
      if (VAR_6->red == 0 || VAR_6->red > VAR_10 ||
          VAR_6->green == 0 || VAR_6->green > VAR_10 ||
          VAR_6->blue == 0 || VAR_6->blue > VAR_10)
      {
         FUNC_1(VAR_5, "Invalid sBIT depth specified");
         return;
      }
      VAR_8[0] = VAR_6->red;
      VAR_8[1] = VAR_6->green;
      VAR_8[2] = VAR_6->blue;
      VAR_9 = 3;
   }
   else
   {
      if (VAR_6->gray == 0 || VAR_6->gray > VAR_5->usr_bit_depth)
      {
         FUNC_1(VAR_5, "Invalid sBIT depth specified");
         return;
      }
      VAR_8[0] = VAR_6->gray;
      VAR_9 = 1;
   }

   if (VAR_7 & VAR_0)
   {
      if (VAR_6->alpha == 0 || VAR_6->alpha > VAR_5->usr_bit_depth)
      {
         FUNC_1(VAR_5, "Invalid sBIT depth specified");
         return;
      }
      VAR_8[VAR_9++] = VAR_6->alpha;
   }

   FUNC_2(VAR_5, VAR_4, VAR_8, VAR_9);
}
