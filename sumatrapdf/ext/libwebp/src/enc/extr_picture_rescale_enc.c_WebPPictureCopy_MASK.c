
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_7__ {int y_stride; int width; int height; int uv_stride; int a_stride; int argb_stride; scalar_t__ argb; int const* a; int const* v; int const* u; int const* y; int use_argb; } ;
typedef TYPE_1__ const WebPPicture ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (int const*,int,int const*,int,int,int) ;
 int FUNC_3 (TYPE_1__ const*) ;

int FUNC_4(const WebPPicture* VAR_0, WebPPicture* VAR_1) {
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) return 0;
  if (VAR_0 == VAR_1) return 1;

  FUNC_1(VAR_0, VAR_1);
  if (!FUNC_3(VAR_1)) return 0;

  if (!VAR_0->use_argb) {
    FUNC_2(VAR_0->y, VAR_0->y_stride,
                  VAR_1->y, VAR_1->y_stride, VAR_1->width, VAR_1->height);
    FUNC_2(VAR_0->u, VAR_0->uv_stride, VAR_1->u, VAR_1->uv_stride,
                  FUNC_0(VAR_1->width), FUNC_0(VAR_1->height));
    FUNC_2(VAR_0->v, VAR_0->uv_stride, VAR_1->v, VAR_1->uv_stride,
                  FUNC_0(VAR_1->width), FUNC_0(VAR_1->height));
    if (VAR_1->a != ((void*)0)) {
      FUNC_2(VAR_0->a, VAR_0->a_stride,
                    VAR_1->a, VAR_1->a_stride, VAR_1->width, VAR_1->height);
    }
  } else {
    FUNC_2((const uint8_t*)VAR_0->argb, 4 * VAR_0->argb_stride,
                  (uint8_t*)VAR_1->argb, 4 * VAR_1->argb_stride,
                  4 * VAR_1->width, VAR_1->height);
  }
  return 1;
}
