
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef scalar_t__ png_uint_16 ;
typedef TYPE_1__* png_structrp ;
typedef TYPE_2__* png_const_colorp ;
typedef int png_byte ;
struct TYPE_11__ {int blue; int green; int red; } ;
struct TYPE_10__ {int color_type; int bit_depth; int mng_features_permitted; int mode; scalar_t__ num_palette; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__) ;

void
FUNC_7(png_structrp VAR_6, png_const_colorp VAR_7,
    png_uint_32 VAR_8)
{
   png_uint_32 VAR_9, VAR_10;
   png_const_colorp VAR_11;
   png_byte VAR_12[3];

   FUNC_0(1, "in png_write_PLTE");

   VAR_9 = (VAR_6->color_type == VAR_1) ?
      (1 << VAR_6->bit_depth) : VAR_4;

   if ((



       VAR_8 == 0) || VAR_8 > VAR_9)
   {
      if (VAR_6->color_type == VAR_1)
      {
         FUNC_2(VAR_6, "Invalid number of colors in palette");
      }

      else
      {
         FUNC_3(VAR_6, "Invalid number of colors in palette");
         return;
      }
   }

   if ((VAR_6->color_type & VAR_0) == 0)
   {
      FUNC_3(VAR_6,
          "Ignoring request to write a PLTE chunk in grayscale PNG");

      return;
   }

   VAR_6->num_palette = (png_uint_16)VAR_8;
   FUNC_1(3, "num_palette = %d", VAR_6->num_palette);

   FUNC_6(VAR_6, VAR_5, (png_uint_32)(VAR_8 * 3));
   VAR_11=VAR_7;

   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
   {
      VAR_12[0] = VAR_11[VAR_10].red;
      VAR_12[1] = VAR_11[VAR_10].green;
      VAR_12[2] = VAR_11[VAR_10].blue;
      FUNC_4(VAR_6, VAR_12, 3);
   }


   FUNC_5(VAR_6);
   VAR_6->mode |= VAR_3;
}
