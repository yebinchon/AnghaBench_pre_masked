
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_byte ;
struct TYPE_4__ {int row_number; int num_rows; scalar_t__ interlaced; int transformations; int pass; int usr_width; int const width; int const height; int usr_channels; int usr_bit_depth; int * prev_row; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int const) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_3 (int,char*) ;

void
FUNC_4(png_structrp VAR_2)
{
   FUNC_3(1, "in png_write_finish_row");


   VAR_2->row_number++;


   if (VAR_2->row_number < VAR_2->num_rows)
      return;
   FUNC_2(VAR_2, ((void*)0), 0, VAR_1);
}
