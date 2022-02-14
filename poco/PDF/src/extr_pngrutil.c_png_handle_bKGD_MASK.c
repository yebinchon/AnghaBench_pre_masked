
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef void* png_uint_16 ;
typedef TYPE_2__* png_structp ;
typedef int png_size_t ;
typedef TYPE_3__* png_infop ;
typedef size_t png_byte ;
struct TYPE_16__ {size_t index; void* blue; void* green; void* red; void* gray; } ;
struct TYPE_15__ {int valid; size_t num_palette; } ;
struct TYPE_14__ {int mode; int color_type; TYPE_7__ background; TYPE_1__* palette; } ;
struct TYPE_13__ {scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,size_t*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 void* FUNC_4 (size_t*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,TYPE_7__*) ;
 int FUNC_6 (TYPE_2__*,char*) ;

void
FUNC_7(png_structp VAR_6, png_infop VAR_7, png_uint_32 VAR_8)
{
   png_size_t VAR_9;
   png_byte VAR_10[6];

   FUNC_2(1, "in png_handle_bKGD\n");

   if (!(VAR_6->mode & VAR_3))
      FUNC_3(VAR_6, "Missing IHDR before bKGD");
   else if (VAR_6->mode & VAR_2)
   {
      FUNC_6(VAR_6, "Invalid bKGD after IDAT");
      FUNC_0(VAR_6, VAR_8);
      return;
   }
   else if (VAR_6->color_type == VAR_1 &&
            !(VAR_6->mode & VAR_4))
   {
      FUNC_6(VAR_6, "Missing PLTE before bKGD");
      FUNC_0(VAR_6, VAR_8);
      return;
   }
   else if (VAR_7 != ((void*)0) && (VAR_7->valid & VAR_5))
   {
      FUNC_6(VAR_6, "Duplicate bKGD chunk");
      FUNC_0(VAR_6, VAR_8);
      return;
   }

   if (VAR_6->color_type == VAR_1)
      VAR_9 = 1;
   else if (VAR_6->color_type & VAR_0)
      VAR_9 = 6;
   else
      VAR_9 = 2;

   if (VAR_8 != VAR_9)
   {
      FUNC_6(VAR_6, "Incorrect bKGD chunk length");
      FUNC_0(VAR_6, VAR_8);
      return;
   }

   FUNC_1(VAR_6, VAR_10, VAR_9);
   if (FUNC_0(VAR_6, 0))
      return;





   if (VAR_6->color_type == VAR_1)
   {
      VAR_6->background.index = VAR_10[0];
      if(VAR_7->num_palette)
      {
          if(VAR_10[0] > VAR_7->num_palette)
          {
             FUNC_6(VAR_6, "Incorrect bKGD chunk index value");
             return;
          }
          VAR_6->background.red =
             (png_uint_16)VAR_6->palette[VAR_10[0]].red;
          VAR_6->background.green =
             (png_uint_16)VAR_6->palette[VAR_10[0]].green;
          VAR_6->background.blue =
             (png_uint_16)VAR_6->palette[VAR_10[0]].blue;
      }
   }
   else if (!(VAR_6->color_type & VAR_0))
   {
      VAR_6->background.red =
      VAR_6->background.green =
      VAR_6->background.blue =
      VAR_6->background.gray = FUNC_4(VAR_10);
   }
   else
   {
      VAR_6->background.red = FUNC_4(VAR_10);
      VAR_6->background.green = FUNC_4(VAR_10 + 2);
      VAR_6->background.blue = FUNC_4(VAR_10 + 4);
   }

   FUNC_5(VAR_6, VAR_7, &(VAR_6->background));
}
