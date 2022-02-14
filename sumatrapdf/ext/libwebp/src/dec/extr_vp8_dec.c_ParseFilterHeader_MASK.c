
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ level_; void* simple_; void** mode_lf_delta_; void** ref_lf_delta_; void* use_lf_delta_; void* sharpness_; } ;
typedef TYPE_1__ VP8FilterHeader ;
struct TYPE_10__ {int filter_type_; TYPE_1__ filter_hdr_; } ;
typedef TYPE_2__ VP8Decoder ;
struct TYPE_11__ {int eof_; } ;
typedef TYPE_3__ VP8BitReader ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_3__*,char*) ;
 void* FUNC_1 (TYPE_3__*,int,char*) ;
 void* FUNC_2 (TYPE_3__*,int,char*) ;

__attribute__((used)) static int FUNC_3(VP8BitReader* VAR_2, VP8Decoder* const VAR_3) {
  VP8FilterHeader* const VAR_4 = &VAR_3->filter_hdr_;
  VAR_4->simple_ = FUNC_0(VAR_2, "global-header");
  VAR_4->level_ = FUNC_2(VAR_2, 6, "global-header");
  VAR_4->sharpness_ = FUNC_2(VAR_2, 3, "global-header");
  VAR_4->use_lf_delta_ = FUNC_0(VAR_2, "global-header");
  if (VAR_4->use_lf_delta_) {
    if (FUNC_0(VAR_2, "global-header")) {
      int VAR_5;
      for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
        if (FUNC_0(VAR_2, "global-header")) {
          VAR_4->ref_lf_delta_[VAR_5] = FUNC_1(VAR_2, 6, "global-header");
        }
      }
      for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
        if (FUNC_0(VAR_2, "global-header")) {
          VAR_4->mode_lf_delta_[VAR_5] = FUNC_1(VAR_2, 6, "global-header");
        }
      }
    }
  }
  VAR_3->filter_type_ = (VAR_4->level_ == 0) ? 0 : VAR_4->simple_ ? 1 : 2;
  return !VAR_2->eof_;
}
