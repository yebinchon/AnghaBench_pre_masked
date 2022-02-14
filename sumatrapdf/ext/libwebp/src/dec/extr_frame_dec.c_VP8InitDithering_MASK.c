
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dithering_strength; int alpha_dithering_strength; } ;
typedef TYPE_1__ WebPDecoderOptions ;
struct TYPE_7__ {scalar_t__ uv_quant_; int dither_; } ;
typedef TYPE_2__ VP8QuantMatrix ;
struct TYPE_8__ {int dither_; int alpha_dithering_; int dithering_rg_; TYPE_2__* dqm_; } ;
typedef TYPE_3__ VP8Decoder ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,float) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int const* VAR_3 ;

void FUNC_2(const WebPDecoderOptions* const VAR_4,
                      VP8Decoder* const VAR_5) {
  FUNC_1(VAR_5 != ((void*)0));
  if (VAR_4 != ((void*)0)) {
    const int VAR_6 = VAR_4->dithering_strength;
    const int VAR_7 = (1 << VAR_2) - 1;
    const int VAR_8 = (VAR_6 < 0) ? 0 : (VAR_6 > 100) ? VAR_7 : (VAR_6 * VAR_7 / 100);
    if (VAR_8 > 0) {
      int VAR_9;
      int VAR_10 = 0;
      for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
        VP8QuantMatrix* const VAR_11 = &VAR_5->dqm_[VAR_9];
        if (VAR_11->uv_quant_ < VAR_0) {
          const int VAR_12 = (VAR_11->uv_quant_ < 0) ? 0 : VAR_11->uv_quant_;
          VAR_11->dither_ = (VAR_8 * VAR_3[VAR_12]) >> 3;
        }
        VAR_10 |= VAR_11->dither_;
      }
      if (VAR_10 != 0) {
        FUNC_0(&VAR_5->dithering_rg_, 1.0f);
        VAR_5->dither_ = 1;
      }
    }

    VAR_5->alpha_dithering_ = VAR_4->alpha_dithering_strength;
    if (VAR_5->alpha_dithering_ > 100) {
      VAR_5->alpha_dithering_ = 100;
    } else if (VAR_5->alpha_dithering_ < 0) {
      VAR_5->alpha_dithering_ = 0;
    }
  }
}
