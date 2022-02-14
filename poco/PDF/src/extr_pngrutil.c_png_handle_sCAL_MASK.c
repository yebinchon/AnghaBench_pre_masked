
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef size_t png_size_t ;
typedef TYPE_2__* png_infop ;
typedef int* png_charp ;
typedef int png_bytep ;
struct TYPE_17__ {int valid; } ;
struct TYPE_16__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (int*,int*,size_t) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int,double,double) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int,int*,int*) ;
 scalar_t__ FUNC_10 (int*) ;
 double FUNC_11 (TYPE_1__*,int*,int**) ;
 int FUNC_12 (TYPE_1__*,char*) ;

void
FUNC_13(png_structp VAR_3, png_infop VAR_4, png_uint_32 VAR_5)
{
   png_charp VAR_6, VAR_7;
   png_size_t VAR_8;

   FUNC_2(1, "in png_handle_sCAL\n");

   if (!(VAR_3->mode & VAR_1))
      FUNC_4(VAR_3, "Missing IHDR before sCAL");
   else if (VAR_3->mode & VAR_0)
   {
      FUNC_12(VAR_3, "Invalid sCAL after IDAT");
      FUNC_0(VAR_3, VAR_5);
      return;
   }
   else if (VAR_4 != ((void*)0) && (VAR_4->valid & VAR_2))
   {
      FUNC_12(VAR_3, "Duplicate sCAL chunk");
      FUNC_0(VAR_3, VAR_5);
      return;
   }

   FUNC_3(2, "Allocating and reading sCAL chunk data (%lu bytes)\n",
      VAR_5 + 1);
   VAR_6 = (png_charp)FUNC_6(VAR_3, VAR_5 + 1);
   if (VAR_6 == ((void*)0))
     {
       FUNC_12(VAR_3, "Out of memory while processing sCAL chunk");
       return;
     }
   VAR_8 = (png_size_t)VAR_5;
   FUNC_1(VAR_3, (png_bytep)VAR_6, VAR_8);

   if (FUNC_0(VAR_3, 0))
   {
      FUNC_5(VAR_3, VAR_6);
      return;
   }

   VAR_6[VAR_8] = 0x00;

   VAR_7 = VAR_6 + 1;
   for (VAR_7 = VAR_6; *VAR_7; VAR_7++)
                       ;
   VAR_7++;

   if (VAR_6 + VAR_8 < VAR_7)
   {
       FUNC_12(VAR_3, "Truncated sCAL chunk");




      FUNC_5(VAR_3, VAR_6);
       return;
   }
   if (VAR_6 + VAR_8 < VAR_7



      )
   {
      FUNC_12(VAR_3, "Invalid sCAL data");
      FUNC_5(VAR_3, VAR_6);




      return;
   }
   FUNC_5(VAR_3, VAR_6);




}
