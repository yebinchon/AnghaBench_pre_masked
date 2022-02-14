
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_13__ {int year; void* month; void* day; void* hour; void* minute; void* second; } ;
typedef TYPE_1__ png_time ;
typedef TYPE_2__* png_structp ;
typedef TYPE_3__* png_infop ;
typedef void* png_byte ;
struct TYPE_15__ {int valid; } ;
struct TYPE_14__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,void**,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,char*) ;

void
FUNC_7(png_structp VAR_4, png_infop VAR_5, png_uint_32 VAR_6)
{
   png_byte VAR_7[7];
   png_time VAR_8;

   FUNC_2(1, "in png_handle_tIME\n");

   if (!(VAR_4->mode & VAR_2))
      FUNC_3(VAR_4, "Out of place tIME chunk");
   else if (VAR_5 != ((void*)0) && (VAR_5->valid & VAR_3))
   {
      FUNC_6(VAR_4, "Duplicate tIME chunk");
      FUNC_0(VAR_4, VAR_6);
      return;
   }

   if (VAR_4->mode & VAR_1)
      VAR_4->mode |= VAR_0;

   if (VAR_6 != 7)
   {
      FUNC_6(VAR_4, "Incorrect tIME chunk length");
      FUNC_0(VAR_4, VAR_6);
      return;
   }

   FUNC_1(VAR_4, VAR_7, 7);
   if (FUNC_0(VAR_4, 0))
      return;

   VAR_8.second = VAR_7[6];
   VAR_8.minute = VAR_7[5];
   VAR_8.hour = VAR_7[4];
   VAR_8.day = VAR_7[3];
   VAR_8.month = VAR_7[2];
   VAR_8.year = FUNC_4(VAR_7);

   FUNC_5(VAR_4, VAR_5, &VAR_8);
}
