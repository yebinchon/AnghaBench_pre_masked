
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int* q_; } ;
struct TYPE_9__ {int quant_; int lambda_i4_; int lambda_i16_; int lambda_uv_; int lambda_mode_; int lambda_trellis_i4_; int lambda_trellis_i16_; int lambda_trellis_uv_; int tlambda_; int min_disto_; int i4_penalty_; scalar_t__ max_edge_; TYPE_6__ y1_; TYPE_6__ uv_; TYPE_6__ y2_; } ;
typedef TYPE_3__ VP8SegmentInfo ;
struct TYPE_8__ {int num_segments_; } ;
struct TYPE_10__ {int method_; int const dq_y1_dc_; int const dq_y2_dc_; int const dq_y2_ac_; int const dq_uv_dc_; int const dq_uv_ac_; TYPE_3__* dqm_; TYPE_2__ segment_hdr_; TYPE_1__* config_; } ;
typedef TYPE_4__ VP8Encoder ;
struct TYPE_7__ {int sns_strength; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_6__*,int) ;
 size_t FUNC_2 (int const,int ,int) ;
 void** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_3(VP8Encoder* VAR_3) {
  int VAR_4;
  const int VAR_5 =
    (VAR_3->method_ >= 4) ? VAR_3->config_->sns_strength
                        : 0;
  const int VAR_6 = VAR_3->segment_hdr_.num_segments_;
  for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {
    VP8SegmentInfo* const VAR_7 = &VAR_3->dqm_[VAR_4];
    const int VAR_8 = VAR_7->quant_;
    int VAR_9, VAR_10, VAR_11;
    VAR_7->y1_.q_[0] = VAR_2[FUNC_2(VAR_8 + VAR_3->dq_y1_dc_, 0, 127)];
    VAR_7->y1_.q_[1] = VAR_0[FUNC_2(VAR_8, 0, 127)];

    VAR_7->y2_.q_[0] = VAR_2[ FUNC_2(VAR_8 + VAR_3->dq_y2_dc_, 0, 127)] * 2;
    VAR_7->y2_.q_[1] = VAR_1[FUNC_2(VAR_8 + VAR_3->dq_y2_ac_, 0, 127)];

    VAR_7->uv_.q_[0] = VAR_2[FUNC_2(VAR_8 + VAR_3->dq_uv_dc_, 0, 117)];
    VAR_7->uv_.q_[1] = VAR_0[FUNC_2(VAR_8 + VAR_3->dq_uv_ac_, 0, 127)];

    VAR_9 = FUNC_1(&VAR_7->y1_, 0);
    VAR_10 = FUNC_1(&VAR_7->y2_, 1);
    VAR_11 = FUNC_1(&VAR_7->uv_, 2);

    VAR_7->lambda_i4_ = (3 * VAR_9 * VAR_9) >> 7;
    VAR_7->lambda_i16_ = (3 * VAR_10 * VAR_10);
    VAR_7->lambda_uv_ = (3 * VAR_11 * VAR_11) >> 6;
    VAR_7->lambda_mode_ = (1 * VAR_9 * VAR_9) >> 7;
    VAR_7->lambda_trellis_i4_ = (7 * VAR_9 * VAR_9) >> 3;
    VAR_7->lambda_trellis_i16_ = (VAR_10 * VAR_10) >> 2;
    VAR_7->lambda_trellis_uv_ = (VAR_11 * VAR_11) << 1;
    VAR_7->tlambda_ = (VAR_5 * VAR_9) >> 5;


    FUNC_0(&VAR_7->lambda_i4_);
    FUNC_0(&VAR_7->lambda_i16_);
    FUNC_0(&VAR_7->lambda_uv_);
    FUNC_0(&VAR_7->lambda_mode_);
    FUNC_0(&VAR_7->lambda_trellis_i4_);
    FUNC_0(&VAR_7->lambda_trellis_i16_);
    FUNC_0(&VAR_7->lambda_trellis_uv_);
    FUNC_0(&VAR_7->tlambda_);

    VAR_7->min_disto_ = 20 * VAR_7->y1_.q_[0];
    VAR_7->max_edge_ = 0;

    VAR_7->i4_penalty_ = 1000 * VAR_9 * VAR_9;
  }
}
