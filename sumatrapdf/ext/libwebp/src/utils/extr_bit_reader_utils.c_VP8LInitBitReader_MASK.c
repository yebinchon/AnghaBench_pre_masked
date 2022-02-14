
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vp8l_val_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_3__ {size_t len_; int val_; size_t pos_; scalar_t__* buf_; scalar_t__ eos_; scalar_t__ bit_pos_; } ;
typedef TYPE_1__ VP8LBitReader ;


 int FUNC_0 (int) ;

void FUNC_1(VP8LBitReader* const VAR_0, const uint8_t* const VAR_1,
                       size_t VAR_2) {
  size_t VAR_3;
  vp8l_val_t VAR_4 = 0;
  FUNC_0(VAR_0 != ((void*)0));
  FUNC_0(VAR_1 != ((void*)0));
  FUNC_0(VAR_2 < 0xfffffff8u);

  VAR_0->len_ = VAR_2;
  VAR_0->val_ = 0;
  VAR_0->bit_pos_ = 0;
  VAR_0->eos_ = 0;

  if (VAR_2 > sizeof(VAR_0->val_)) {
    VAR_2 = sizeof(VAR_0->val_);
  }
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
    VAR_4 |= (vp8l_val_t)VAR_1[VAR_3] << (8 * VAR_3);
  }
  VAR_0->val_ = VAR_4;
  VAR_0->pos_ = VAR_2;
  VAR_0->buf_ = VAR_1;
}
