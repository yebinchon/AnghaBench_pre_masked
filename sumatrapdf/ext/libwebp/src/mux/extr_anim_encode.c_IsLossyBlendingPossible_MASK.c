
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; int* argb; int argb_stride; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_7__ {scalar_t__ x_offset_; scalar_t__ width_; scalar_t__ y_offset_; scalar_t__ height_; } ;
typedef TYPE_2__ FrameRectangle ;


 int FUNC_0 (int const,int const,int const) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const WebPPicture* const VAR_0,
                                   const WebPPicture* const VAR_1,
                                   const FrameRectangle* const VAR_2,
                                   float VAR_3) {
  const int VAR_4 = FUNC_1(VAR_3);
  int VAR_5, VAR_6;
  FUNC_2(VAR_0->width == VAR_1->width && VAR_0->height == VAR_1->height);
  FUNC_2(VAR_2->x_offset_ + VAR_2->width_ <= VAR_1->width);
  FUNC_2(VAR_2->y_offset_ + VAR_2->height_ <= VAR_1->height);
  for (VAR_6 = VAR_2->y_offset_; VAR_6 < VAR_2->y_offset_ + VAR_2->height_; ++VAR_6) {
    for (VAR_5 = VAR_2->x_offset_; VAR_5 < VAR_2->x_offset_ + VAR_2->width_; ++VAR_5) {
      const uint32_t VAR_7 = VAR_0->argb[VAR_6 * VAR_0->argb_stride + VAR_5];
      const uint32_t VAR_8 = VAR_1->argb[VAR_6 * VAR_1->argb_stride + VAR_5];
      const uint32_t VAR_9 = VAR_8 >> 24;
      if (VAR_9 != 0xff &&
          !FUNC_0(VAR_7, VAR_8, VAR_4)) {


        return 0;
      }
    }
  }
  return 1;
}
