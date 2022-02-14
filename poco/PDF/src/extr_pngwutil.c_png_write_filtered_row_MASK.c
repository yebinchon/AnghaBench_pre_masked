
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uInt ;
typedef TYPE_2__* png_structp ;
typedef int * png_bytep ;
struct TYPE_11__ {char* msg; void* avail_out; int next_out; void* avail_in; int * next_in; } ;
struct TYPE_9__ {scalar_t__ rowbytes; } ;
struct TYPE_10__ {scalar_t__ flush_rows; scalar_t__ flush_dist; int * row_buf; int * prev_row; scalar_t__ zbuf_size; TYPE_8__ zstream; int zbuf; TYPE_1__ row_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(png_structp VAR_2, png_bytep VAR_3)
{
   FUNC_1(1, "in png_write_filtered_row\n");
   FUNC_2(2, "filter = %d\n", VAR_3[0]);


   VAR_2->zstream.next_in = VAR_3;
   VAR_2->zstream.avail_in = (uInt)VAR_2->row_info.rowbytes + 1;

   do
   {
      int VAR_4;


      VAR_4 = FUNC_0(&VAR_2->zstream, VAR_0);

      if (VAR_4 != VAR_1)
      {
         if (VAR_2->zstream.msg != ((void*)0))
            FUNC_3(VAR_2, VAR_2->zstream.msg);
         else
            FUNC_3(VAR_2, "zlib error");
      }


      if (!(VAR_2->zstream.avail_out))
      {

         FUNC_4(VAR_2, VAR_2->zbuf, VAR_2->zbuf_size);
         VAR_2->zstream.next_out = VAR_2->zbuf;
         VAR_2->zstream.avail_out = (uInt)VAR_2->zbuf_size;
      }

   } while (VAR_2->zstream.avail_in);


   if (VAR_2->prev_row != ((void*)0))
   {
      png_bytep VAR_5;

      VAR_5 = VAR_2->prev_row;
      VAR_2->prev_row = VAR_2->row_buf;
      VAR_2->row_buf = VAR_5;
   }


   FUNC_5(VAR_2);
}
