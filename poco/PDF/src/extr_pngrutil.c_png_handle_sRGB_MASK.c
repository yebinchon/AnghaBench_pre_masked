
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef TYPE_2__* png_infop ;
typedef scalar_t__ png_fixed_point ;
typedef int png_byte ;
struct TYPE_12__ {int valid; int gamma; scalar_t__ int_y_blue; scalar_t__ int_x_blue; scalar_t__ int_y_green; scalar_t__ int_x_green; scalar_t__ int_y_red; scalar_t__ int_x_red; scalar_t__ int_y_white; scalar_t__ int_x_white; scalar_t__ int_gamma; } ;
struct TYPE_11__ {int mode; int gamma; scalar_t__ int_gamma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int VAR_7 ;

void
FUNC_8(png_structp VAR_8, png_infop VAR_9, png_uint_32 VAR_10)
{
   int VAR_11;
   png_byte VAR_12[1];

   FUNC_4(1, "in png_handle_sRGB\n");

   if (!(VAR_8->mode & VAR_1))
      FUNC_5(VAR_8, "Missing IHDR before sRGB");
   else if (VAR_8->mode & VAR_0)
   {
      FUNC_7(VAR_8, "Invalid sRGB after IDAT");
      FUNC_2(VAR_8, VAR_10);
      return;
   }
   else if (VAR_8->mode & VAR_2)

      FUNC_7(VAR_8, "Out of place sRGB chunk");

   if (VAR_9 != ((void*)0) && (VAR_9->valid & VAR_5))
   {
      FUNC_7(VAR_8, "Duplicate sRGB chunk");
      FUNC_2(VAR_8, VAR_10);
      return;
   }

   if (VAR_10 != 1)
   {
      FUNC_7(VAR_8, "Incorrect sRGB chunk length");
      FUNC_2(VAR_8, VAR_10);
      return;
   }

   FUNC_3(VAR_8, VAR_12, 1);
   if (FUNC_2(VAR_8, 0))
      return;

   VAR_11 = VAR_12[0];

   if (VAR_11 >= VAR_6)
   {
      FUNC_7(VAR_8, "Unknown sRGB intent");
      return;
   }
   FUNC_6(VAR_8, VAR_9, VAR_11);
}
