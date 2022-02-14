
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* nz_; scalar_t__* left_nz_; TYPE_1__* mb_; } ;
typedef TYPE_2__ VP8EncIterator ;
struct TYPE_4__ {int type_; } ;



__attribute__((used)) static void FUNC_0(VP8EncIterator* const VAR_0) {
  if (VAR_0->mb_->type_ == 1) {
    *VAR_0->nz_ = 0;
    VAR_0->left_nz_[8] = 0;
  } else {
    *VAR_0->nz_ &= (1 << 24);
  }
}
