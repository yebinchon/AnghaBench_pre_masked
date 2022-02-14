
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef scalar_t__ png_uint_16 ;
typedef TYPE_1__* png_structp ;
typedef TYPE_2__* png_infop ;
typedef TYPE_3__* png_colorp ;
struct TYPE_19__ {void* blue; void* green; void* red; } ;
typedef TYPE_3__ png_color ;
typedef void* png_byte ;
struct TYPE_18__ {int valid; scalar_t__ num_trans; } ;
struct TYPE_17__ {int mode; int color_type; int flags; scalar_t__ num_trans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,void**,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_1__*,char*) ;

void
FUNC_9(png_structp VAR_9, png_infop VAR_10, png_uint_32 VAR_11)
{
   png_color VAR_12[VAR_8];
   int VAR_13, VAR_14;

   png_colorp VAR_15;


   FUNC_5(1, "in png_handle_PLTE\n");

   if (!(VAR_9->mode & VAR_5))
      FUNC_6(VAR_9, "Missing IHDR before PLTE");
   else if (VAR_9->mode & VAR_4)
   {
      FUNC_8(VAR_9, "Invalid PLTE after IDAT");
      FUNC_3(VAR_9, VAR_11);
      return;
   }
   else if (VAR_9->mode & VAR_6)
      FUNC_6(VAR_9, "Duplicate PLTE chunk");

   VAR_9->mode |= VAR_6;

   if (!(VAR_9->color_type&VAR_0))
   {
      FUNC_8(VAR_9,
        "Ignoring PLTE chunk in grayscale PNG");
      FUNC_3(VAR_9, VAR_11);
      return;
   }

   if (VAR_9->color_type != VAR_1)
   {
      FUNC_3(VAR_9, VAR_11);
      return;
   }


   if (VAR_11 > 3*VAR_8 || VAR_11 % 3)
   {
      if (VAR_9->color_type != VAR_1)
      {
         FUNC_8(VAR_9, "Invalid palette chunk");
         FUNC_3(VAR_9, VAR_11);
         return;
      }
      else
      {
         FUNC_6(VAR_9, "Invalid palette chunk");
      }
   }

   VAR_13 = (int)VAR_11 / 3;


   for (VAR_14 = 0, VAR_15 = VAR_12; VAR_14 < VAR_13; VAR_14++, VAR_15++)
   {
      png_byte VAR_16[3];

      FUNC_4(VAR_9, VAR_16, 3);
      VAR_15->red = VAR_16[0];
      VAR_15->green = VAR_16[1];
      VAR_15->blue = VAR_16[2];
   }
   if (VAR_9->color_type == VAR_1)

   {
      FUNC_3(VAR_9, 0);
   }

   else if (FUNC_2(VAR_9))
   {




      if (!(VAR_9->flags & VAR_3))
      {
         if (VAR_9->flags & VAR_2)
         {
            FUNC_0(VAR_9, "CRC error");
         }
         else
         {
            FUNC_1(VAR_9, "CRC error");
            return;
         }
      }

      else if (!(VAR_9->flags & VAR_2))
      {
         FUNC_1(VAR_9, "CRC error");
      }
   }


   FUNC_7(VAR_9, VAR_10, VAR_12, VAR_13);
}
