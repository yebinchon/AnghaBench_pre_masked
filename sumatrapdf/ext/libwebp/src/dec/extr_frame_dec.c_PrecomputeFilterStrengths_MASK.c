
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int level_; int sharpness_; scalar_t__* mode_lf_delta_; scalar_t__* ref_lf_delta_; scalar_t__ use_lf_delta_; } ;
typedef TYPE_2__ VP8FilterHeader ;
struct TYPE_8__ {int f_ilevel_; int f_limit_; int hev_thresh_; int f_inner_; } ;
typedef TYPE_3__ VP8FInfo ;
struct TYPE_6__ {int* filter_strength_; int absolute_delta_; scalar_t__ use_segment_; } ;
struct TYPE_9__ {scalar_t__ filter_type_; TYPE_3__** fstrengths_; TYPE_1__ segment_hdr_; TYPE_2__ filter_hdr_; } ;
typedef TYPE_4__ VP8Decoder ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(VP8Decoder* const VAR_1) {
  if (VAR_1->filter_type_ > 0) {
    int VAR_2;
    const VP8FilterHeader* const VAR_3 = &VAR_1->filter_hdr_;
    for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
      int VAR_4;

      int VAR_5;
      if (VAR_1->segment_hdr_.use_segment_) {
        VAR_5 = VAR_1->segment_hdr_.filter_strength_[VAR_2];
        if (!VAR_1->segment_hdr_.absolute_delta_) {
          VAR_5 += VAR_3->level_;
        }
      } else {
        VAR_5 = VAR_3->level_;
      }
      for (VAR_4 = 0; VAR_4 <= 1; ++VAR_4) {
        VP8FInfo* const VAR_6 = &VAR_1->fstrengths_[VAR_2][VAR_4];
        int VAR_7 = VAR_5;
        if (VAR_3->use_lf_delta_) {
          VAR_7 += VAR_3->ref_lf_delta_[0];
          if (VAR_4) {
            VAR_7 += VAR_3->mode_lf_delta_[0];
          }
        }
        VAR_7 = (VAR_7 < 0) ? 0 : (VAR_7 > 63) ? 63 : VAR_7;
        if (VAR_7 > 0) {
          int VAR_8 = VAR_7;
          if (VAR_3->sharpness_ > 0) {
            if (VAR_3->sharpness_ > 4) {
              VAR_8 >>= 2;
            } else {
              VAR_8 >>= 1;
            }
            if (VAR_8 > 9 - VAR_3->sharpness_) {
              VAR_8 = 9 - VAR_3->sharpness_;
            }
          }
          if (VAR_8 < 1) VAR_8 = 1;
          VAR_6->f_ilevel_ = VAR_8;
          VAR_6->f_limit_ = 2 * VAR_7 + VAR_8;
          VAR_6->hev_thresh_ = (VAR_7 >= 40) ? 2 : (VAR_7 >= 15) ? 1 : 0;
        } else {
          VAR_6->f_limit_ = 0;
        }
        VAR_6->f_inner_ = VAR_4;
      }
    }
  }
}
