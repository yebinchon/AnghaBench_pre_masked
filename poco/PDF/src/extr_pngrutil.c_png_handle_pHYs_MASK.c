
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef TYPE_2__* png_infop ;
typedef int png_byte ;
struct TYPE_12__ {int valid; } ;
struct TYPE_11__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int,int,int) ;
 int FUNC_6 (TYPE_1__*,char*) ;

void
FUNC_7(png_structp VAR_3, png_infop VAR_4, png_uint_32 VAR_5)
{
   png_byte VAR_6[9];
   png_uint_32 VAR_7, VAR_8;
   int VAR_9;

   FUNC_2(1, "in png_handle_pHYs\n");

   if (!(VAR_3->mode & VAR_1))
      FUNC_3(VAR_3, "Missing IHDR before pHYs");
   else if (VAR_3->mode & VAR_0)
   {
      FUNC_6(VAR_3, "Invalid pHYs after IDAT");
      FUNC_0(VAR_3, VAR_5);
      return;
   }
   else if (VAR_4 != ((void*)0) && (VAR_4->valid & VAR_2))
   {
      FUNC_6(VAR_3, "Duplicate pHYs chunk");
      FUNC_0(VAR_3, VAR_5);
      return;
   }

   if (VAR_5 != 9)
   {
      FUNC_6(VAR_3, "Incorrect pHYs chunk length");
      FUNC_0(VAR_3, VAR_5);
      return;
   }

   FUNC_1(VAR_3, VAR_6, 9);
   if (FUNC_0(VAR_3, 0))
      return;

   VAR_7 = FUNC_4(VAR_6);
   VAR_8 = FUNC_4(VAR_6 + 4);
   VAR_9 = VAR_6[8];
   FUNC_5(VAR_3, VAR_4, VAR_7, VAR_8, VAR_9);
}
