
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vp8l_wtype_t ;
typedef int vp8l_atype_t ;
typedef size_t uint64_t ;
typedef int const uint32_t ;
struct TYPE_4__ {int bits_; int used_; scalar_t__ cur_; scalar_t__ end_; size_t buf_; int error_; } ;
typedef TYPE_1__ VP8LBitWriter ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__* const,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

void FUNC_3(VP8LBitWriter* const VAR_4, uint32_t VAR_5, int VAR_6) {
  FUNC_2(VAR_6 <= 32);

  FUNC_2(sizeof(vp8l_wtype_t) == 2);
  if (VAR_6 > 0) {
    vp8l_atype_t VAR_7 = VAR_4->bits_;
    int VAR_8 = VAR_4->used_;
    while (VAR_8 >= VAR_1) {
      if (VAR_4->cur_ + VAR_2 > VAR_4->end_) {
        const uint64_t VAR_9 = (VAR_4->end_ - VAR_4->buf_) + VAR_0;
        if (VAR_9 != (size_t)VAR_9 ||
            !FUNC_0(VAR_4, (size_t)VAR_9)) {
          VAR_4->cur_ = VAR_4->buf_;
          VAR_4->error_ = 1;
          return;
        }
      }
      *(vp8l_wtype_t*)VAR_4->cur_ = (vp8l_wtype_t)FUNC_1((vp8l_wtype_t)VAR_7);
      VAR_4->cur_ += VAR_2;
      VAR_7 >>= VAR_1;
      VAR_8 -= VAR_1;
    }
    VAR_4->bits_ = VAR_7 | ((vp8l_atype_t)VAR_5 << VAR_8);
    VAR_4->used_ = VAR_8 + VAR_6;
  }
}
