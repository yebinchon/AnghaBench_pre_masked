
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uInt ;
typedef TYPE_2__* png_structrp ;
typedef int * png_bytep ;
typedef int png_byte ;
typedef scalar_t__ png_alloc_size_t ;
struct TYPE_13__ {int avail_out; scalar_t__ avail_in; char* msg; int * next_out; int * next_in; } ;
struct TYPE_14__ {scalar_t__ idat_size; scalar_t__ chunk_name; scalar_t__ IDAT_read_size; TYPE_1__ zstream; int flags; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int * FUNC_6 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;

void
FUNC_9(png_structrp VAR_8, png_bytep VAR_9,
    png_alloc_size_t VAR_10)
{

   VAR_8->zstream.next_out = VAR_9;
   VAR_8->zstream.avail_out = 0;

   if (VAR_9 == ((void*)0))
      VAR_10 = 0;

   do
   {
      int VAR_11;
      png_byte VAR_12[VAR_2];

      if (VAR_8->zstream.avail_in == 0)
      {
         uInt VAR_13;
         png_bytep VAR_14;

         while (VAR_8->idat_size == 0)
         {
            FUNC_3(VAR_8, 0);

            VAR_8->idat_size = FUNC_7(VAR_8);



            if (VAR_8->chunk_name != VAR_7)
               FUNC_5(VAR_8, "Not enough image data");
         }

         VAR_13 = VAR_8->IDAT_read_size;

         if (VAR_13 > VAR_8->idat_size)
            VAR_13 = (uInt)VAR_8->idat_size;






         VAR_14 = FUNC_6(VAR_8, VAR_13, 0 );

         FUNC_4(VAR_8, VAR_14, VAR_13);
         VAR_8->idat_size -= VAR_13;

         VAR_8->zstream.next_in = VAR_14;
         VAR_8->zstream.avail_in = VAR_13;
      }


      if (VAR_9 != ((void*)0))
      {
         uInt VAR_15 = VAR_3;

         if (VAR_15 > VAR_10)
            VAR_15 = (uInt)VAR_10;

         VAR_10 -= VAR_15;
         VAR_8->zstream.avail_out = VAR_15;
      }

      else
      {
         VAR_8->zstream.next_out = VAR_12;
         VAR_8->zstream.avail_out = (sizeof VAR_12);
      }
      VAR_11 = FUNC_0(VAR_8, VAR_4);


      if (VAR_9 != ((void*)0))
         VAR_10 += VAR_8->zstream.avail_out;

      else
         VAR_10 += (sizeof VAR_12) - VAR_8->zstream.avail_out;

      VAR_8->zstream.avail_out = 0;

      if (VAR_11 == VAR_6)
      {

         VAR_8->zstream.next_out = ((void*)0);

         VAR_8->mode |= VAR_0;
         VAR_8->flags |= VAR_1;

         if (VAR_8->zstream.avail_in > 0 || VAR_8->idat_size > 0)
            FUNC_1(VAR_8, "Extra compressed data");
         break;
      }

      if (VAR_11 != VAR_5)
      {
         FUNC_8(VAR_8, VAR_11);

         if (VAR_9 != ((void*)0))
            FUNC_2(VAR_8, VAR_8->zstream.msg);

         else
         {
            FUNC_1(VAR_8, VAR_8->zstream.msg);
            return;
         }
      }
   } while (VAR_10 > 0);

   if (VAR_10 > 0)
   {



      if (VAR_9 != ((void*)0))
         FUNC_5(VAR_8, "Not enough image data");

      else
         FUNC_1(VAR_8, "Too much image data");
   }
}
