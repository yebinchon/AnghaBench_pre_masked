
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_2__* mb_; TYPE_1__* enc_; int * preds_; } ;
typedef TYPE_3__ VP8EncIterator ;
struct TYPE_6__ {int type_; } ;
struct TYPE_5__ {int preds_w_; } ;


 int FUNC_0 (int *,int,int) ;

void FUNC_1(const VP8EncIterator* const VAR_0, int VAR_1) {
  uint8_t* VAR_2 = VAR_0->preds_;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
    FUNC_0(VAR_2, VAR_1, 4);
    VAR_2 += VAR_0->enc_->preds_w_;
  }
  VAR_0->mb_->type_ = 1;
}
