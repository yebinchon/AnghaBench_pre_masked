
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ x_; int preds_; int mb_; int nz_; int y_top_; int uv_top_; scalar_t__ count_down_; int y_; TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;
struct TYPE_5__ {scalar_t__ mb_w_; } ;


 int FUNC_0 (TYPE_2__* const,int ) ;

int FUNC_1(VP8EncIterator* const VAR_0) {
  if (++VAR_0->x_ == VAR_0->enc_->mb_w_) {
    FUNC_0(VAR_0, ++VAR_0->y_);
  } else {
    VAR_0->preds_ += 4;
    VAR_0->mb_ += 1;
    VAR_0->nz_ += 1;
    VAR_0->y_top_ += 16;
    VAR_0->uv_top_ += 16;
  }
  return (0 < --VAR_0->count_down_);
}
