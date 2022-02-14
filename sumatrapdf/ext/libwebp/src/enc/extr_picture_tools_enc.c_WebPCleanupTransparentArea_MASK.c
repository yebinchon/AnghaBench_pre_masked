
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int width; int height; int argb_stride; int y_stride; int uv_stride; int a_stride; int* y; int* u; int* v; int* a; int * argb; scalar_t__ use_argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int*,int,int const,int const) ;
 int FUNC_1 (int *,int ,int,int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 int VAR_0 ;
 int const VAR_1 ;
 scalar_t__ FUNC_3 (int const*,int const,int*,int const,int const,int const) ;

void FUNC_4(WebPPicture* VAR_2) {
  int VAR_3, VAR_4, VAR_5, VAR_6;
  if (VAR_2 == ((void*)0)) return;
  VAR_5 = VAR_2->width / VAR_0;
  VAR_6 = VAR_2->height / VAR_0;


  if (VAR_2->use_argb) {
    uint32_t VAR_7 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {
      int VAR_8 = 1;
      for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3) {
        const int VAR_9 = (VAR_4 * VAR_2->argb_stride + VAR_3) * VAR_0;
        if (FUNC_2(VAR_2->argb + VAR_9, VAR_2->argb_stride, VAR_0)) {
          if (VAR_8) {
            VAR_7 = VAR_2->argb[VAR_9];
            VAR_8 = 0;
          }
          FUNC_1(VAR_2->argb + VAR_9, VAR_7, VAR_2->argb_stride, VAR_0);
        } else {
          VAR_8 = 1;
        }
      }
    }
  } else {
    const int VAR_10 = VAR_2->width;
    const int VAR_11 = VAR_2->height;
    const int VAR_12 = VAR_2->y_stride;
    const int VAR_13 = VAR_2->uv_stride;
    const int VAR_14 = VAR_2->a_stride;
    uint8_t* VAR_15 = VAR_2->y;
    uint8_t* VAR_16 = VAR_2->u;
    uint8_t* VAR_17 = VAR_2->v;
    const uint8_t* VAR_18 = VAR_2->a;
    int VAR_19[3] = { 0 };
    if (VAR_18 == ((void*)0) || VAR_15 == ((void*)0) || VAR_16 == ((void*)0) || VAR_17 == ((void*)0)) {
      return;
    }
    for (VAR_4 = 0; VAR_4 + VAR_0 <= VAR_11; VAR_4 += VAR_0) {
      int VAR_20 = 1;
      for (VAR_3 = 0; VAR_3 + VAR_0 <= VAR_10; VAR_3 += VAR_0) {
        if (FUNC_3(VAR_18 + VAR_3, VAR_14, VAR_15 + VAR_3, VAR_12,
                          VAR_0, VAR_0)) {
          if (VAR_20) {
            VAR_19[0] = VAR_15[VAR_3];
            VAR_19[1] = VAR_16[VAR_3 >> 1];
            VAR_19[2] = VAR_17[VAR_3 >> 1];
            VAR_20 = 0;
          }
          FUNC_0(VAR_15 + VAR_3, VAR_19[0], VAR_12, VAR_0);
          FUNC_0(VAR_16 + (VAR_3 >> 1), VAR_19[1], VAR_13, VAR_1);
          FUNC_0(VAR_17 + (VAR_3 >> 1), VAR_19[2], VAR_13, VAR_1);
        } else {
          VAR_20 = 1;
        }
      }
      if (VAR_3 < VAR_10) {
        FUNC_3(VAR_18 + VAR_3, VAR_14, VAR_15 + VAR_3, VAR_12,
                      VAR_10 - VAR_3, VAR_0);
      }
      VAR_18 += VAR_0 * VAR_14;
      VAR_15 += VAR_0 * VAR_12;
      VAR_16 += VAR_1 * VAR_13;
      VAR_17 += VAR_1 * VAR_13;
    }
    if (VAR_4 < VAR_11) {
      const int VAR_21 = VAR_11 - VAR_4;
      for (VAR_3 = 0; VAR_3 + VAR_0 <= VAR_10; VAR_3 += VAR_0) {
        FUNC_3(VAR_18 + VAR_3, VAR_14, VAR_15 + VAR_3, VAR_12,
                      VAR_0, VAR_21);
      }
      if (VAR_3 < VAR_10) {
        FUNC_3(VAR_18 + VAR_3, VAR_14, VAR_15 + VAR_3, VAR_12,
                      VAR_10 - VAR_3, VAR_21);
      }
    }
  }
}
