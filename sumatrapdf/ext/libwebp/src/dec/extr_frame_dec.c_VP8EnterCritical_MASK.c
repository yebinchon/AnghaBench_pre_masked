
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VP8StatusCode ;
struct TYPE_8__ {int const crop_left; int const crop_top; int crop_bottom; int crop_right; scalar_t__ bypass_filtering; int (* setup ) (TYPE_1__* const) ;} ;
typedef TYPE_1__ VP8Io ;
struct TYPE_9__ {size_t filter_type_; int tl_mb_x_; int tl_mb_y_; int br_mb_y_; int br_mb_x_; int mb_w_; int mb_h_; int status_; } ;
typedef TYPE_2__ VP8Decoder ;


 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_2 (TYPE_1__* const) ;

VP8StatusCode FUNC_3(VP8Decoder* const VAR_3, VP8Io* const VAR_4) {


  if (VAR_4->setup != ((void*)0) && !VAR_4->setup(VAR_4)) {
    FUNC_1(VAR_3, VAR_1, "Frame setup failed");
    return VAR_3->status_;
  }


  if (VAR_4->bypass_filtering) {
    VAR_3->filter_type_ = 0;
  }
  {
    const int VAR_5 = VAR_2[VAR_3->filter_type_];
    if (VAR_3->filter_type_ == 2) {

      VAR_3->tl_mb_x_ = 0;
      VAR_3->tl_mb_y_ = 0;
    } else {




      VAR_3->tl_mb_x_ = (VAR_4->crop_left - VAR_5) >> 4;
      VAR_3->tl_mb_y_ = (VAR_4->crop_top - VAR_5) >> 4;
      if (VAR_3->tl_mb_x_ < 0) VAR_3->tl_mb_x_ = 0;
      if (VAR_3->tl_mb_y_ < 0) VAR_3->tl_mb_y_ = 0;
    }

    VAR_3->br_mb_y_ = (VAR_4->crop_bottom + 15 + VAR_5) >> 4;
    VAR_3->br_mb_x_ = (VAR_4->crop_right + 15 + VAR_5) >> 4;
    if (VAR_3->br_mb_x_ > VAR_3->mb_w_) {
      VAR_3->br_mb_x_ = VAR_3->mb_w_;
    }
    if (VAR_3->br_mb_y_ > VAR_3->mb_h_) {
      VAR_3->br_mb_y_ = VAR_3->mb_h_;
    }
  }
  FUNC_0(VAR_3);
  return VAR_0;
}
