
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mb_w_; int mb_h_; TYPE_1__* mb_info_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_4__ {scalar_t__ segment_; } ;



__attribute__((used)) static void FUNC_0(VP8Encoder* const VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->mb_w_ * VAR_0->mb_h_; ++VAR_1) {
    VAR_0->mb_info_[VAR_1].segment_ = 0;
  }
}
