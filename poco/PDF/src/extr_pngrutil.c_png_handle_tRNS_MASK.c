
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_uint_16 ;
typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef TYPE_2__* png_infop ;
typedef int png_byte ;
struct TYPE_14__ {int gray; int red; int green; int blue; } ;
struct TYPE_13__ {int valid; } ;
struct TYPE_12__ {int bit_depth; int mode; scalar_t__ color_type; int num_trans; TYPE_6__ trans_values; scalar_t__ num_palette; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int *,int,TYPE_6__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;

void
FUNC_7(png_structp VAR_8, png_infop VAR_9, png_uint_32 VAR_10)
{
   png_byte VAR_11[VAR_7];
   int VAR_12;

   FUNC_2(1, "in png_handle_tRNS\n");




   VAR_12 = (1 << VAR_8->bit_depth) - 1;

   if (!(VAR_8->mode & VAR_4))
      FUNC_3(VAR_8, "Missing IHDR before tRNS");
   else if (VAR_8->mode & VAR_3)
   {
      FUNC_6(VAR_8, "Invalid tRNS after IDAT");
      FUNC_0(VAR_8, VAR_10);
      return;
   }
   else if (VAR_9 != ((void*)0) && (VAR_9->valid & VAR_6))
   {
      FUNC_6(VAR_8, "Duplicate tRNS chunk");
      FUNC_0(VAR_8, VAR_10);
      return;
   }

   if (VAR_8->color_type == VAR_0)
   {
      png_byte VAR_13[2];

      if (VAR_10 != 2)
      {
         FUNC_6(VAR_8, "Incorrect tRNS chunk length");
         FUNC_0(VAR_8, VAR_10);
         return;
      }

      FUNC_1(VAR_8, VAR_13, 2);
      VAR_8->num_trans = 1;
      VAR_8->trans_values.gray = FUNC_4(VAR_13) & VAR_12;
   }
   else if (VAR_8->color_type == VAR_2)
   {
      png_byte VAR_14[6];

      if (VAR_10 != 6)
      {
         FUNC_6(VAR_8, "Incorrect tRNS chunk length");
         FUNC_0(VAR_8, VAR_10);
         return;
      }
      FUNC_1(VAR_8, VAR_14, (png_size_t)VAR_10);
      VAR_8->num_trans = 1;
      VAR_8->trans_values.red = FUNC_4(VAR_14) & VAR_12;
      VAR_8->trans_values.green = FUNC_4(VAR_14 + 2) & VAR_12;
      VAR_8->trans_values.blue = FUNC_4(VAR_14 + 4) & VAR_12;
   }
   else if (VAR_8->color_type == VAR_1)
   {
      if (!(VAR_8->mode & VAR_5))
      {

         FUNC_6(VAR_8, "Missing PLTE before tRNS");
      }
      if (VAR_10 > (png_uint_32)VAR_8->num_palette ||
          VAR_10 > VAR_7)
      {
         FUNC_6(VAR_8, "Incorrect tRNS chunk length");
         FUNC_0(VAR_8, VAR_10);
         return;
      }
      if (VAR_10 == 0)
      {
         FUNC_6(VAR_8, "Zero length tRNS chunk");
         FUNC_0(VAR_8, VAR_10);
         return;
      }
      FUNC_1(VAR_8, VAR_11, (png_size_t)VAR_10);
      VAR_8->num_trans = (png_uint_16)VAR_10;
   }
   else
   {
      FUNC_6(VAR_8, "tRNS chunk not allowed with alpha channel");
      FUNC_0(VAR_8, VAR_10);
      return;
   }

   if (FUNC_0(VAR_8, 0))
   {
      VAR_8->num_trans = 0;
      return;
   }

   FUNC_5(VAR_8, VAR_9, VAR_11, VAR_8->num_trans,
      &(VAR_8->trans_values));
}
