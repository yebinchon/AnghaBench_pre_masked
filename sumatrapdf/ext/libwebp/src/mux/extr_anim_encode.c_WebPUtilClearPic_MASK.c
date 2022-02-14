
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_7__ {int height_; int width_; int y_offset_; int x_offset_; } ;
typedef TYPE_2__ FrameRectangle ;


 int FUNC_0 (TYPE_1__* const,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(WebPPicture* const VAR_0,
                             const FrameRectangle* const VAR_1) {
  if (VAR_1 != ((void*)0)) {
    FUNC_0(VAR_0, VAR_1->x_offset_, VAR_1->y_offset_,
                   VAR_1->width_, VAR_1->height_);
  } else {
    FUNC_0(VAR_0, 0, 0, VAR_0->width, VAR_0->height);
  }
}
