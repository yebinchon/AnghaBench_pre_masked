
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int absolute_delta_; int filter_strength_; int quantizer_; scalar_t__ update_map_; scalar_t__ use_segment_; } ;
typedef TYPE_1__ VP8SegmentHeader ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(VP8SegmentHeader* const VAR_0) {
  FUNC_0(VAR_0 != ((void*)0));
  VAR_0->use_segment_ = 0;
  VAR_0->update_map_ = 0;
  VAR_0->absolute_delta_ = 1;
  FUNC_1(VAR_0->quantizer_, 0, sizeof(VAR_0->quantizer_));
  FUNC_1(VAR_0->filter_strength_, 0, sizeof(VAR_0->filter_strength_));
}
