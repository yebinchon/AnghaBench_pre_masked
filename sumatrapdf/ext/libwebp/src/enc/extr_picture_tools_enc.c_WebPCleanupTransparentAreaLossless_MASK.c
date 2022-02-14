
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int width; int height; int* argb; int argb_stride; scalar_t__ use_argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int) ;

void FUNC_1(WebPPicture* const VAR_0) {
  int VAR_1, VAR_2, VAR_3, VAR_4;
  uint32_t* VAR_5;
  FUNC_0(VAR_0 != ((void*)0) && VAR_0->use_argb);
  VAR_3 = VAR_0->width;
  VAR_4 = VAR_0->height;
  VAR_5 = VAR_0->argb;

  for (VAR_2 = 0; VAR_2 < VAR_4; ++VAR_2) {
    for (VAR_1 = 0; VAR_1 < VAR_3; ++VAR_1) {
      if ((VAR_5[VAR_1] & 0xff000000) == 0) {
        VAR_5[VAR_1] = 0x00000000;
      }
    }
    VAR_5 += VAR_0->argb_stride;
  }
}
