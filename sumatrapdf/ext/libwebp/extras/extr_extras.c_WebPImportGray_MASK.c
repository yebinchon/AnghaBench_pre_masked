
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int width; int height; int y_stride; int uv_stride; scalar_t__ v; scalar_t__ u; scalar_t__ y; int colorspace; } ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int const*,int) ;
 int FUNC_2 (scalar_t__,int,int) ;

int FUNC_3(const uint8_t* VAR_1, WebPPicture* VAR_2) {
  int VAR_3, VAR_4, VAR_5;
  if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0)) return 0;
  VAR_2->colorspace = VAR_0;
  if (!FUNC_0(VAR_2)) return 0;
  VAR_4 = VAR_2->width;
  VAR_5 = (VAR_4 + 1) >> 1;
  for (VAR_3 = 0; VAR_3 < VAR_2->height; ++VAR_3) {
    FUNC_1(VAR_2->y + VAR_3 * VAR_2->y_stride, VAR_1, VAR_4);
    VAR_1 += VAR_4;
    if ((VAR_3 & 1) == 0) {
      FUNC_2(VAR_2->u + (VAR_3 >> 1) * VAR_2->uv_stride, 128, VAR_5);
      FUNC_2(VAR_2->v + (VAR_3 >> 1) * VAR_2->uv_stride, 128, VAR_5);
    }
  }
  return 1;
}
