
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int top_derr_; int percent_; int lf_stats_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_7__ {int top_derr_; int * u_left_; int * v_left_; int * y_left_; scalar_t__ yuv_left_mem_; int percent0_; int lf_stats_; int * yuv_out2_; int * yuv_p_; int * yuv_out_; int * yuv_in_; scalar_t__ yuv_mem_; TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;


 int FUNC_0 (TYPE_2__* const) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;

void FUNC_2(VP8Encoder* const VAR_1, VP8EncIterator* const VAR_2) {
  VAR_2->enc_ = VAR_1;
  VAR_2->yuv_in_ = (uint8_t*)FUNC_1(VAR_2->yuv_mem_);
  VAR_2->yuv_out_ = VAR_2->yuv_in_ + VAR_0;
  VAR_2->yuv_out2_ = VAR_2->yuv_out_ + VAR_0;
  VAR_2->yuv_p_ = VAR_2->yuv_out2_ + VAR_0;
  VAR_2->lf_stats_ = VAR_1->lf_stats_;
  VAR_2->percent0_ = VAR_1->percent_;
  VAR_2->y_left_ = (uint8_t*)FUNC_1(VAR_2->yuv_left_mem_ + 1);
  VAR_2->u_left_ = VAR_2->y_left_ + 16 + 16;
  VAR_2->v_left_ = VAR_2->u_left_ + 16;
  VAR_2->top_derr_ = VAR_1->top_derr_;
  FUNC_0(VAR_2);
}
