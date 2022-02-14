
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ width; scalar_t__ height; int use_argb; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_10__ {int x_offset_; int y_offset_; int width_; int height_; } ;
typedef TYPE_2__ FrameRectangle ;


 int FUNC_0 (TYPE_1__ const* const,TYPE_1__ const* const,TYPE_2__*,int,float) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int const,int ,scalar_t__) ;

int FUNC_3(
    const WebPPicture* const VAR_0, const WebPPicture* const VAR_1,
    int VAR_2, float VAR_3, int* const VAR_4, int* const VAR_5,
    int* const VAR_6, int* const VAR_7) {
  FrameRectangle VAR_8;
  const int VAR_9 = FUNC_2(*VAR_4 + *VAR_6, 0, VAR_1->width);
  const int VAR_10 = FUNC_2(*VAR_4, 0, VAR_1->width - 1);
  const int VAR_11 = FUNC_2(*VAR_5 + *VAR_7, 0, VAR_1->height);
  const int VAR_12 = FUNC_2(*VAR_5, 0, VAR_1->height - 1);
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ||
      VAR_0->width != VAR_1->width ||
      VAR_0->height != VAR_1->height ||
      !VAR_0->use_argb || !VAR_1->use_argb) {
    return 0;
  }
  VAR_8.x_offset_ = VAR_10;
  VAR_8.y_offset_ = VAR_12;
  VAR_8.width_ = FUNC_2(VAR_9 - VAR_10, 0, VAR_1->width - VAR_8.x_offset_);
  VAR_8.height_ = FUNC_2(VAR_11 - VAR_12, 0, VAR_1->height - VAR_8.y_offset_);
  FUNC_0(VAR_0, VAR_1, &VAR_8, VAR_2,
                          VAR_3);
  FUNC_1(&VAR_8);
  *VAR_4 = VAR_8.x_offset_;
  *VAR_5 = VAR_8.y_offset_;
  *VAR_6 = VAR_8.width_;
  *VAR_7 = VAR_8.height_;
  return 1;
}
