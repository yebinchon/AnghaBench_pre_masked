
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef TYPE_2__* png_color_16p ;
typedef int png_byte ;
struct TYPE_8__ {scalar_t__ index; int red; int green; int blue; int gray; } ;
struct TYPE_7__ {scalar_t__ num_palette; int mng_features_permitted; int bit_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int*,int ) ;

void
FUNC_4(png_structp VAR_5, png_color_16p VAR_6, int VAR_7)
{



   png_byte VAR_8[6];

   FUNC_0(1, "in png_write_bKGD\n");
   if (VAR_7 == VAR_1)
   {
      if (




         VAR_6->index > VAR_5->num_palette)
      {
         FUNC_2(VAR_5, "Invalid background palette index");
         return;
      }
      VAR_8[0] = VAR_6->index;
      FUNC_3(VAR_5, VAR_4, VAR_8, (png_size_t)1);
   }
   else if (VAR_7 & VAR_0)
   {
      FUNC_1(VAR_8, VAR_6->red);
      FUNC_1(VAR_8 + 2, VAR_6->green);
      FUNC_1(VAR_8 + 4, VAR_6->blue);
      if(VAR_5->bit_depth == 8 && (VAR_8[0] | VAR_8[2] | VAR_8[4]))
         {
            FUNC_2(VAR_5,
              "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
            return;
         }
      FUNC_3(VAR_5, VAR_4, VAR_8, (png_size_t)6);
   }
   else
   {
      if(VAR_6->gray >= (1 << VAR_5->bit_depth))
      {
         FUNC_2(VAR_5,
           "Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
         return;
      }
      FUNC_1(VAR_8, VAR_6->gray);
      FUNC_3(VAR_5, VAR_4, VAR_8, (png_size_t)2);
   }
}
