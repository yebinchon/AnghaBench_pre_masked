
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
struct TYPE_11__ {int width; int pixel_depth; int rowbytes; int bit_depth; int channels; int color_type; } ;
struct TYPE_10__ {int transformations; int flags; int pass; int height; scalar_t__* row_buf; scalar_t__ interlaced; scalar_t__ rowbytes; scalar_t__ prev_row; TYPE_4__ row_info; int pixel_depth; int bit_depth; int channels; int iwidth; int color_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_4__*,scalar_t__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(png_structp VAR_3)
{
   VAR_3->row_info.color_type = VAR_3->color_type;
   VAR_3->row_info.width = VAR_3->iwidth;
   VAR_3->row_info.channels = VAR_3->channels;
   VAR_3->row_info.bit_depth = VAR_3->bit_depth;
   VAR_3->row_info.pixel_depth = VAR_3->pixel_depth;

   VAR_3->row_info.rowbytes = FUNC_0(VAR_3->row_info.pixel_depth,
       VAR_3->row_info.width);

   FUNC_5(VAR_3, &(VAR_3->row_info),
      VAR_3->row_buf + 1, VAR_3->prev_row + 1,
      (int)(VAR_3->row_buf[0]));

   FUNC_3(VAR_3, VAR_3->prev_row, VAR_3->row_buf,
      VAR_3->rowbytes + 1);

   if (VAR_3->transformations || (VAR_3->flags&VAR_0))
      FUNC_2(VAR_3);
   {
      FUNC_4(VAR_3, VAR_3->row_buf + 1);
      FUNC_6(VAR_3);
   }
}
