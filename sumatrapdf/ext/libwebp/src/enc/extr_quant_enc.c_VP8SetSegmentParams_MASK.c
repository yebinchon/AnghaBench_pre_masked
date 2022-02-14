
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int num_segments_; } ;
struct TYPE_12__ {int alpha_; int uv_alpha_; int dq_uv_dc_; int dq_uv_ac_; scalar_t__ dq_y2_ac_; scalar_t__ dq_y2_dc_; scalar_t__ dq_y1_dc_; TYPE_3__* config_; void* base_quant_; TYPE_2__* dqm_; TYPE_1__ segment_hdr_; } ;
typedef TYPE_4__ VP8Encoder ;
struct TYPE_11__ {int sns_strength; scalar_t__ emulate_jpeg_size; } ;
struct TYPE_10__ {double const alpha_; void* quant_; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_0 (double const) ;
 double FUNC_1 (double const,int) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__* const) ;
 int FUNC_3 (TYPE_4__* const) ;
 int FUNC_4 (TYPE_4__* const) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int const,int,int) ;
 double FUNC_7 (double const,double const) ;

void FUNC_8(VP8Encoder* const VAR_7, float VAR_8) {
  int VAR_9;
  int VAR_10, VAR_11;
  const int VAR_12 = VAR_7->segment_hdr_.num_segments_;
  const double VAR_13 = VAR_6 * VAR_7->config_->sns_strength / 100. / 128.;
  const double VAR_14 = VAR_8 / 100.;
  const double VAR_15 = VAR_7->config_->emulate_jpeg_size ?
      FUNC_1(VAR_14, VAR_7->alpha_ / 255.) :
      FUNC_0(VAR_14);
  for (VAR_9 = 0; VAR_9 < VAR_12; ++VAR_9) {


    const double VAR_16 = 1. - VAR_13 * VAR_7->dqm_[VAR_9].alpha_;
    const double VAR_17 = FUNC_7(VAR_15, VAR_16);
    const int VAR_18 = (int)(127. * (1. - VAR_17));
    FUNC_5(VAR_16 > 0.);
    VAR_7->dqm_[VAR_9].quant_ = FUNC_6(VAR_18, 0, 127);
  }


  VAR_7->base_quant_ = VAR_7->dqm_[0].quant_;


  for (VAR_9 = VAR_12; VAR_9 < VAR_5; ++VAR_9) {
    VAR_7->dqm_[VAR_9].quant_ = VAR_7->base_quant_;
  }




  VAR_10 = (VAR_7->uv_alpha_ - VAR_2) * (VAR_1 - VAR_4)
                                          / (VAR_0 - VAR_3);

  VAR_10 = VAR_10 * VAR_7->config_->sns_strength / 100;

  VAR_10 = FUNC_6(VAR_10, VAR_4, VAR_1);



  VAR_11 = -4 * VAR_7->config_->sns_strength / 100;
  VAR_11 = FUNC_6(VAR_11, -15, 15);

  VAR_7->dq_y1_dc_ = 0;
  VAR_7->dq_y2_dc_ = 0;
  VAR_7->dq_y2_ac_ = 0;
  VAR_7->dq_uv_dc_ = VAR_11;
  VAR_7->dq_uv_ac_ = VAR_10;

  FUNC_2(VAR_7);

  if (VAR_12 > 1) FUNC_4(VAR_7);

  FUNC_3(VAR_7);
}
