
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int height; int width; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_11__ {int height_; int width_; scalar_t__ y_offset_; scalar_t__ x_offset_; } ;
struct TYPE_10__ {int sub_frame_lossy_; TYPE_8__ rect_lossy_; int empty_rect_allowed_; TYPE_8__ rect_ll_; int sub_frame_ll_; } ;
typedef TYPE_2__ SubFrameParams ;


 int FUNC_0 (TYPE_1__ const* const,TYPE_1__ const* const,int,int,int ,int,float,TYPE_8__*,int *) ;

__attribute__((used)) static int FUNC_1(const WebPPicture* const VAR_0,
                       const WebPPicture* const VAR_1, int VAR_2,
                       int VAR_3, float VAR_4,
                       SubFrameParams* const VAR_5) {

  VAR_5->rect_ll_.x_offset_ = 0;
  VAR_5->rect_ll_.y_offset_ = 0;
  VAR_5->rect_ll_.width_ = VAR_1->width;
  VAR_5->rect_ll_.height_ = VAR_1->height;
  if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
                  VAR_5->empty_rect_allowed_, 1, VAR_4,
                  &VAR_5->rect_ll_, &VAR_5->sub_frame_ll_)) {
    return 0;
  }

  VAR_5->rect_lossy_ = VAR_5->rect_ll_;
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
                    VAR_5->empty_rect_allowed_, 0, VAR_4,
                    &VAR_5->rect_lossy_, &VAR_5->sub_frame_lossy_);
}
