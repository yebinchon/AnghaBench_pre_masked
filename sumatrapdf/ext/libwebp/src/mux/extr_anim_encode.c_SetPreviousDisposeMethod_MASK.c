
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dispose_method; } ;
typedef TYPE_1__ WebPMuxFrameInfo ;
typedef scalar_t__ WebPMuxAnimDispose ;
struct TYPE_8__ {int count_; scalar_t__ prev_candidate_undecided_; } ;
typedef TYPE_2__ WebPAnimEncoder ;
struct TYPE_9__ {TYPE_1__ sub_frame_; TYPE_1__ key_frame_; scalar_t__ is_key_frame_; } ;
typedef TYPE_3__ EncodedFrame ;


 TYPE_3__* FUNC_0 (TYPE_2__* const,size_t const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(WebPAnimEncoder* const VAR_1,
                                     WebPMuxAnimDispose VAR_2) {
  const size_t VAR_3 = VAR_1->count_ - 2;
  EncodedFrame* const VAR_4 = FUNC_0(VAR_1, VAR_3);
  FUNC_1(VAR_1->count_ >= 2);

  if (VAR_1->prev_candidate_undecided_) {
    FUNC_1(VAR_2 == VAR_0);
    VAR_4->sub_frame_.dispose_method = VAR_2;
    VAR_4->key_frame_.dispose_method = VAR_2;
  } else {
    WebPMuxFrameInfo* const VAR_5 = VAR_4->is_key_frame_
                                        ? &VAR_4->key_frame_
                                        : &VAR_4->sub_frame_;
    VAR_5->dispose_method = VAR_2;
  }
}
