
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef TYPE_2__* png_infop ;
typedef float png_fixed_point ;
typedef int png_byte ;
struct TYPE_14__ {int valid; } ;
struct TYPE_13__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (float,int,int) ;
 int FUNC_1 (int ,char*,float,float,float,float) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,float,float,float,float,float,float,float,float) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,float,float,float,float,float,float,float,float) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int VAR_5 ;

void
FUNC_10(png_structp VAR_6, png_infop VAR_7, png_uint_32 VAR_8)
{
   png_byte VAR_9[4];



   png_fixed_point VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
      VAR_15, VAR_16, VAR_17;

   png_uint_32 VAR_18, VAR_19;

   FUNC_4(1, "in png_handle_cHRM\n");

   if (!(VAR_6->mode & VAR_1))
      FUNC_5(VAR_6, "Missing IHDR before cHRM");
   else if (VAR_6->mode & VAR_0)
   {
      FUNC_9(VAR_6, "Invalid cHRM after IDAT");
      FUNC_2(VAR_6, VAR_8);
      return;
   }
   else if (VAR_6->mode & VAR_2)

      FUNC_9(VAR_6, "Missing PLTE before cHRM");

   if (VAR_7 != ((void*)0) && (VAR_7->valid & VAR_3)



      )
   {
      FUNC_9(VAR_6, "Duplicate cHRM chunk");
      FUNC_2(VAR_6, VAR_8);
      return;
   }

   if (VAR_8 != 32)
   {
      FUNC_9(VAR_6, "Incorrect cHRM chunk length");
      FUNC_2(VAR_6, VAR_8);
      return;
   }

   FUNC_3(VAR_6, VAR_9, 4);
   VAR_18 = FUNC_6(VAR_9);

   FUNC_3(VAR_6, VAR_9, 4);
   VAR_19 = FUNC_6(VAR_9);

   if (VAR_18 > 80000L || VAR_19 > 80000L ||
      VAR_18 + VAR_19 > 100000L)
   {
      FUNC_9(VAR_6, "Invalid cHRM white point");
      FUNC_2(VAR_6, 24);
      return;
   }
   VAR_10 = (png_fixed_point)VAR_18;
   VAR_11 = (png_fixed_point)VAR_19;

   FUNC_3(VAR_6, VAR_9, 4);
   VAR_18 = FUNC_6(VAR_9);

   FUNC_3(VAR_6, VAR_9, 4);
   VAR_19 = FUNC_6(VAR_9);

   if (VAR_18 + VAR_19 > 100000L)
   {
      FUNC_9(VAR_6, "Invalid cHRM red point");
      FUNC_2(VAR_6, 16);
      return;
   }
   VAR_12 = (png_fixed_point)VAR_18;
   VAR_13 = (png_fixed_point)VAR_19;

   FUNC_3(VAR_6, VAR_9, 4);
   VAR_18 = FUNC_6(VAR_9);

   FUNC_3(VAR_6, VAR_9, 4);
   VAR_19 = FUNC_6(VAR_9);

   if (VAR_18 + VAR_19 > 100000L)
   {
      FUNC_9(VAR_6, "Invalid cHRM green point");
      FUNC_2(VAR_6, 8);
      return;
   }
   VAR_14 = (png_fixed_point)VAR_18;
   VAR_15 = (png_fixed_point)VAR_19;

   FUNC_3(VAR_6, VAR_9, 4);
   VAR_18 = FUNC_6(VAR_9);

   FUNC_3(VAR_6, VAR_9, 4);
   VAR_19 = FUNC_6(VAR_9);

   if (VAR_18 + VAR_19 > 100000L)
   {
      FUNC_9(VAR_6, "Invalid cHRM blue point");
      FUNC_2(VAR_6, 0);
      return;
   }
   VAR_16 = (png_fixed_point)VAR_18;
   VAR_17 = (png_fixed_point)VAR_19;
   if (FUNC_2(VAR_6, 0))
      return;
}
