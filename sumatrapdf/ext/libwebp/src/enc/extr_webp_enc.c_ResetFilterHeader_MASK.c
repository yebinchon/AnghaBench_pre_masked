
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int simple_; scalar_t__ i4x4_lf_delta_; scalar_t__ sharpness_; scalar_t__ level_; } ;
struct TYPE_4__ {TYPE_2__ filter_hdr_; } ;
typedef TYPE_1__ VP8Encoder ;
typedef TYPE_2__ VP8EncFilterHeader ;



__attribute__((used)) static void FUNC_0(VP8Encoder* const VAR_0) {
  VP8EncFilterHeader* const VAR_1 = &VAR_0->filter_hdr_;
  VAR_1->simple_ = 1;
  VAR_1->level_ = 0;
  VAR_1->sharpness_ = 0;
  VAR_1->i4x4_lf_delta_ = 0;
}
