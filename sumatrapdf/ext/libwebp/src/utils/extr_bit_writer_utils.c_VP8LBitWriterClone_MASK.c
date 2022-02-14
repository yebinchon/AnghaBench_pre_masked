
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t cur_; size_t buf_; scalar_t__ end_; int error_; int used_; int bits_; } ;
typedef TYPE_1__ VP8LBitWriter ;


 int FUNC_0 (TYPE_1__* const,size_t const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__,size_t const) ;

int FUNC_3(const VP8LBitWriter* const VAR_0,
                       VP8LBitWriter* const VAR_1) {
  const size_t VAR_2 = VAR_0->cur_ - VAR_0->buf_;
  FUNC_1(VAR_0->cur_ >= VAR_0->buf_ && VAR_0->cur_ <= VAR_0->end_);
  if (!FUNC_0(VAR_1, VAR_2)) return 0;
  FUNC_2(VAR_1->buf_, VAR_0->buf_, VAR_2);
  VAR_1->bits_ = VAR_0->bits_;
  VAR_1->used_ = VAR_0->used_;
  VAR_1->error_ = VAR_0->error_;
  VAR_1->cur_ = VAR_1->buf_ + VAR_2;
  return 1;
}
