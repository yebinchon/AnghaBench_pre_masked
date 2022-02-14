
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_parts_; int preds_w_; int mb_w_; int uv_top_; int y_top_; scalar_t__ mb_info_; int nz_; scalar_t__ preds_; int * parts_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_6__ {int y_; int uv_top_; int y_top_; scalar_t__ mb_; int nz_; scalar_t__ preds_; int * bw_; scalar_t__ x_; TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;


 int FUNC_0 (TYPE_2__* const) ;

void FUNC_1(VP8EncIterator* const VAR_0, int VAR_1) {
  VP8Encoder* const VAR_2 = VAR_0->enc_;
  VAR_0->x_ = 0;
  VAR_0->y_ = VAR_1;
  VAR_0->bw_ = &VAR_2->parts_[VAR_1 & (VAR_2->num_parts_ - 1)];
  VAR_0->preds_ = VAR_2->preds_ + VAR_1 * 4 * VAR_2->preds_w_;
  VAR_0->nz_ = VAR_2->nz_;
  VAR_0->mb_ = VAR_2->mb_info_ + VAR_1 * VAR_2->mb_w_;
  VAR_0->y_top_ = VAR_2->y_top_;
  VAR_0->uv_top_ = VAR_2->uv_top_;
  FUNC_0(VAR_0);
}
