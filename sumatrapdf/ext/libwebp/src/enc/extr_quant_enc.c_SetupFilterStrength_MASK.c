
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int beta_; int fstrength_; int quant_; } ;
typedef TYPE_3__ VP8SegmentInfo ;
struct TYPE_6__ {int level_; int simple_; int sharpness_; } ;
struct TYPE_9__ {TYPE_2__* config_; TYPE_1__ filter_hdr_; TYPE_3__* dqm_; } ;
typedef TYPE_4__ VP8Encoder ;
struct TYPE_7__ {int filter_strength; scalar_t__ filter_type; int filter_sharpness; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const) ;
 size_t FUNC_1 (int ,int ,int) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2(VP8Encoder* const VAR_3) {
  int VAR_4;

  const int VAR_5 = 5 * VAR_3->config_->filter_strength;
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
    VP8SegmentInfo* const VAR_6 = &VAR_3->dqm_[VAR_4];

    const int VAR_7 = VAR_2[FUNC_1(VAR_6->quant_, 0, 127)] >> 2;
    const int VAR_8 =
        FUNC_0(VAR_3->filter_hdr_.sharpness_, VAR_7);

    const int VAR_9 = VAR_8 * VAR_5 / (256 + VAR_6->beta_);
    VAR_6->fstrength_ = (VAR_9 < VAR_0) ? 0 : (VAR_9 > 63) ? 63 : VAR_9;
  }

  VAR_3->filter_hdr_.level_ = VAR_3->dqm_[0].fstrength_;
  VAR_3->filter_hdr_.simple_ = (VAR_3->config_->filter_type == 0);
  VAR_3->filter_hdr_.sharpness_ = VAR_3->config_->filter_sharpness;
}
