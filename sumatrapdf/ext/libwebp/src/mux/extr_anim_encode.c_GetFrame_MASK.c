
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t start_; size_t size_; int * encoded_frames_; } ;
typedef TYPE_1__ WebPAnimEncoder ;
typedef int EncodedFrame ;


 int FUNC_0 (int) ;

__attribute__((used)) static EncodedFrame* FUNC_1(const WebPAnimEncoder* const VAR_0,
                              size_t VAR_1) {
  FUNC_0(VAR_0->start_ + VAR_1 < VAR_0->size_);
  return &VAR_0->encoded_frames_[VAR_0->start_ + VAR_1];
}
