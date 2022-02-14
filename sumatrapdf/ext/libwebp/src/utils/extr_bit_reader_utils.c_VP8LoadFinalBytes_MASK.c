
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bit_t ;
struct TYPE_3__ {int value_; int eof_; scalar_t__ bits_; int * buf_; int * buf_end_; } ;
typedef TYPE_1__ VP8BitReader ;


 int FUNC_0 (int) ;

void FUNC_1(VP8BitReader* const VAR_0) {
  FUNC_0(VAR_0 != ((void*)0) && VAR_0->buf_ != ((void*)0));

  if (VAR_0->buf_ < VAR_0->buf_end_) {
    VAR_0->bits_ += 8;
    VAR_0->value_ = (bit_t)(*VAR_0->buf_++) | (VAR_0->value_ << 8);
  } else if (!VAR_0->eof_) {
    VAR_0->value_ <<= 8;
    VAR_0->bits_ += 8;
    VAR_0->eof_ = 1;
  } else {
    VAR_0->bits_ = 0;
  }
}
