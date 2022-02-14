
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef scalar_t__ png_uint_16 ;
typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef TYPE_2__* png_colorp ;
typedef int png_byte ;
struct TYPE_11__ {int blue; int green; int red; } ;
struct TYPE_10__ {int mng_features_permitted; int color_type; int mode; scalar_t__ num_palette; } ;


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
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__) ;

void
FUNC_7(png_structp VAR_6, png_colorp VAR_7, png_uint_32 VAR_8)
{



   png_uint_32 VAR_9;
   png_colorp VAR_10;
   png_byte VAR_11[3];

   FUNC_0(1, "in png_write_PLTE\n");
   if ((



        VAR_8 == 0) || VAR_8 > 256)
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

   if (!(VAR_6->color_type&VAR_0))
   {
      FUNC_3(VAR_6,
        "Ignoring request to write a PLTE chunk in grayscale PNG");
      return;
   }

   VAR_6->num_palette = (png_uint_16)VAR_8;
   FUNC_1(3, "num_palette = %d\n", VAR_6->num_palette);

   FUNC_6(VAR_6, VAR_5, VAR_8 * 3);

   for (VAR_9 = 0, VAR_10 = VAR_7; VAR_9 < VAR_8; VAR_9++, VAR_10++)
   {
      VAR_11[0] = VAR_10->red;
      VAR_11[1] = VAR_10->green;
      VAR_11[2] = VAR_10->blue;
      FUNC_4(VAR_6, VAR_11, (png_size_t)3);
   }
   FUNC_5(VAR_6);
   VAR_6->mode |= VAR_3;
}
