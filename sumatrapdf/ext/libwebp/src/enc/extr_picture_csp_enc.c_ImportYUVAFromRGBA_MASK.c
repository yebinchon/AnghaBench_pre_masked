
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int width; int height; int a_stride; int y_stride; int uv_stride; int * a; int * v; int * u; int * y; scalar_t__ use_argb; int colorspace; } ;
typedef TYPE_1__ WebPPicture ;
typedef int VP8Random ;


 int FUNC_0 (int const*,int const*,int const*,int,int,int * const,int const) ;
 int FUNC_1 (int const*,int const*,int const*,int const*,int,int * const,int const) ;
 int FUNC_2 (int const*,int const,int const,int,int) ;
 int FUNC_3 (int const*,int const*,int const*,int,int *,int const,int *) ;
 int FUNC_4 (int * const,int *,int *,int const,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int const*,int const*,int const*,int,int,TYPE_1__* const) ;
 int FUNC_8 (int *,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int const*,int *,int const) ;
 int FUNC_10 (int const*,int *,int const) ;
 int FUNC_11 (int * const,int *,int *,int const) ;
 int FUNC_12 (int const*,int,int const,int const,int *,int) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_1__* const,int const,int const) ;
 int FUNC_15 (int * const) ;
 scalar_t__ FUNC_16 (int,int) ;
 int FUNC_17 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;

__attribute__((used)) static int FUNC_18(const uint8_t* VAR_5,
                              const uint8_t* VAR_6,
                              const uint8_t* VAR_7,
                              const uint8_t* VAR_8,
                              int VAR_9,
                              int VAR_10,
                              float VAR_11,
                              int VAR_12,
                              WebPPicture* const VAR_13) {
  int VAR_14;
  const int VAR_15 = VAR_13->width;
  const int VAR_16 = VAR_13->height;
  const int VAR_17 = FUNC_2(VAR_8, VAR_15, VAR_16, VAR_9, VAR_10);
  const int VAR_18 = (VAR_5 < VAR_7);

  VAR_13->colorspace = VAR_17 ? VAR_1 : VAR_0;
  VAR_13->use_argb = 0;


  if (VAR_15 < VAR_4 ||
      VAR_16 < VAR_4) {
    VAR_12 = 0;
  }

  if (!FUNC_14(VAR_13, VAR_15, VAR_16)) {
    return 0;
  }
  if (VAR_17) {
    FUNC_17(VAR_9 == 4);



  }

  if (VAR_12) {
    FUNC_6();
    if (!FUNC_7(VAR_5, VAR_6, VAR_7, VAR_9, VAR_10, VAR_13)) {
      return 0;
    }
    if (VAR_17) {
      FUNC_12(VAR_8, VAR_10, VAR_15, VAR_16,
                       VAR_13->a, VAR_13->a_stride);
    }
  } else {
    const int VAR_19 = (VAR_15 + 1) >> 1;
    int VAR_20 = (VAR_9 == 3);

    uint16_t* const VAR_21 =
        (uint16_t*)FUNC_16(4 * VAR_19, sizeof(*VAR_21));
    uint8_t* VAR_22 = VAR_13->y;
    uint8_t* VAR_23 = VAR_13->u;
    uint8_t* VAR_24 = VAR_13->v;
    uint8_t* VAR_25 = VAR_13->a;

    VP8Random VAR_26;
    VP8Random* VAR_27 = ((void*)0);
    if (VAR_11 > 0.) {
      FUNC_8(&VAR_26, VAR_11);
      VAR_27 = &VAR_26;
      VAR_20 = 0;
    }
    FUNC_13();
    FUNC_5();

    if (VAR_21 == ((void*)0)) return 0;


    for (VAR_14 = 0; VAR_14 < (VAR_16 >> 1); ++VAR_14) {
      int VAR_28 = VAR_17;
      if (VAR_20) {
        if (VAR_18) {
          FUNC_10(VAR_5, VAR_22, VAR_15);
          FUNC_10(VAR_5 + VAR_10,
                              VAR_22 + VAR_13->y_stride, VAR_15);
        } else {
          FUNC_9(VAR_7, VAR_22, VAR_15);
          FUNC_9(VAR_7 + VAR_10,
                              VAR_22 + VAR_13->y_stride, VAR_15);
        }
      } else {
        FUNC_3(VAR_5, VAR_6, VAR_7, VAR_9, VAR_22, VAR_15, VAR_27);
        FUNC_3(VAR_5 + VAR_10,
                      VAR_6 + VAR_10,
                      VAR_7 + VAR_10, VAR_9,
                      VAR_22 + VAR_13->y_stride, VAR_15, VAR_27);
      }
      VAR_22 += 2 * VAR_13->y_stride;
      if (VAR_17) {
        VAR_28 &= !FUNC_12(VAR_8, VAR_10, VAR_15, 2,
                                             VAR_25, VAR_13->a_stride);
        VAR_25 += 2 * VAR_13->a_stride;
      }

      if (!VAR_28) {
        FUNC_0(VAR_5, VAR_6, VAR_7, VAR_9, VAR_10, VAR_21, VAR_15);
      } else {
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, VAR_21, VAR_15);
      }

      if (VAR_27 == ((void*)0)) {
        FUNC_11(VAR_21, VAR_23, VAR_24, VAR_19);
      } else {
        FUNC_4(VAR_21, VAR_23, VAR_24, VAR_19, VAR_27);
      }
      VAR_23 += VAR_13->uv_stride;
      VAR_24 += VAR_13->uv_stride;
      VAR_5 += 2 * VAR_10;
      VAR_7 += 2 * VAR_10;
      VAR_6 += 2 * VAR_10;
      if (VAR_17) VAR_8 += 2 * VAR_10;
    }
    if (VAR_16 & 1) {
      int VAR_29 = VAR_17;
      if (VAR_20) {
        if (VAR_5 < VAR_7) {
          FUNC_10(VAR_5, VAR_22, VAR_15);
        } else {
          FUNC_9(VAR_7, VAR_22, VAR_15);
        }
      } else {
        FUNC_3(VAR_5, VAR_6, VAR_7, VAR_9, VAR_22, VAR_15, VAR_27);
      }
      if (VAR_29) {
        VAR_29 &= !FUNC_12(VAR_8, 0, VAR_15, 1, VAR_25, 0);
      }

      if (!VAR_29) {

        FUNC_0(VAR_5, VAR_6, VAR_7, VAR_9, 0,
                      VAR_21, VAR_15);
      } else {
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, 0,
                       VAR_21, VAR_15);
      }
      if (VAR_27 == ((void*)0)) {
        FUNC_11(VAR_21, VAR_23, VAR_24, VAR_19);
      } else {
        FUNC_4(VAR_21, VAR_23, VAR_24, VAR_19, VAR_27);
      }
    }
    FUNC_15(VAR_21);
  }
  return 1;
}
