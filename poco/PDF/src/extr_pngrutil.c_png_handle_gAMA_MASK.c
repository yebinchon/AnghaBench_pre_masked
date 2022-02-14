
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef TYPE_2__* png_infop ;
typedef scalar_t__ png_fixed_point ;
typedef int png_byte ;
struct TYPE_14__ {int valid; } ;
struct TYPE_13__ {int mode; float gamma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,long,int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,float) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int VAR_5 ;

void
FUNC_10(png_structp VAR_6, png_infop VAR_7, png_uint_32 VAR_8)
{
   png_fixed_point VAR_9;



   png_byte VAR_10[4];

   FUNC_4(1, "in png_handle_gAMA\n");

   if (!(VAR_6->mode & VAR_1))
      FUNC_5(VAR_6, "Missing IHDR before gAMA");
   else if (VAR_6->mode & VAR_0)
   {
      FUNC_9(VAR_6, "Invalid gAMA after IDAT");
      FUNC_2(VAR_6, VAR_8);
      return;
   }
   else if (VAR_6->mode & VAR_2)

      FUNC_9(VAR_6, "Out of place gAMA chunk");

   if (VAR_7 != ((void*)0) && (VAR_7->valid & VAR_3)



      )
   {
      FUNC_9(VAR_6, "Duplicate gAMA chunk");
      FUNC_2(VAR_6, VAR_8);
      return;
   }

   if (VAR_8 != 4)
   {
      FUNC_9(VAR_6, "Incorrect gAMA chunk length");
      FUNC_2(VAR_6, VAR_8);
      return;
   }

   FUNC_3(VAR_6, VAR_10, 4);
   if (FUNC_2(VAR_6, 0))
      return;

   VAR_9 = (png_fixed_point)FUNC_6(VAR_10);

   if (VAR_9 == 0)
      {
         FUNC_9(VAR_6,
           "Ignoring gAMA chunk with gamma=0");
         return;
      }
}
