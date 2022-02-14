
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WebPPicture ;
struct TYPE_6__ {int width_; int height_; scalar_t__ x_offset_; scalar_t__ y_offset_; } ;
typedef TYPE_1__ FrameRectangle ;


 scalar_t__ FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int const* const,int const* const,TYPE_1__* const,int,float) ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int const* const,scalar_t__,scalar_t__,int,int,int * const) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const WebPPicture* const VAR_0,
                      const WebPPicture* const VAR_1, int VAR_2,
                      int VAR_3, int VAR_4,
                      int VAR_5, float VAR_6,
                      FrameRectangle* const VAR_7,
                      WebPPicture* const VAR_8) {
  if (!VAR_2 || VAR_3) {


    FUNC_1(VAR_0, VAR_1, VAR_7,
                            VAR_5, VAR_6);
  }

  if (FUNC_0(VAR_7)) {
    if (VAR_4) {
      return 1;
    } else {
      VAR_7->width_ = 1;
      VAR_7->height_ = 1;
      FUNC_4(VAR_7->x_offset_ == 0);
      FUNC_4(VAR_7->y_offset_ == 0);
    }
  }

  FUNC_2(VAR_7);
  return FUNC_3(VAR_1, VAR_7->x_offset_, VAR_7->y_offset_,
                         VAR_7->width_, VAR_7->height_, VAR_8);
}
