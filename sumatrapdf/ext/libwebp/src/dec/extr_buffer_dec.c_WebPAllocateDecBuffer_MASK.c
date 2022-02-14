
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int crop_width; int crop_height; int crop_left; int crop_top; int scaled_width; int scaled_height; scalar_t__ flip; scalar_t__ use_scaling; scalar_t__ use_cropping; } ;
typedef TYPE_1__ WebPDecoderOptions ;
struct TYPE_8__ {int width; int height; } ;
typedef TYPE_2__ WebPDecBuffer ;
typedef scalar_t__ VP8StatusCode ;


 scalar_t__ FUNC_0 (TYPE_2__* const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__* const) ;
 int FUNC_2 (int,int,int*,int*) ;

VP8StatusCode FUNC_3(int VAR_2, int VAR_3,
                                    const WebPDecoderOptions* const VAR_4,
                                    WebPDecBuffer* const VAR_5) {
  VP8StatusCode VAR_6;
  if (VAR_5 == ((void*)0) || VAR_2 <= 0 || VAR_3 <= 0) {
    return VAR_0;
  }
  if (VAR_4 != ((void*)0)) {
    if (VAR_4->use_cropping) {
      const int VAR_7 = VAR_4->crop_width;
      const int VAR_8 = VAR_4->crop_height;
      const int VAR_9 = VAR_4->crop_left & ~1;
      const int VAR_10 = VAR_4->crop_top & ~1;
      if (VAR_9 < 0 || VAR_10 < 0 || VAR_7 <= 0 || VAR_8 <= 0 ||
          VAR_9 + VAR_7 > VAR_2 || VAR_10 + VAR_8 > VAR_3) {
        return VAR_0;
      }
      VAR_2 = VAR_7;
      VAR_3 = VAR_8;
    }

    if (VAR_4->use_scaling) {

      int VAR_11 = VAR_4->scaled_width;
      int VAR_12 = VAR_4->scaled_height;
      if (!FUNC_2(
              VAR_2, VAR_3, &VAR_11, &VAR_12)) {
        return VAR_0;
      }
      VAR_2 = VAR_11;
      VAR_3 = VAR_12;



    }
  }
  VAR_5->width = VAR_2;
  VAR_5->height = VAR_3;


  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 != VAR_1) return VAR_6;


  if (VAR_4 != ((void*)0) && VAR_4->flip) {
    VAR_6 = FUNC_1(VAR_5);
  }
  return VAR_6;
}
