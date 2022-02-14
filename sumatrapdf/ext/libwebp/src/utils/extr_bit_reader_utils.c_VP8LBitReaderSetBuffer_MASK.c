
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t len_; int eos_; size_t pos_; int * buf_; } ;
typedef TYPE_1__ VP8LBitReader ;


 scalar_t__ FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int) ;

void FUNC_2(VP8LBitReader* const VAR_0,
                            const uint8_t* const VAR_1, size_t VAR_2) {
  FUNC_1(VAR_0 != ((void*)0));
  FUNC_1(VAR_1 != ((void*)0));
  FUNC_1(VAR_2 < 0xfffffff8u);
  VAR_0->buf_ = VAR_1;
  VAR_0->len_ = VAR_2;

  VAR_0->eos_ = (VAR_0->pos_ > VAR_0->len_) || FUNC_0(VAR_0);
}
