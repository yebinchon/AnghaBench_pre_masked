
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_skip_; scalar_t__ skip_proba_; int use_skip_proba_; } ;
struct TYPE_4__ {int mb_w_; int mb_h_; TYPE_2__ proba_; } ;
typedef TYPE_1__ VP8Encoder ;
typedef TYPE_2__ VP8EncProba ;


 scalar_t__ FUNC_0 (int const,int const) ;
 scalar_t__ VAR_0 ;
 int const FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(VP8Encoder* const VAR_1) {
  VP8EncProba* const VAR_2 = &VAR_1->proba_;
  const int VAR_3 = VAR_1->mb_w_ * VAR_1->mb_h_;
  const int VAR_4 = VAR_2->nb_skip_;
  int VAR_5;
  VAR_2->skip_proba_ = FUNC_0(VAR_4, VAR_3);
  VAR_2->use_skip_proba_ = (VAR_2->skip_proba_ < VAR_0);
  VAR_5 = 256;
  if (VAR_2->use_skip_proba_) {
    VAR_5 += VAR_4 * FUNC_1(1, VAR_2->skip_proba_)
         + (VAR_3 - VAR_4) * FUNC_1(0, VAR_2->skip_proba_);
    VAR_5 += 8 * 256;
  }
  return VAR_5;
}
