
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uInt ;
typedef scalar_t__ png_uint_32 ;
typedef TYPE_2__* png_structp ;
typedef scalar_t__ png_size_t ;
typedef void* png_bytep ;
struct TYPE_5__ {int next_out; scalar_t__ avail_out; } ;
struct TYPE_6__ {int usr_channels; int usr_bit_depth; int width; int do_filter; int transformations; int num_rows; int height; int usr_width; int zbuf; TYPE_1__ zstream; scalar_t__ zbuf_size; scalar_t__ interlaced; int * paeth_row; scalar_t__ rowbytes; int * avg_row; int * up_row; void* prev_row; int * sub_row; int * row_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (void*,int ,scalar_t__) ;

void
FUNC_4(png_structp VAR_10)
{
   png_size_t VAR_11;

   FUNC_1(1, "in png_write_start_row\n");
   VAR_11 = (png_size_t)(FUNC_0(
      VAR_10->usr_channels*VAR_10->usr_bit_depth,VAR_10->width)+1);


   VAR_10->row_buf = (png_bytep)FUNC_2(VAR_10, (png_uint_32)VAR_11);
   VAR_10->row_buf[0] = VAR_5;



   if (VAR_10->do_filter & VAR_2)
   {
      VAR_10->sub_row = (png_bytep)FUNC_2(VAR_10,
         (VAR_10->rowbytes + 1));
      VAR_10->sub_row[0] = VAR_7;
   }


   if (VAR_10->do_filter & (VAR_0 | VAR_3 | VAR_1))
   {

      VAR_10->prev_row = (png_bytep)FUNC_2(VAR_10, (png_uint_32)VAR_11);
      FUNC_3(VAR_10->prev_row, 0, VAR_11);

      if (VAR_10->do_filter & VAR_3)
      {
         VAR_10->up_row = (png_bytep)FUNC_2(VAR_10,
            (VAR_10->rowbytes + 1));
         VAR_10->up_row[0] = VAR_8;
      }

      if (VAR_10->do_filter & VAR_0)
      {
         VAR_10->avg_row = (png_bytep)FUNC_2(VAR_10,
            (VAR_10->rowbytes + 1));
         VAR_10->avg_row[0] = VAR_4;
      }

      if (VAR_10->do_filter & VAR_1)
      {
         VAR_10->paeth_row = (png_bytep)FUNC_2(VAR_10,
            (VAR_10->rowbytes + 1));
         VAR_10->paeth_row[0] = VAR_6;
      }

   }
   {
      VAR_10->num_rows = VAR_10->height;
      VAR_10->usr_width = VAR_10->width;
   }
   VAR_10->zstream.avail_out = (uInt)VAR_10->zbuf_size;
   VAR_10->zstream.next_out = VAR_10->zbuf;
}
