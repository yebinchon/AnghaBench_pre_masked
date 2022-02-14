
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int preds_w_; int mb_w_; int mb_h_; scalar_t__* nz_; int * preds_; } ;
typedef TYPE_1__ VP8Encoder ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(VP8Encoder* const VAR_1) {


  int VAR_2;
  uint8_t* const VAR_3 = VAR_1->preds_ - VAR_1->preds_w_;
  uint8_t* const VAR_4 = VAR_1->preds_ - 1;
  for (VAR_2 = -1; VAR_2 < 4 * VAR_1->mb_w_; ++VAR_2) {
    VAR_3[VAR_2] = VAR_0;
  }
  for (VAR_2 = 0; VAR_2 < 4 * VAR_1->mb_h_; ++VAR_2) {
    VAR_4[VAR_2 * VAR_1->preds_w_] = VAR_0;
  }
  VAR_1->nz_[-1] = 0;
}
