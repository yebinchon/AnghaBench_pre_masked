
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int rescaler_t ;
struct TYPE_9__ {int width; int height; int a_stride; int y_stride; int uv_stride; int argb_stride; scalar_t__ argb; int const* v; int const* u; int const* y; int const* a; int use_argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int const*,int,int,int,int const*,int,int,int,int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int,int,int*,int*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned long long,int) ;

int FUNC_11(WebPPicture* VAR_0, int VAR_1, int VAR_2) {
  WebPPicture VAR_3;
  int VAR_4, VAR_5;
  rescaler_t* VAR_6;

  if (VAR_0 == ((void*)0)) return 0;
  VAR_4 = VAR_0->width;
  VAR_5 = VAR_0->height;
  if (!FUNC_8(
          VAR_4, VAR_5, &VAR_1, &VAR_2)) {
    return 0;
  }

  FUNC_3(VAR_0, &VAR_3);
  VAR_3.width = VAR_1;
  VAR_3.height = VAR_2;
  if (!FUNC_6(&VAR_3)) return 0;

  if (!VAR_0->use_argb) {
    VAR_6 = (rescaler_t*)FUNC_10(2ULL * VAR_1, sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
      FUNC_7(&VAR_3);
      return 0;
    }

    if (VAR_0->a != ((void*)0)) {
      FUNC_5();
      FUNC_4(VAR_0->a, VAR_4, VAR_5, VAR_0->a_stride,
                   VAR_3.a, VAR_1, VAR_2, VAR_3.a_stride, VAR_6, 1);
    }



    FUNC_1(VAR_0, 0);
    FUNC_4(VAR_0->y, VAR_4, VAR_5, VAR_0->y_stride,
                 VAR_3.y, VAR_1, VAR_2, VAR_3.y_stride, VAR_6, 1);
    FUNC_1(&VAR_3, 1);

    FUNC_4(VAR_0->u,
                 FUNC_2(VAR_4), FUNC_2(VAR_5), VAR_0->uv_stride,
                 VAR_3.u,
                 FUNC_2(VAR_1), FUNC_2(VAR_2), VAR_3.uv_stride, VAR_6, 1);
    FUNC_4(VAR_0->v,
                 FUNC_2(VAR_4), FUNC_2(VAR_5), VAR_0->uv_stride,
                 VAR_3.v,
                 FUNC_2(VAR_1), FUNC_2(VAR_2), VAR_3.uv_stride, VAR_6, 1);
  } else {
    VAR_6 = (rescaler_t*)FUNC_10(2ULL * VAR_1 * 4, sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
      FUNC_7(&VAR_3);
      return 0;
    }



    FUNC_5();
    FUNC_0(VAR_0, 0);
    FUNC_4((const uint8_t*)VAR_0->argb, VAR_4, VAR_5,
                 VAR_0->argb_stride * 4,
                 (uint8_t*)VAR_3.argb, VAR_1, VAR_2,
                 VAR_3.argb_stride * 4,
                 VAR_6, 4);
    FUNC_0(&VAR_3, 1);
  }
  FUNC_7(VAR_0);
  FUNC_9(VAR_6);
  *VAR_0 = VAR_3;
  return 1;
}
