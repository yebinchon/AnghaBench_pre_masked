
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef size_t png_size_t ;
typedef TYPE_2__* png_infop ;
typedef int* png_charp ;
typedef int* png_bytep ;
typedef int png_byte ;
struct TYPE_15__ {int valid; } ;
struct TYPE_14__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int*,size_t) ;
 int FUNC_2 (int,char*) ;
 int* FUNC_3 (TYPE_1__*,int,int*,size_t,size_t,size_t*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int*,int,int*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,char*) ;

void
FUNC_9(png_structp VAR_4, png_infop VAR_5, png_uint_32 VAR_6)

{
   png_charp VAR_7;
   png_byte VAR_8;
   png_bytep VAR_9;
   png_charp VAR_10;
   png_uint_32 VAR_11 = 0;
   png_uint_32 VAR_12, VAR_13;
   png_size_t VAR_14, VAR_15, VAR_16;

   FUNC_2(1, "in png_handle_iCCP\n");

   if (!(VAR_4->mode & VAR_1))
      FUNC_4(VAR_4, "Missing IHDR before iCCP");
   else if (VAR_4->mode & VAR_0)
   {
      FUNC_8(VAR_4, "Invalid iCCP after IDAT");
      FUNC_0(VAR_4, VAR_6);
      return;
   }
   else if (VAR_4->mode & VAR_2)

      FUNC_8(VAR_4, "Out of place iCCP chunk");

   if (VAR_5 != ((void*)0) && (VAR_5->valid & VAR_3))
   {
      FUNC_8(VAR_4, "Duplicate iCCP chunk");
      FUNC_0(VAR_4, VAR_6);
      return;
   }
   VAR_7 = (png_charp)FUNC_6(VAR_4, VAR_6 + 1);
   VAR_14 = (png_size_t)VAR_6;
   FUNC_1(VAR_4, (png_bytep)VAR_7, VAR_14);

   if (FUNC_0(VAR_4, VAR_11))
   {
      FUNC_5(VAR_4, VAR_7);
      return;
   }

   VAR_7[VAR_14] = 0x00;

   for (VAR_10 = VAR_7; *VAR_10; VAR_10++)
                                           ;

   ++VAR_10;



   if ( VAR_10 >= VAR_7 + VAR_14 - 1)
   {
      FUNC_5(VAR_4, VAR_7);
      FUNC_8(VAR_4, "Malformed iCCP chunk");
      return;
   }


   VAR_8 = *VAR_10++;
   if (VAR_8)
   {
      FUNC_8(VAR_4, "Ignoring nonzero compression type in iCCP chunk");
      VAR_8=0x00;

   }

   VAR_15 = VAR_10 - VAR_7;
   VAR_7 = FUNC_3(VAR_4, VAR_8, VAR_7,
                                    VAR_14, VAR_15, &VAR_16);

   VAR_13 = VAR_16 - VAR_15;

   if ( VAR_15 > VAR_16 || VAR_13 < 4)
   {
      FUNC_5(VAR_4, VAR_7);
      FUNC_8(VAR_4, "Profile size field missing from iCCP chunk");
      return;
   }


   VAR_9 = (png_bytep)(VAR_7+VAR_15);
   VAR_12 = ((*(VAR_9 ))<<24) |
                  ((*(VAR_9+1))<<16) |
                  ((*(VAR_9+2))<< 8) |
                  ((*(VAR_9+3)) );

   if(VAR_12 < VAR_13)
      VAR_13 = VAR_12;

   if(VAR_12 > VAR_13)
   {
      FUNC_5(VAR_4, VAR_7);
      FUNC_8(VAR_4, "Ignoring truncated iCCP profile.");
      return;
   }

   FUNC_7(VAR_4, VAR_5, VAR_7, VAR_8,
                VAR_7 + VAR_15, VAR_13);
   FUNC_5(VAR_4, VAR_7);
}
