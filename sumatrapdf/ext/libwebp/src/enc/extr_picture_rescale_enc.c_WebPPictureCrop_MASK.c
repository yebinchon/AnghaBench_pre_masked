
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_8__ {int width; int height; int y_stride; int uv_stride; int a_stride; int argb_stride; scalar_t__ argb; int const* a; int const* v; int const* u; int const* y; int use_argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (TYPE_1__*,int*,int*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int const* const,int,int const*,int,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(WebPPicture* VAR_0,
                    int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  WebPPicture VAR_5;

  if (VAR_0 == ((void*)0)) return 0;
  if (!FUNC_0(VAR_0, &VAR_1, &VAR_2, VAR_3, VAR_4)) return 0;

  FUNC_2(VAR_0, &VAR_5);
  VAR_5.width = VAR_3;
  VAR_5.height = VAR_4;
  if (!FUNC_4(&VAR_5)) return 0;

  if (!VAR_0->use_argb) {
    const int VAR_6 = VAR_2 * VAR_0->y_stride + VAR_1;
    const int VAR_7 = (VAR_2 / 2) * VAR_0->uv_stride + VAR_1 / 2;
    FUNC_3(VAR_0->y + VAR_6, VAR_0->y_stride,
                  VAR_5.y, VAR_5.y_stride, VAR_3, VAR_4);
    FUNC_3(VAR_0->u + VAR_7, VAR_0->uv_stride,
                  VAR_5.u, VAR_5.uv_stride, FUNC_1(VAR_3), FUNC_1(VAR_4));
    FUNC_3(VAR_0->v + VAR_7, VAR_0->uv_stride,
                  VAR_5.v, VAR_5.uv_stride, FUNC_1(VAR_3), FUNC_1(VAR_4));

    if (VAR_5.a != ((void*)0)) {
      const int VAR_8 = VAR_2 * VAR_0->a_stride + VAR_1;
      FUNC_3(VAR_0->a + VAR_8, VAR_0->a_stride,
                    VAR_5.a, VAR_5.a_stride, VAR_3, VAR_4);
    }
  } else {
    const uint8_t* const VAR_9 =
        (const uint8_t*)(VAR_0->argb + VAR_2 * VAR_0->argb_stride + VAR_1);
    FUNC_3(VAR_9, VAR_0->argb_stride * 4, (uint8_t*)VAR_5.argb,
                  VAR_5.argb_stride * 4, VAR_3 * 4, VAR_4);
  }
  FUNC_5(VAR_0);
  *VAR_0 = VAR_5;
  return 1;
}
