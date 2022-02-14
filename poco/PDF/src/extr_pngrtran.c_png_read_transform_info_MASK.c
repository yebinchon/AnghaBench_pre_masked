
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef TYPE_2__* png_infop ;
typedef scalar_t__ png_byte ;
struct TYPE_6__ {int color_type; int bit_depth; int channels; int width; scalar_t__ pixel_depth; int rowbytes; int int_gamma; int gamma; int background; scalar_t__ num_trans; } ;
struct TYPE_5__ {int transformations; int flags; int user_transform_depth; int user_transform_channels; scalar_t__ palette_lookup; int int_gamma; int gamma; int background; scalar_t__ num_trans; } ;


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
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_18 ;
 int FUNC_1 (int,char*) ;

void
FUNC_2(png_structp VAR_19, png_infop VAR_20)
{
   FUNC_1(1, "in png_read_transform_info\n");
   if (VAR_20->color_type == VAR_6)
      VAR_20->channels = 1;
   else if (VAR_20->color_type & VAR_4)
      VAR_20->channels = 3;
   else
      VAR_20->channels = 1;






   if (VAR_20->color_type & VAR_3)
      VAR_20->channels++;
   VAR_20->pixel_depth = (png_byte)(VAR_20->channels *
      VAR_20->bit_depth);

   VAR_20->rowbytes = FUNC_0(VAR_20->pixel_depth,VAR_20->width);


   if(VAR_19)
      return;

}
