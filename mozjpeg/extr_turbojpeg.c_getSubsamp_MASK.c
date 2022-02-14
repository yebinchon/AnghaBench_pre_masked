
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* j_decompress_ptr ;
struct TYPE_5__ {int num_components; scalar_t__ jpeg_color_space; TYPE_1__* comp_info; } ;
struct TYPE_4__ {int h_samp_factor; int v_samp_factor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;

__attribute__((used)) static int FUNC_0(j_decompress_ptr VAR_10)
{
 int VAR_11=-1, VAR_12, VAR_13;





 if(VAR_10->num_components==1 && VAR_10->jpeg_color_space==VAR_1)
  return VAR_6;

  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
    if (VAR_10->num_components == VAR_7[VAR_12] ||
        ((VAR_10->jpeg_color_space == VAR_2 ||
          VAR_10->jpeg_color_space == VAR_0) &&
         VAR_7[VAR_12] == 3 && VAR_10->num_components == 4)) {
      if (VAR_10->comp_info[0].h_samp_factor == VAR_9[VAR_12] / 8 &&
          VAR_10->comp_info[0].v_samp_factor == VAR_8[VAR_12] / 8) {
    int VAR_14=0;

        for (VAR_13 = 1; VAR_13 < VAR_10->num_components; VAR_13++) {
     int VAR_15=1, VAR_16=1;

          if ((VAR_10->jpeg_color_space == VAR_2 ||
               VAR_10->jpeg_color_space == VAR_0) && VAR_13 == 3) {
      VAR_15=VAR_9[VAR_12]/8; VAR_16=VAR_8[VAR_12]/8;
     }
          if (VAR_10->comp_info[VAR_13].h_samp_factor == VAR_15 &&
              VAR_10->comp_info[VAR_13].v_samp_factor == VAR_16)
      VAR_14++;
    }
        if (VAR_14 == VAR_10->num_components - 1) {
     VAR_11=VAR_12; break;
    }
   }


   if(VAR_10->comp_info[0].h_samp_factor==2 &&
    VAR_10->comp_info[0].v_samp_factor==2 &&
          (VAR_12 == VAR_4 || VAR_12 == VAR_5)) {
    int VAR_17=0;

        for (VAR_13 = 1; VAR_13 < VAR_10->num_components; VAR_13++) {
     int VAR_18=VAR_8[VAR_12]/8, VAR_19=VAR_9[VAR_12]/8;

          if ((VAR_10->jpeg_color_space == VAR_2 ||
               VAR_10->jpeg_color_space == VAR_0) && VAR_13 == 3) {
      VAR_18=VAR_19=2;
     }
          if (VAR_10->comp_info[VAR_13].h_samp_factor == VAR_18 &&
              VAR_10->comp_info[VAR_13].v_samp_factor == VAR_19)
      VAR_17++;
    }
        if (VAR_17 == VAR_10->num_components - 1) {
     VAR_11=VAR_12; break;
    }
   }
  }
 }
 return VAR_11;
}
