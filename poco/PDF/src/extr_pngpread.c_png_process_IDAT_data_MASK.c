
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uInt ;
typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
typedef int png_bytep ;
struct TYPE_8__ {int next_out; void* avail_out; void* avail_in; int next_in; } ;
struct TYPE_7__ {int flags; int pass; scalar_t__ row_number; scalar_t__ num_rows; int row_buf; TYPE_6__ zstream; scalar_t__ irowbytes; scalar_t__ interlaced; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

void
FUNC_4(png_structp VAR_6, png_bytep VAR_7,
   png_size_t VAR_8)
{
   int VAR_9;

   if ((VAR_6->flags & VAR_1) && VAR_8)
      FUNC_1(VAR_6, "Extra compression data");

   VAR_6->zstream.next_in = VAR_7;
   VAR_6->zstream.avail_in = (uInt)VAR_8;
   for(;;)
   {
      VAR_9 = FUNC_0(&VAR_6->zstream, VAR_4);
      if (VAR_9 != VAR_3)
      {
         if (VAR_9 == VAR_5)
         {
            if (VAR_6->zstream.avail_in)
               FUNC_1(VAR_6, "Extra compressed data");
            if (!(VAR_6->zstream.avail_out))
            {
               FUNC_2(VAR_6);
            }

            VAR_6->mode |= VAR_0;
            VAR_6->flags |= VAR_1;
            break;
         }
         else if (VAR_9 == VAR_2)
            break;
         else
            FUNC_1(VAR_6, "Decompression Error");
      }
      if (!(VAR_6->zstream.avail_out))
      {
         if (




             VAR_6->row_number == VAR_6->num_rows)
         {
           if (VAR_6->zstream.avail_in)
             FUNC_3(VAR_6, "Too much data in IDAT chunks");
           VAR_6->flags |= VAR_1;
           break;
         }
         FUNC_2(VAR_6);
         VAR_6->zstream.avail_out = (uInt)VAR_6->irowbytes;
         VAR_6->zstream.next_out = VAR_6->row_buf;
      }
      else
         break;
   }
}
