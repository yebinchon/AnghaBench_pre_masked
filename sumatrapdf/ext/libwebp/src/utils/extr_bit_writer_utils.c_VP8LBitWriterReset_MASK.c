
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cur_; scalar_t__ buf_; scalar_t__ end_; int error_; int used_; int bits_; } ;
typedef TYPE_1__ VP8LBitWriter ;


 int FUNC_0 (int) ;

void FUNC_1(const VP8LBitWriter* const VAR_0,
                        VP8LBitWriter* const VAR_1) {
  VAR_1->bits_ = VAR_0->bits_;
  VAR_1->used_ = VAR_0->used_;
  VAR_1->cur_ = VAR_1->buf_ + (VAR_0->cur_ - VAR_0->buf_);
  FUNC_0(VAR_1->cur_ <= VAR_1->end_);
  VAR_1->error_ = VAR_0->error_;
}
