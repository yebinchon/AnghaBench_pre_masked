
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int* q_; } ;
struct TYPE_11__ {int fstrength_; int max_edge_; TYPE_2__ y2_; } ;
typedef TYPE_4__ VP8SegmentInfo ;
struct TYPE_10__ {int level_; int sharpness_; } ;
struct TYPE_12__ {TYPE_3__ filter_hdr_; TYPE_4__* dqm_; TYPE_1__* config_; } ;
typedef TYPE_5__ VP8Encoder ;
struct TYPE_13__ {double*** lf_stats_; TYPE_5__* enc_; } ;
typedef TYPE_6__ VP8EncIterator ;
struct TYPE_8__ {scalar_t__ filter_strength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const) ;

void FUNC_1(VP8EncIterator* const VAR_2) {
  VP8Encoder* const VAR_3 = VAR_2->enc_;

  if (VAR_2->lf_stats_ != ((void*)0)) {
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
      int VAR_5, VAR_6 = 0;

      double VAR_7 = 1.00001 * (*VAR_2->lf_stats_)[VAR_4][0];
      for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
        const double VAR_8 = (*VAR_2->lf_stats_)[VAR_4][VAR_5];
        if (VAR_8 > VAR_7) {
          VAR_7 = VAR_8;
          VAR_6 = VAR_5;
        }
      }
      VAR_3->dqm_[VAR_4].fstrength_ = VAR_6;
    }
    return;
  }

  if (VAR_3->config_->filter_strength > 0) {
    int VAR_9 = 0;
    int VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
      VP8SegmentInfo* const VAR_11 = &VAR_3->dqm_[VAR_10];

      const int VAR_12 = (VAR_11->max_edge_ * VAR_11->y2_.q_[1]) >> 3;
      const int VAR_13 =
          FUNC_0(VAR_3->filter_hdr_.sharpness_, VAR_12);
      if (VAR_13 > VAR_11->fstrength_) {
        VAR_11->fstrength_ = VAR_13;
      }
      if (VAR_9 < VAR_11->fstrength_) {
        VAR_9 = VAR_11->fstrength_;
      }
    }
    VAR_3->filter_hdr_.level_ = VAR_9;
  }
}
