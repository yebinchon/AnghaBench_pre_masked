
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_const_color_16p ;
typedef int png_byte ;
struct TYPE_8__ {scalar_t__ index; int red; int green; int blue; int gray; } ;
struct TYPE_7__ {scalar_t__ num_palette; int mng_features_permitted; int bit_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int*,int) ;

void
FUNC_4(png_structrp VAR_4, png_const_color_16p VAR_5, int VAR_6)
{
   png_byte VAR_7[6];

   FUNC_0(1, "in png_write_bKGD");

   if (VAR_6 == VAR_1)
   {
      if (




         VAR_5->index >= VAR_4->num_palette)
      {
         FUNC_2(VAR_4, "Invalid background palette index");
         return;
      }

      VAR_7[0] = VAR_5->index;
      FUNC_3(VAR_4, VAR_3, VAR_7, 1);
   }

   else if ((VAR_6 & VAR_0) != 0)
   {
      FUNC_1(VAR_7, VAR_5->red);
      FUNC_1(VAR_7 + 2, VAR_5->green);
      FUNC_1(VAR_7 + 4, VAR_5->blue);



      if ((VAR_7[0] | VAR_7[2] | VAR_7[4]) != 0)

      {
         FUNC_2(VAR_4,
             "Ignoring attempt to write 16-bit bKGD chunk "
             "when bit_depth is 8");

         return;
      }

      FUNC_3(VAR_4, VAR_3, VAR_7, 6);
   }

   else
   {
      if (VAR_5->gray >= (1 << VAR_4->bit_depth))
      {
         FUNC_2(VAR_4,
             "Ignoring attempt to write bKGD chunk out-of-range for bit_depth");

         return;
      }

      FUNC_1(VAR_7, VAR_5->gray);
      FUNC_3(VAR_4, VAR_3, VAR_7, 2);
   }
}
