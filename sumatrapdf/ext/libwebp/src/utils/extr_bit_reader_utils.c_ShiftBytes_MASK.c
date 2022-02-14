
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vp8l_val_t ;
struct TYPE_5__ {int bit_pos_; size_t pos_; size_t len_; int val_; scalar_t__* buf_; } ;
typedef TYPE_1__ VP8LBitReader ;


 scalar_t__ FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(VP8LBitReader* const VAR_1) {
  while (VAR_1->bit_pos_ >= 8 && VAR_1->pos_ < VAR_1->len_) {
    VAR_1->val_ >>= 8;
    VAR_1->val_ |= ((vp8l_val_t)VAR_1->buf_[VAR_1->pos_]) << (VAR_0 - 8);
    ++VAR_1->pos_;
    VAR_1->bit_pos_ -= 8;
  }
  if (FUNC_0(VAR_1)) {
    FUNC_1(VAR_1);
  }
}
