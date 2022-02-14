
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vp8l_wtype_t ;
typedef size_t uint64_t ;
struct TYPE_4__ {scalar_t__ cur_; scalar_t__ end_; size_t buf_; int error_; int bits_; int used_; } ;
typedef TYPE_1__ VP8LBitWriter ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__* const,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2(VP8LBitWriter* const VAR_3) {

  if (VAR_3->cur_ + VAR_2 > VAR_3->end_) {
    const uint64_t VAR_4 = (VAR_3->end_ - VAR_3->buf_) + VAR_0;
    if (VAR_4 != (size_t)VAR_4 ||
        !FUNC_0(VAR_3, (size_t)VAR_4)) {
      VAR_3->cur_ = VAR_3->buf_;
      VAR_3->error_ = 1;
      return;
    }
  }
  *(vp8l_wtype_t*)VAR_3->cur_ = (vp8l_wtype_t)FUNC_1((vp8l_wtype_t)VAR_3->bits_);
  VAR_3->cur_ += VAR_2;
  VAR_3->bits_ >>= VAR_1;
  VAR_3->used_ -= VAR_1;
}
