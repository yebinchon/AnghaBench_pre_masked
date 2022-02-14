
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_const_structrp ;
struct TYPE_5__ {int user_width_max; int user_height_max; int mode; int mng_features_permitted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;

void
FUNC_3(png_const_structrp VAR_14,
    png_uint_32 VAR_15, png_uint_32 VAR_16, int VAR_17,
    int VAR_18, int VAR_19, int VAR_20,
    int VAR_21)
{
   int VAR_22 = 0;


   if (VAR_15 == 0)
   {
      FUNC_2(VAR_14, "Image width is zero in IHDR");
      VAR_22 = 1;
   }

   if (VAR_15 > VAR_11)
   {
      FUNC_2(VAR_14, "Invalid image width in IHDR");
      VAR_22 = 1;
   }

   if (FUNC_1(((VAR_15 + 7) & (~7U)),
       ((VAR_10
           - 48
           - 1)
           / 8)
           - 1))
   {
      FUNC_2(VAR_14, "Image width is too large for this architecture");
      VAR_22 = 1;
   }




   if (VAR_15 > VAR_13)

   {
      FUNC_2(VAR_14, "Image width exceeds user limit in IHDR");
      VAR_22 = 1;
   }

   if (VAR_16 == 0)
   {
      FUNC_2(VAR_14, "Image height is zero in IHDR");
      VAR_22 = 1;
   }

   if (VAR_16 > VAR_11)
   {
      FUNC_2(VAR_14, "Invalid image height in IHDR");
      VAR_22 = 1;
   }




   if (VAR_16 > VAR_12)

   {
      FUNC_2(VAR_14, "Image height exceeds user limit in IHDR");
      VAR_22 = 1;
   }


   if (VAR_17 != 1 && VAR_17 != 2 && VAR_17 != 4 &&
       VAR_17 != 8 && VAR_17 != 16)
   {
      FUNC_2(VAR_14, "Invalid bit depth in IHDR");
      VAR_22 = 1;
   }

   if (VAR_18 < 0 || VAR_18 == 1 ||
       VAR_18 == 5 || VAR_18 > 6)
   {
      FUNC_2(VAR_14, "Invalid color type in IHDR");
      VAR_22 = 1;
   }

   if (((VAR_18 == VAR_1) && VAR_17 > 8) ||
       ((VAR_18 == VAR_2 ||
         VAR_18 == VAR_0 ||
         VAR_18 == VAR_3) && VAR_17 < 8))
   {
      FUNC_2(VAR_14, "Invalid color type/bit depth combination in IHDR");
      VAR_22 = 1;
   }

   if (VAR_19 >= VAR_8)
   {
      FUNC_2(VAR_14, "Unknown interlace method in IHDR");
      VAR_22 = 1;
   }

   if (VAR_20 != VAR_4)
   {
      FUNC_2(VAR_14, "Unknown compression method in IHDR");
      VAR_22 = 1;
   }
   if (VAR_21 != VAR_5)
   {
      FUNC_2(VAR_14, "Unknown filter method in IHDR");
      VAR_22 = 1;
   }


   if (VAR_22 == 1)
      FUNC_0(VAR_14, "Invalid IHDR data");
}
