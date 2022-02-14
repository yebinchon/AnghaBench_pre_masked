
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_13__ {int width; int crop_bottom; int const crop_top; int crop_left; int crop_right; } ;
typedef TYPE_1__ VP8Io ;
struct TYPE_14__ {scalar_t__ alpha_dithering_; int const* alpha_plane_; TYPE_8__* alph_dec_; scalar_t__ is_alpha_decoded_; int alpha_data_size_; int alpha_data_; } ;
typedef TYPE_2__ VP8Decoder ;
struct TYPE_15__ {scalar_t__ pre_processing_; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__* const,int,int) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,int ,int ,TYPE_1__ const* const,int const*) ;
 TYPE_8__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__* const,TYPE_1__ const* const) ;
 int FUNC_5 (TYPE_2__* const) ;
 int FUNC_6 (int const* const,int,int,int const,scalar_t__) ;
 int FUNC_7 (int) ;

const uint8_t* FUNC_8(VP8Decoder* const VAR_1,
                                      const VP8Io* const VAR_2,
                                      int VAR_3, int VAR_4) {
  const int VAR_5 = VAR_2->width;
  const int VAR_6 = VAR_2->crop_bottom;

  FUNC_7(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

  if (VAR_3 < 0 || VAR_4 <= 0 || VAR_3 + VAR_4 > VAR_6) {
    return ((void*)0);
  }

  if (!VAR_1->is_alpha_decoded_) {
    if (VAR_1->alph_dec_ == ((void*)0)) {
      VAR_1->alph_dec_ = FUNC_3();
      if (VAR_1->alph_dec_ == ((void*)0)) return ((void*)0);
      if (!FUNC_4(VAR_1, VAR_2)) goto Error;
      if (!FUNC_2(VAR_1->alph_dec_, VAR_1->alpha_data_, VAR_1->alpha_data_size_,
                    VAR_2, VAR_1->alpha_plane_)) {
        goto Error;
      }

      if (VAR_1->alph_dec_->pre_processing_ != VAR_0) {
        VAR_1->alpha_dithering_ = 0;
      } else {
        VAR_4 = VAR_6 - VAR_3;
      }
    }

    FUNC_7(VAR_1->alph_dec_ != ((void*)0));
    FUNC_7(VAR_3 + VAR_4 <= VAR_6);
    if (!FUNC_0(VAR_1, VAR_3, VAR_4)) goto Error;

    if (VAR_1->is_alpha_decoded_) {
      FUNC_1(VAR_1->alph_dec_);
      VAR_1->alph_dec_ = ((void*)0);
      if (VAR_1->alpha_dithering_ > 0) {
        uint8_t* const VAR_7 = VAR_1->alpha_plane_ + VAR_2->crop_top * VAR_5
                             + VAR_2->crop_left;
        if (!FUNC_6(VAR_7,
                                  VAR_2->crop_right - VAR_2->crop_left,
                                  VAR_2->crop_bottom - VAR_2->crop_top,
                                  VAR_5, VAR_1->alpha_dithering_)) {
          goto Error;
        }
      }
    }
  }


  return VAR_1->alpha_plane_ + VAR_3 * VAR_5;

 Error:
  FUNC_5(VAR_1);
  return ((void*)0);
}
