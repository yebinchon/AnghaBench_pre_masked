
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t png_uint_32 ;
struct TYPE_14__ {size_t text_length; int * lang_key; int * lang; scalar_t__ itxt_length; void* text; void* key; int compression; } ;
typedef TYPE_2__ png_text ;
typedef TYPE_3__* png_structrp ;
typedef int png_inforp ;
typedef char* png_const_charp ;
typedef void* png_charp ;
typedef scalar_t__* png_bytep ;
typedef size_t png_alloc_size_t ;
struct TYPE_13__ {char* msg; } ;
struct TYPE_15__ {int user_chunk_cache_max; int mode; TYPE_1__ zstream; scalar_t__* read_buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (TYPE_3__*,scalar_t__*,size_t) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,size_t,size_t,size_t*,int) ;
 scalar_t__* FUNC_6 (TYPE_3__*,size_t,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,TYPE_2__*,int) ;

void
FUNC_8(png_structrp VAR_7, png_inforp VAR_8, png_uint_32 VAR_9)
{
   png_const_charp VAR_10 = ((void*)0);
   png_bytep VAR_11;
   png_uint_32 VAR_12;

   FUNC_4(1, "in png_handle_zTXt");
   if ((VAR_7->mode & VAR_3) == 0)
      FUNC_1(VAR_7, "missing IHDR");

   if ((VAR_7->mode & VAR_2) != 0)
      VAR_7->mode |= VAR_0;




   VAR_11 = FUNC_6(VAR_7, VAR_9, 2 );

   if (VAR_11 == ((void*)0))
   {
      FUNC_2(VAR_7, VAR_9);
      FUNC_0(VAR_7, "out of memory");
      return;
   }

   FUNC_3(VAR_7, VAR_11, VAR_9);

   if (FUNC_2(VAR_7, 0) != 0)
      return;


   for (VAR_12 = 0;
      VAR_12 < VAR_9 && VAR_11[VAR_12] != 0;
      ++VAR_12)
                                           ;

   if (VAR_12 > 79 || VAR_12 < 1)
      VAR_10 = "bad keyword";





   else if (VAR_12 + 3 > VAR_9)
      VAR_10 = "truncated";

   else if (VAR_11[VAR_12+1] != VAR_1)
      VAR_10 = "unknown compression type";

   else
   {
      png_alloc_size_t VAR_13 = VAR_4;





      if (FUNC_5(VAR_7, VAR_9, VAR_12+2,
          &VAR_13, 1 ) == VAR_6)
      {
         png_text VAR_14;

         if (VAR_7->read_buffer == ((void*)0))
           VAR_10="Read failure in png_handle_zTXt";
         else
         {




            VAR_11 = VAR_7->read_buffer;
            VAR_11[VAR_13+(VAR_12+2)] = 0;

            VAR_14.compression = VAR_5;
            VAR_14.key = (png_charp)VAR_11;
            VAR_14.text = (png_charp)(VAR_11 + VAR_12+2);
            VAR_14.text_length = VAR_13;
            VAR_14.itxt_length = 0;
            VAR_14.lang = ((void*)0);
            VAR_14.lang_key = ((void*)0);

            if (FUNC_7(VAR_7, VAR_8, &VAR_14, 1) != 0)
               VAR_10 = "insufficient memory";
         }
      }

      else
         VAR_10 = VAR_7->zstream.msg;
   }

   if (VAR_10 != ((void*)0))
      FUNC_0(VAR_7, VAR_10);
}
