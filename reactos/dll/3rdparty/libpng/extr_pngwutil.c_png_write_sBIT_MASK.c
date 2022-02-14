
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_const_color_8p ;
typedef scalar_t__ png_byte ;
struct TYPE_8__ {scalar_t__ red; scalar_t__ green; scalar_t__ blue; int gray; int alpha; } ;
struct TYPE_7__ {int usr_bit_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__*,size_t) ;

void
FUNC_3(png_structrp VAR_4, png_const_color_8p VAR_5, int VAR_6)
{
   png_byte VAR_7[4];
   size_t VAR_8;

   FUNC_0(1, "in png_write_sBIT");


   if ((VAR_6 & VAR_1) != 0)
   {
      png_byte VAR_9;

      VAR_9 = (png_byte)(VAR_6==VAR_2 ? 8 :
          VAR_4->usr_bit_depth);

      if (VAR_5->red == 0 || VAR_5->red > VAR_9 ||
          VAR_5->green == 0 || VAR_5->green > VAR_9 ||
          VAR_5->blue == 0 || VAR_5->blue > VAR_9)
      {
         FUNC_1(VAR_4, "Invalid sBIT depth specified");
         return;
      }

      VAR_7[0] = VAR_5->red;
      VAR_7[1] = VAR_5->green;
      VAR_7[2] = VAR_5->blue;
      VAR_8 = 3;
   }

   else
   {
      if (VAR_5->gray == 0 || VAR_5->gray > VAR_4->usr_bit_depth)
      {
         FUNC_1(VAR_4, "Invalid sBIT depth specified");
         return;
      }

      VAR_7[0] = VAR_5->gray;
      VAR_8 = 1;
   }

   if ((VAR_6 & VAR_0) != 0)
   {
      if (VAR_5->alpha == 0 || VAR_5->alpha > VAR_4->usr_bit_depth)
      {
         FUNC_1(VAR_4, "Invalid sBIT depth specified");
         return;
      }

      VAR_7[VAR_8++] = VAR_5->alpha;
   }

   FUNC_2(VAR_4, VAR_3, VAR_7, VAR_8);
}
