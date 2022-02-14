
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef unsigned int png_uint_32 ;
struct TYPE_12__ {int text_length; scalar_t__* text; scalar_t__ itxt_length; int * lang_key; int * lang; scalar_t__* key; int compression; } ;
typedef TYPE_1__ png_text ;
typedef TYPE_2__* png_structrp ;
typedef int png_inforp ;
typedef scalar_t__* png_charp ;
typedef int * png_bytep ;
struct TYPE_13__ {int user_chunk_cache_max; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,int *,unsigned int) ;
 int FUNC_4 (int,char*) ;
 int * FUNC_5 (TYPE_2__*,unsigned int,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (scalar_t__*) ;

void
FUNC_9(png_structrp VAR_4, png_inforp VAR_5, png_uint_32 VAR_6)
{
   png_text VAR_7;
   png_bytep VAR_8;
   png_charp VAR_9;
   png_charp VAR_10;
   png_uint_32 VAR_11 = 0;

   FUNC_4(1, "in png_handle_tEXt");
   if ((VAR_4->mode & VAR_2) == 0)
      FUNC_1(VAR_4, "missing IHDR");

   if ((VAR_4->mode & VAR_1) != 0)
      VAR_4->mode |= VAR_0;
   VAR_8 = FUNC_5(VAR_4, VAR_6+1, 1 );

   if (VAR_8 == ((void*)0))
   {
      FUNC_0(VAR_4, "out of memory");
      return;
   }

   FUNC_3(VAR_4, VAR_8, VAR_6);

   if (FUNC_2(VAR_4, VAR_11) != 0)
      return;

   VAR_9 = (png_charp)VAR_8;
   VAR_9[VAR_6] = 0;

   for (VAR_10 = VAR_9; *VAR_10; VAR_10++)
                                          ;

   if (VAR_10 != VAR_9 + VAR_6)
      VAR_10++;

   VAR_7.compression = VAR_3;
   VAR_7.key = VAR_9;
   VAR_7.lang = ((void*)0);
   VAR_7.lang_key = ((void*)0);
   VAR_7.itxt_length = 0;
   VAR_7.text = VAR_10;
   VAR_7.text_length = FUNC_8(VAR_10);

   if (FUNC_6(VAR_4, VAR_5, &VAR_7, 1) != 0)
      FUNC_7(VAR_4, "Insufficient memory to process text chunk");
}
