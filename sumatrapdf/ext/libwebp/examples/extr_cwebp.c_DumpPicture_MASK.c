
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int width; int height; int a_stride; int uv_stride; int y_stride; int * a; int * v; int * u; int * y; } ;
typedef TYPE_1__ WebPPicture ;
typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const* const) ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int * const,char*,int const,int const) ;
 int FUNC_4 (int ,int * const) ;
 int FUNC_5 (int const*,int const,int,int * const) ;

__attribute__((used)) static int FUNC_6(const WebPPicture* const VAR_0, const char* VAR_1) {
  int VAR_2;
  const int VAR_3 = (VAR_0->width + 1) / 2;
  const int VAR_4 = (VAR_0->height + 1) / 2;
  const int VAR_5 = (VAR_0->width + 1) & ~1;
  const uint8_t* VAR_6 = VAR_0->y;
  const uint8_t* VAR_7 = VAR_0->u;
  const uint8_t* VAR_8 = VAR_0->v;
  const uint8_t* VAR_9 = VAR_0->a;
  const int VAR_10 =
      FUNC_1(VAR_0) ? VAR_0->height : 0;
  const int VAR_11 = VAR_0->height + VAR_4 + VAR_10;
  FILE* const VAR_12 = FUNC_0(VAR_1, "wb");
  if (VAR_12 == ((void*)0)) return 0;
  FUNC_3(VAR_12, "P5\n%d %d\n255\n", VAR_5, VAR_11);
  for (VAR_2 = 0; VAR_2 < VAR_0->height; ++VAR_2) {
    if (FUNC_5(VAR_6, VAR_0->width, 1, VAR_12) != 1) return 0;
    if (VAR_0->width & 1) FUNC_4(0, VAR_12);
    VAR_6 += VAR_0->y_stride;
  }
  for (VAR_2 = 0; VAR_2 < VAR_4; ++VAR_2) {
    if (FUNC_5(VAR_7, VAR_3, 1, VAR_12) != 1) return 0;
    if (FUNC_5(VAR_8, VAR_3, 1, VAR_12) != 1) return 0;
    VAR_7 += VAR_0->uv_stride;
    VAR_8 += VAR_0->uv_stride;
  }
  for (VAR_2 = 0; VAR_2 < VAR_10; ++VAR_2) {
    if (FUNC_5(VAR_9, VAR_0->width, 1, VAR_12) != 1) return 0;
    if (VAR_0->width & 1) FUNC_4(0, VAR_12);
    VAR_9 += VAR_0->a_stride;
  }
  FUNC_2(VAR_12);
  return 1;
}
