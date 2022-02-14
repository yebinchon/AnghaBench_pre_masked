
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int WebPAnimEncoderOptions ;
struct TYPE_12__ {int kmax; int kmin; } ;
struct TYPE_14__ {int width; int height; int use_argb; } ;
struct TYPE_13__ {int curr_canvas_copy_modified_; int size_; int is_first_frame_; scalar_t__ got_null_frame_; scalar_t__ prev_candidate_undecided_; scalar_t__ prev_timestamp_; scalar_t__ first_timestamp_; scalar_t__ count_since_key_frame_; int * mux_; int * encoded_frames_; TYPE_1__ options_; TYPE_3__ prev_canvas_; TYPE_3__ prev_canvas_disposed_; TYPE_3__ curr_canvas_copy_; int canvas_height_; int canvas_width_; } ;
typedef TYPE_2__ WebPAnimEncoder ;
typedef int EncodedFrame ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (TYPE_3__*,int *) ;

WebPAnimEncoder* FUNC_12(
    int VAR_2, int VAR_3, const WebPAnimEncoderOptions* VAR_4,
    int VAR_5) {
  WebPAnimEncoder* VAR_6;

  if (FUNC_4(VAR_5, VAR_1)) {
    return ((void*)0);
  }
  if (VAR_2 <= 0 || VAR_3 <= 0 ||
      (VAR_2 * (uint64_t)VAR_3) >= VAR_0) {
    return ((void*)0);
  }

  VAR_6 = (WebPAnimEncoder*)FUNC_10(1, sizeof(*VAR_6));
  if (VAR_6 == ((void*)0)) return ((void*)0);

  VAR_6->encoded_frames_ = ((void*)0);
  VAR_6->mux_ = ((void*)0);
  FUNC_1(VAR_6);


  *(int*)&VAR_6->canvas_width_ = VAR_2;
  *(int*)&VAR_6->canvas_height_ = VAR_3;
  if (VAR_4 != ((void*)0)) {
    *(WebPAnimEncoderOptions*)&VAR_6->options_ = *VAR_4;
    FUNC_3((WebPAnimEncoderOptions*)&VAR_6->options_);
  } else {
    FUNC_0((WebPAnimEncoderOptions*)&VAR_6->options_);
  }


  if (!FUNC_9(&VAR_6->curr_canvas_copy_) ||
      !FUNC_9(&VAR_6->prev_canvas_) ||
      !FUNC_9(&VAR_6->prev_canvas_disposed_)) {
    goto Err;
  }
  VAR_6->curr_canvas_copy_.width = VAR_2;
  VAR_6->curr_canvas_copy_.height = VAR_3;
  VAR_6->curr_canvas_copy_.use_argb = 1;
  if (!FUNC_7(&VAR_6->curr_canvas_copy_) ||
      !FUNC_8(&VAR_6->curr_canvas_copy_, &VAR_6->prev_canvas_) ||
      !FUNC_8(&VAR_6->curr_canvas_copy_, &VAR_6->prev_canvas_disposed_)) {
    goto Err;
  }
  FUNC_11(&VAR_6->prev_canvas_, ((void*)0));
  VAR_6->curr_canvas_copy_modified_ = 1;


  FUNC_2(VAR_6);

  VAR_6->size_ = VAR_6->options_.kmax - VAR_6->options_.kmin + 1;


  if (VAR_6->size_ < 2) VAR_6->size_ = 2;
  VAR_6->encoded_frames_ =
      (EncodedFrame*)FUNC_10(VAR_6->size_, sizeof(*VAR_6->encoded_frames_));
  if (VAR_6->encoded_frames_ == ((void*)0)) goto Err;

  VAR_6->mux_ = FUNC_6();
  if (VAR_6->mux_ == ((void*)0)) goto Err;

  VAR_6->count_since_key_frame_ = 0;
  VAR_6->first_timestamp_ = 0;
  VAR_6->prev_timestamp_ = 0;
  VAR_6->prev_candidate_undecided_ = 0;
  VAR_6->is_first_frame_ = 1;
  VAR_6->got_null_frame_ = 0;

  return VAR_6;

 Err:
  FUNC_5(VAR_6);
  return ((void*)0);
}
