
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int a_stride; int v_stride; int u_stride; int y_stride; int * a; int * v; int * u; int * y; } ;
typedef TYPE_2__ WebPYUVABuffer ;
struct TYPE_5__ {TYPE_2__ YUVA; } ;
struct TYPE_7__ {int width; int height; TYPE_1__ u; } ;
typedef TYPE_3__ WebPDecBuffer ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int const,int const) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int const*,int const,int,int *) ;

int FUNC_3(FILE* VAR_0, const WebPDecBuffer* const VAR_1) {
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
    return 0;
  } else {
    const int VAR_2 = VAR_1->width;
    const int VAR_3 = VAR_1->height;
    const WebPYUVABuffer* const VAR_4 = &VAR_1->u.YUVA;
    const uint8_t* VAR_5 = VAR_4->y;
    const uint8_t* VAR_6 = VAR_4->u;
    const uint8_t* VAR_7 = VAR_4->v;
    const uint8_t* VAR_8 = VAR_4->a;
    const int VAR_9 = (VAR_2 + 1) / 2;
    const int VAR_10 = (VAR_3 + 1) / 2;
    const int VAR_11 = (VAR_8 != ((void*)0)) ? VAR_3 : 0;
    int VAR_12 = 1;
    int VAR_13;

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) return 0;

    FUNC_0(VAR_0, "P5\n%d %d\n255\n",
            (VAR_2 + 1) & ~1, VAR_3 + VAR_10 + VAR_11);
    for (VAR_13 = 0; VAR_12 && VAR_13 < VAR_3; ++VAR_13) {
      VAR_12 &= (FUNC_2(VAR_5, VAR_2, 1, VAR_0) == 1);
      if (VAR_2 & 1) FUNC_1(0, VAR_0);
      VAR_5 += VAR_4->y_stride;
    }
    for (VAR_13 = 0; VAR_12 && VAR_13 < VAR_10; ++VAR_13) {
      VAR_12 &= (FUNC_2(VAR_6, VAR_9, 1, VAR_0) == 1);
      VAR_12 &= (FUNC_2(VAR_7, VAR_9, 1, VAR_0) == 1);
      VAR_6 += VAR_4->u_stride;
      VAR_7 += VAR_4->v_stride;
    }
    for (VAR_13 = 0; VAR_12 && VAR_13 < VAR_11; ++VAR_13) {
      VAR_12 &= (FUNC_2(VAR_8, VAR_2, 1, VAR_0) == 1);
      if (VAR_2 & 1) FUNC_1(0, VAR_0);
      VAR_8 += VAR_4->a_stride;
    }
    return VAR_12;
  }
}
