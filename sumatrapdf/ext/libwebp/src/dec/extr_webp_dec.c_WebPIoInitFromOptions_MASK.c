
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ use_cropping; int crop_width; int crop_height; int crop_left; int crop_top; scalar_t__ use_scaling; int scaled_width; int scaled_height; int no_fancy_upsampling; scalar_t__ bypass_filtering; } ;
typedef TYPE_1__ WebPDecoderOptions ;
typedef int WEBP_CSP_MODE ;
struct TYPE_6__ {int width; int height; int use_cropping; int crop_left; int crop_top; int crop_right; int crop_bottom; int mb_w; int mb_h; int use_scaling; int scaled_width; int scaled_height; int bypass_filtering; int fancy_upsampling; } ;
typedef TYPE_2__ VP8Io ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int*,int*) ;

int FUNC_2(const WebPDecoderOptions* const VAR_0,
                          VP8Io* const VAR_1, WEBP_CSP_MODE VAR_2) {
  const int VAR_3 = VAR_1->width;
  const int VAR_4 = VAR_1->height;
  int VAR_5 = 0, VAR_6 = 0, VAR_7 = VAR_3, VAR_8 = VAR_4;


  VAR_1->use_cropping = (VAR_0 != ((void*)0)) && (VAR_0->use_cropping > 0);
  if (VAR_1->use_cropping) {
    VAR_7 = VAR_0->crop_width;
    VAR_8 = VAR_0->crop_height;
    VAR_5 = VAR_0->crop_left;
    VAR_6 = VAR_0->crop_top;
    if (!FUNC_0(VAR_2)) {
      VAR_5 &= ~1;
      VAR_6 &= ~1;
    }
    if (VAR_5 < 0 || VAR_6 < 0 || VAR_7 <= 0 || VAR_8 <= 0 || VAR_5 + VAR_7 > VAR_3 || VAR_6 + VAR_8 > VAR_4) {
      return 0;
    }
  }
  VAR_1->crop_left = VAR_5;
  VAR_1->crop_top = VAR_6;
  VAR_1->crop_right = VAR_5 + VAR_7;
  VAR_1->crop_bottom = VAR_6 + VAR_8;
  VAR_1->mb_w = VAR_7;
  VAR_1->mb_h = VAR_8;


  VAR_1->use_scaling = (VAR_0 != ((void*)0)) && (VAR_0->use_scaling > 0);
  if (VAR_1->use_scaling) {
    int VAR_9 = VAR_0->scaled_width;
    int VAR_10 = VAR_0->scaled_height;
    if (!FUNC_1(VAR_7, VAR_8, &VAR_9, &VAR_10)) {
      return 0;
    }
    VAR_1->scaled_width = VAR_9;
    VAR_1->scaled_height = VAR_10;
  }


  VAR_1->bypass_filtering = (VAR_0 != ((void*)0)) && VAR_0->bypass_filtering;






  if (VAR_1->use_scaling) {

    VAR_1->bypass_filtering = (VAR_1->scaled_width < VAR_3 * 3 / 4) &&
                           (VAR_1->scaled_height < VAR_4 * 3 / 4);
    VAR_1->fancy_upsampling = 0;
  }
  return 1;
}
