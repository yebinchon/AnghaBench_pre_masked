
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structp ;
typedef int png_row_infop ;
typedef scalar_t__ png_byte ;
struct TYPE_26__ {int color_type; scalar_t__ rowbytes; int bit_depth; int channels; int width; scalar_t__ pixel_depth; } ;
struct TYPE_25__ {int flags; int transformations; scalar_t__ num_trans; int rgb_to_gray_status; int mode; int color_type; int user_transform_depth; int user_transform_channels; TYPE_3__ row_info; int * row_buf; int (* read_user_transform_fn ) (TYPE_1__*,TYPE_3__*,int *) ;scalar_t__ filler; int shift; int dither_index; int palette_lookup; int gamma_shift; int gamma_16_table; int gamma_table; int gamma_16_to_1; int gamma_16_from_1; int gamma_to_1; int gamma_from_1; int background_1; int background; int trans_values; int trans; int palette; int pass; int row_number; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_3__*,int *,int *,int *,int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int *,int *) ;
 int FUNC_7 (TYPE_3__*,int *,int ,int ,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int *,int ,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int *) ;
 int FUNC_12 (TYPE_3__*,int *,scalar_t__,int) ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_16 (TYPE_3__*,int *,int) ;
 int FUNC_17 (TYPE_3__*,int *) ;
 int FUNC_18 (TYPE_3__*,int *) ;
 int FUNC_19 (TYPE_3__*,int *,int *) ;
 int FUNC_20 (TYPE_1__*,char*) ;
 int FUNC_21 (char*,int,char*,int ,int ) ;
 int FUNC_22 (TYPE_1__*,char*) ;
 int FUNC_23 (TYPE_1__*,TYPE_3__*,int *) ;

void
FUNC_24(png_structp VAR_26)
{
   FUNC_1(1, "in png_do_read_transformations\n");
   if (VAR_26->row_buf == ((void*)0))
   {

      char VAR_27[50];

      FUNC_21(VAR_27, 50,
         "NULL row buffer for row %ld, pass %d", VAR_26->row_number,
         VAR_26->pass);
      FUNC_20(VAR_26, VAR_27);



   }
}
