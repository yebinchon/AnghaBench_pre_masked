
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uInt ;
typedef TYPE_1__* png_structp ;
typedef scalar_t__ png_size_t ;
struct TYPE_8__ {scalar_t__ avail_out; char* msg; int data_type; int next_out; } ;
struct TYPE_7__ {int row_number; int num_rows; int transformations; int pass; int usr_width; int width; int height; int usr_channels; int usr_bit_depth; scalar_t__ zbuf_size; TYPE_5__ zstream; int zbuf; int * prev_row; scalar_t__ interlaced; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__) ;

void
FUNC_7(png_structp VAR_5)
{
   int VAR_6;

   FUNC_3(1, "in png_write_finish_row\n");

   VAR_5->row_number++;


   if (VAR_5->row_number < VAR_5->num_rows)
      return;
   do
   {

      VAR_6 = FUNC_1(&VAR_5->zstream, VAR_2);

      if (VAR_6 == VAR_3)
      {

         if (!(VAR_5->zstream.avail_out))
         {
            FUNC_6(VAR_5, VAR_5->zbuf, VAR_5->zbuf_size);
            VAR_5->zstream.next_out = VAR_5->zbuf;
            VAR_5->zstream.avail_out = (uInt)VAR_5->zbuf_size;
         }
      }
      else if (VAR_6 != VAR_4)
      {
         if (VAR_5->zstream.msg != ((void*)0))
            FUNC_4(VAR_5, VAR_5->zstream.msg);
         else
            FUNC_4(VAR_5, "zlib error");
      }
   } while (VAR_6 != VAR_4);


   if (VAR_5->zstream.avail_out < VAR_5->zbuf_size)
   {
      FUNC_6(VAR_5, VAR_5->zbuf, VAR_5->zbuf_size -
         VAR_5->zstream.avail_out);
   }

   FUNC_2(&VAR_5->zstream);
   VAR_5->zstream.data_type = VAR_1;
}
