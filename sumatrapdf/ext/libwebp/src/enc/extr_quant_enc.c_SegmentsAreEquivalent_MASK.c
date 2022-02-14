
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ quant_; scalar_t__ fstrength_; } ;
typedef TYPE_1__ VP8SegmentInfo ;



__attribute__((used)) static int FUNC_0(const VP8SegmentInfo* const VAR_0,
                                 const VP8SegmentInfo* const VAR_1) {
  return (VAR_0->quant_ == VAR_1->quant_) && (VAR_0->fstrength_ == VAR_1->fstrength_);
}
