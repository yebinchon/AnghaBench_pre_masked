
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mb_w_; int mb_h_; scalar_t__ percent_; int pic_; scalar_t__ uv_alpha_; scalar_t__ alpha_; TYPE_1__* dqm_; int * mb_info_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_4__ {scalar_t__ beta_; scalar_t__ alpha_; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(VP8Encoder* const VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->mb_w_ * VAR_0->mb_h_; ++VAR_1) {
    FUNC_0(&VAR_0->mb_info_[VAR_1]);
  }

  VAR_0->dqm_[0].alpha_ = 0;
  VAR_0->dqm_[0].beta_ = 0;

  VAR_0->alpha_ = 0;
  VAR_0->uv_alpha_ = 0;
  FUNC_1(VAR_0->pic_, VAR_0->percent_ + 20, &VAR_0->percent_);
}
