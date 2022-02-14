
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_19__ {scalar_t__ width; scalar_t__ height; int use_argb; void* error_code; } ;
typedef TYPE_2__ WebPPicture ;
struct TYPE_20__ {int lossless; } ;
typedef TYPE_3__ WebPConfig ;
struct TYPE_18__ {scalar_t__ verbose; } ;
struct TYPE_21__ {int prev_timestamp_; int first_timestamp_; int got_null_frame_; scalar_t__ canvas_width_; scalar_t__ canvas_height_; int curr_canvas_copy_modified_; TYPE_2__* curr_canvas_; TYPE_1__ options_; int is_first_frame_; } ;
typedef TYPE_4__ WebPAnimEncoder ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 scalar_t__ const VAR_0 ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*) ;
 void* VAR_1 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__ const*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*) ;
 int VAR_2 ;

int FUNC_11(WebPAnimEncoder* VAR_3, WebPPicture* VAR_4, int VAR_5,
                       const WebPConfig* VAR_6) {
  WebPConfig VAR_7;
  int VAR_8;

  if (VAR_3 == ((void*)0)) {
    return 0;
  }
  FUNC_5(VAR_3);

  if (!VAR_3->is_first_frame_) {

    const uint32_t VAR_9 =
        (uint32_t)VAR_5 - VAR_3->prev_timestamp_;
    if (VAR_9 >= VAR_0) {
      if (VAR_4 != ((void*)0)) {
        VAR_4->error_code = VAR_1;
      }
      FUNC_4(VAR_3, "ERROR adding frame: timestamps must be non-decreasing");
      return 0;
    }
    if (!FUNC_3(VAR_3, (int)VAR_9)) {
      return 0;
    }
  } else {
    VAR_3->first_timestamp_ = VAR_5;
  }

  if (VAR_4 == ((void*)0)) {
    VAR_3->got_null_frame_ = 1;
    VAR_3->prev_timestamp_ = VAR_5;
    return 1;
  }

  if (VAR_4->width != VAR_3->canvas_width_ ||
      VAR_4->height != VAR_3->canvas_height_) {
    VAR_4->error_code = VAR_1;
    FUNC_4(VAR_3, "ERROR adding frame: Invalid frame dimensions");
    return 0;
  }

  if (!VAR_4->use_argb) {
    if (VAR_3->options_.verbose) {
      FUNC_10(VAR_2, "WARNING: Converting frame from YUV(A) to ARGB format; "
              "this incurs a small loss.\n");
    }
    if (!FUNC_7(VAR_4)) {
      FUNC_4(VAR_3, "ERROR converting frame from YUV(A) to ARGB");
      return 0;
    }
  }

  if (VAR_6 != ((void*)0)) {
    if (!FUNC_8(VAR_6)) {
      FUNC_4(VAR_3, "ERROR adding frame: Invalid WebPConfig");
      return 0;
    }
    VAR_7 = *VAR_6;
  } else {
    FUNC_6(&VAR_7);
    VAR_7.lossless = 1;
  }
  FUNC_9(VAR_3->curr_canvas_ == ((void*)0));
  VAR_3->curr_canvas_ = VAR_4;
  FUNC_9(VAR_3->curr_canvas_copy_modified_ == 1);
  FUNC_1(VAR_3);

  VAR_8 = FUNC_0(VAR_3, &VAR_7) && FUNC_2(VAR_3);

  VAR_3->curr_canvas_ = ((void*)0);
  VAR_3->curr_canvas_copy_modified_ = 1;
  if (VAR_8) {
    VAR_3->prev_timestamp_ = VAR_5;
  }
  return VAR_8;
}
