
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


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const WebPPicture* const VAR_0,
                                      const WebPPicture* const VAR_1,
                                      const FrameRectangle* const VAR_2) {
  int VAR_3, VAR_4;
  FUNC_0(VAR_0->width == VAR_1->width && VAR_0->height == VAR_1->height);
  FUNC_0(VAR_2->x_offset_ + VAR_2->width_ <= VAR_1->width);
  FUNC_0(VAR_2->y_offset_ + VAR_2->height_ <= VAR_1->height);
  for (VAR_4 = VAR_2->y_offset_; VAR_4 < VAR_2->y_offset_ + VAR_2->height_; ++VAR_4) {
    for (VAR_3 = VAR_2->x_offset_; VAR_3 < VAR_2->x_offset_ + VAR_2->width_; ++VAR_3) {
      const uint32_t VAR_5 = VAR_0->argb[VAR_4 * VAR_0->argb_stride + VAR_3];
      const uint32_t VAR_6 = VAR_1->argb[VAR_4 * VAR_1->argb_stride + VAR_3];
      const uint32_t VAR_7 = VAR_6 >> 24;
      if (VAR_7 != 0xff && VAR_5 != VAR_6) {


        return 0;
      }
    }
  }
  return 1;
}
