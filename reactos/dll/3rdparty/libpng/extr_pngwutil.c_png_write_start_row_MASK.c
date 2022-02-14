
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_byte ;
typedef scalar_t__ png_alloc_size_t ;
struct TYPE_5__ {int usr_channels; int usr_bit_depth; int width; int maximum_pixel_depth; int do_filter; int height; scalar_t__ interlaced; int transformations; int num_rows; int usr_width; void* prev_row; void* tst_row; int * try_row; int * row_buf; int pixel_depth; int transformed_pixel_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 void* FUNC_4 (int ,int ) ;

void
FUNC_5(png_structrp VAR_8)
{
   png_alloc_size_t VAR_9;
   int VAR_10;





   FUNC_2(1, "in png_write_start_row");

   VAR_10 = VAR_8->usr_channels * VAR_8->usr_bit_depth;
   VAR_9 = FUNC_0(VAR_10, VAR_8->width) + 1;


   VAR_8->transformed_pixel_depth = VAR_8->pixel_depth;
   VAR_8->maximum_pixel_depth = (png_byte)VAR_10;


   VAR_8->row_buf = FUNC_4(VAR_7, FUNC_3(VAR_8, VAR_9));

   VAR_8->row_buf[0] = VAR_5;
   {
      VAR_8->num_rows = VAR_8->height;
      VAR_8->usr_width = VAR_8->width;
   }
}
