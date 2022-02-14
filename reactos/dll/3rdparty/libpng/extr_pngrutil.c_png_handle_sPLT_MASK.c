
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef unsigned int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
struct TYPE_17__ {int depth; int nentries; TYPE_3__* entries; scalar_t__ name; } ;
typedef TYPE_2__ png_sPLT_t ;
typedef TYPE_3__* png_sPLT_entryp ;
typedef int png_sPLT_entry ;
typedef int png_int_32 ;
typedef int png_inforp ;
typedef scalar_t__ png_charp ;
typedef scalar_t__* png_bytep ;
typedef int png_alloc_size_t ;
struct TYPE_18__ {void* frequency; void* alpha; void* blue; void* green; void* red; } ;
struct TYPE_16__ {int user_chunk_cache_max; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*,unsigned int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*) ;
 void* FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 scalar_t__* FUNC_8 (TYPE_1__*,unsigned int,int) ;
 int FUNC_9 (TYPE_1__*,int ,TYPE_2__*,int) ;
 int FUNC_10 (TYPE_1__*,char*) ;

void
FUNC_11(png_structrp VAR_3, png_inforp VAR_4, png_uint_32 VAR_5)

{
   png_bytep VAR_6, VAR_7;
   png_sPLT_t VAR_8;
   png_sPLT_entryp VAR_9;
   png_uint_32 VAR_10;
   int VAR_11, VAR_12;
   png_uint_32 VAR_13 = 0;
   png_uint_32 VAR_14;
   size_t VAR_15;

   FUNC_4(1, "in png_handle_sPLT");
   if ((VAR_3->mode & VAR_1) == 0)
      FUNC_1(VAR_3, "missing IHDR");

   else if ((VAR_3->mode & VAR_0) != 0)
   {
      FUNC_2(VAR_3, VAR_5);
      FUNC_0(VAR_3, "out of place");
      return;
   }
   VAR_7 = FUNC_8(VAR_3, VAR_5+1, 2 );
   if (VAR_7 == ((void*)0))
   {
      FUNC_2(VAR_3, VAR_5);
      FUNC_0(VAR_3, "out of memory");
      return;
   }






   FUNC_3(VAR_3, VAR_7, VAR_5);

   if (FUNC_2(VAR_3, VAR_13) != 0)
      return;

   VAR_7[VAR_5] = 0;

   for (VAR_6 = VAR_7; *VAR_6; VAR_6++)
                                           ;

   ++VAR_6;


   if (VAR_5 < 2U || VAR_6 > VAR_7 + (VAR_5 - 2U))
   {
      FUNC_10(VAR_3, "malformed sPLT chunk");
      return;
   }

   VAR_8.depth = *VAR_6++;
   VAR_11 = (VAR_8.depth == 8 ? 6 : 10);



   VAR_10 = VAR_5 - (png_uint_32)(VAR_6 - VAR_7);


   if ((VAR_10 % (unsigned int)VAR_11) != 0)
   {
      FUNC_10(VAR_3, "sPLT chunk has bad length");
      return;
   }

   VAR_14 = (png_uint_32)(VAR_10 / (unsigned int)VAR_11);
   VAR_15 = VAR_2 / (sizeof (png_sPLT_entry));

   if (VAR_14 > VAR_15)
   {
      FUNC_10(VAR_3, "sPLT chunk too long");
      return;
   }

   VAR_8.nentries = (png_int_32)(VAR_10 / (unsigned int)VAR_11);

   VAR_8.entries = (png_sPLT_entryp)FUNC_7(VAR_3,
       (png_alloc_size_t) VAR_8.nentries * (sizeof (png_sPLT_entry)));

   if (VAR_8.entries == ((void*)0))
   {
      FUNC_10(VAR_3, "sPLT chunk requires too much memory");
      return;
   }
   VAR_9 = VAR_8.entries;

   for (VAR_12 = 0; VAR_12 < VAR_8.nentries; VAR_12++)
   {

      if (VAR_8.depth == 8)
      {
         VAR_9[VAR_12].red = *VAR_6++;
         VAR_9[VAR_12].green = *VAR_6++;
         VAR_9[VAR_12].blue = *VAR_6++;
         VAR_9[VAR_12].alpha = *VAR_6++;
      }

      else
      {
         VAR_9[VAR_12].red = FUNC_6(VAR_6); VAR_6 += 2;
         VAR_9[VAR_12].green = FUNC_6(VAR_6); VAR_6 += 2;
         VAR_9[VAR_12].blue = FUNC_6(VAR_6); VAR_6 += 2;
         VAR_9[VAR_12].alpha = FUNC_6(VAR_6); VAR_6 += 2;
      }

      VAR_9[VAR_12].frequency = FUNC_6(VAR_6); VAR_6 += 2;
   }



   VAR_8.name = (png_charp)VAR_7;

   FUNC_9(VAR_3, VAR_4, &VAR_8, 1);

   FUNC_5(VAR_3, VAR_8.entries);
}
