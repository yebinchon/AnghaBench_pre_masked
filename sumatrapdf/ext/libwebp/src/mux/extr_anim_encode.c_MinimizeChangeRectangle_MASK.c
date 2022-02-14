
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; int argb_stride; int * argb; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_8__ {scalar_t__ x_offset_; scalar_t__ width_; scalar_t__ y_offset_; scalar_t__ height_; } ;
typedef TYPE_2__ FrameRectangle ;
typedef scalar_t__ (* ComparePixelsFunc ) (int const* const,int,int const* const,int,scalar_t__,int const) ;


 scalar_t__ FUNC_0 (int const* const,int,int const* const,int,scalar_t__,int const) ;
 scalar_t__ FUNC_1 (int const* const,int,int const* const,int,scalar_t__,int const) ;
 scalar_t__ FUNC_2 (TYPE_2__* const) ;
 int FUNC_3 (float) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(const WebPPicture* const VAR_0,
                                    const WebPPicture* const VAR_1,
                                    FrameRectangle* const VAR_2,
                                    int VAR_3, float VAR_4) {
  int VAR_5, VAR_6;
  const ComparePixelsFunc VAR_7 =
      VAR_3 ? FUNC_0 : FUNC_1;
  const int VAR_8 = FUNC_3(VAR_4);
  const int VAR_9 = VAR_3 ? 0 : VAR_8;


  FUNC_4(VAR_0->width == VAR_1->width && VAR_0->height == VAR_1->height);
  FUNC_4(VAR_2->x_offset_ + VAR_2->width_ <= VAR_1->width);
  FUNC_4(VAR_2->y_offset_ + VAR_2->height_ <= VAR_1->height);


  for (VAR_5 = VAR_2->x_offset_; VAR_5 < VAR_2->x_offset_ + VAR_2->width_; ++VAR_5) {
    const uint32_t* const VAR_10 =
        &VAR_0->argb[VAR_2->y_offset_ * VAR_0->argb_stride + VAR_5];
    const uint32_t* const VAR_11 =
        &VAR_1->argb[VAR_2->y_offset_ * VAR_1->argb_stride + VAR_5];
    if (VAR_7(VAR_10, VAR_0->argb_stride, VAR_11, VAR_1->argb_stride,
                       VAR_2->height_, VAR_9)) {
      --VAR_2->width_;
      ++VAR_2->x_offset_;
    } else {
      break;
    }
  }
  if (VAR_2->width_ == 0) goto NoChange;


  for (VAR_5 = VAR_2->x_offset_ + VAR_2->width_ - 1; VAR_5 >= VAR_2->x_offset_; --VAR_5) {
    const uint32_t* const VAR_12 =
        &VAR_0->argb[VAR_2->y_offset_ * VAR_0->argb_stride + VAR_5];
    const uint32_t* const VAR_13 =
        &VAR_1->argb[VAR_2->y_offset_ * VAR_1->argb_stride + VAR_5];
    if (VAR_7(VAR_12, VAR_0->argb_stride, VAR_13, VAR_1->argb_stride,
                       VAR_2->height_, VAR_9)) {
      --VAR_2->width_;
    } else {
      break;
    }
  }
  if (VAR_2->width_ == 0) goto NoChange;


  for (VAR_6 = VAR_2->y_offset_; VAR_6 < VAR_2->y_offset_ + VAR_2->height_; ++VAR_6) {
    const uint32_t* const VAR_14 =
        &VAR_0->argb[VAR_6 * VAR_0->argb_stride + VAR_2->x_offset_];
    const uint32_t* const VAR_15 =
        &VAR_1->argb[VAR_6 * VAR_1->argb_stride + VAR_2->x_offset_];
    if (VAR_7(VAR_14, 1, VAR_15, 1, VAR_2->width_,
                       VAR_9)) {
      --VAR_2->height_;
      ++VAR_2->y_offset_;
    } else {
      break;
    }
  }
  if (VAR_2->height_ == 0) goto NoChange;


  for (VAR_6 = VAR_2->y_offset_ + VAR_2->height_ - 1; VAR_6 >= VAR_2->y_offset_; --VAR_6) {
    const uint32_t* const VAR_16 =
        &VAR_0->argb[VAR_6 * VAR_0->argb_stride + VAR_2->x_offset_];
    const uint32_t* const VAR_17 =
        &VAR_1->argb[VAR_6 * VAR_1->argb_stride + VAR_2->x_offset_];
    if (VAR_7(VAR_16, 1, VAR_17, 1, VAR_2->width_,
                       VAR_9)) {
      --VAR_2->height_;
    } else {
      break;
    }
  }
  if (VAR_2->height_ == 0) goto NoChange;

  if (FUNC_2(VAR_2)) {
 NoChange:
    VAR_2->x_offset_ = 0;
    VAR_2->y_offset_ = 0;
    VAR_2->width_ = 0;
    VAR_2->height_ = 0;
  }
}
