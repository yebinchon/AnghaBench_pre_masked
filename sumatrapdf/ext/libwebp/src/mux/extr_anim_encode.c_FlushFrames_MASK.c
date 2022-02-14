
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int x_offset; int y_offset; int dispose_method; int blend_method; } ;
typedef TYPE_2__ WebPMuxFrameInfo ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_11__ {scalar_t__ verbose; } ;
struct TYPE_13__ {scalar_t__ flush_count_; scalar_t__ start_; int count_; scalar_t__ keyframe_; TYPE_4__* encoded_frames_; int out_frame_count_; TYPE_1__ options_; int * mux_; } ;
typedef TYPE_3__ WebPAnimEncoder ;
struct TYPE_14__ {TYPE_2__ sub_frame_; TYPE_2__ key_frame_; scalar_t__ is_key_frame_; } ;
typedef TYPE_4__ EncodedFrame ;


 int FUNC_0 (TYPE_4__* const) ;
 TYPE_4__* FUNC_1 (TYPE_3__* const,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__* const,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *,TYPE_2__ const* const,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(WebPAnimEncoder* const VAR_3) {
  while (VAR_3->flush_count_ > 0) {
    WebPMuxError VAR_4;
    EncodedFrame* const VAR_5 = FUNC_1(VAR_3, 0);
    const WebPMuxFrameInfo* const VAR_6 =
        VAR_5->is_key_frame_ ? &VAR_5->key_frame_ : &VAR_5->sub_frame_;
    FUNC_4(VAR_3->mux_ != ((void*)0));
    VAR_4 = FUNC_3(VAR_3->mux_, VAR_6, 1);
    if (VAR_4 != VAR_1) {
      FUNC_2(VAR_3, "ERROR adding frame. WebPMuxError", VAR_4);
      return 0;
    }
    if (VAR_3->options_.verbose) {
      FUNC_5(VAR_2, "INFO: Added frame. offset:%d,%d dispose:%d blend:%d\n",
              VAR_6->x_offset, VAR_6->y_offset, VAR_6->dispose_method,
              VAR_6->blend_method);
    }
    ++VAR_3->out_frame_count_;
    FUNC_0(VAR_5);
    ++VAR_3->start_;
    --VAR_3->flush_count_;
    --VAR_3->count_;
    if (VAR_3->keyframe_ != VAR_0) --VAR_3->keyframe_;
  }

  if (VAR_3->count_ == 1 && VAR_3->start_ != 0) {

    const int VAR_7 = (int)VAR_3->start_;
    EncodedFrame VAR_8 = VAR_3->encoded_frames_[0];
    VAR_3->encoded_frames_[0] = VAR_3->encoded_frames_[VAR_7];
    VAR_3->encoded_frames_[VAR_7] = VAR_8;
    FUNC_0(&VAR_3->encoded_frames_[VAR_7]);
    VAR_3->start_ = 0;
  }
  return 1;
}
