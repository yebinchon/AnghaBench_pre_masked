
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int width; int height; int argb_stride; int * argb; int use_argb; } ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int const*,int const*,int,int,float,int ,TYPE_1__* const) ;
 int FUNC_1 (int const*,int const,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int const*,int const*,int const*,int const*,int const,int *) ;
 int FUNC_5 (int const*,int const*,int const*,int const,int,int *) ;
 int FUNC_6 (TYPE_1__* const) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int const*,int const) ;

__attribute__((used)) static int FUNC_9(WebPPicture* const VAR_1,
                  const uint8_t* VAR_2, int VAR_3,
                  int VAR_4, int VAR_5, int VAR_6) {
  int VAR_7;

  const uint8_t* VAR_8 = VAR_2 + (VAR_5 ? 2 : 0);
  const uint8_t* VAR_9 = VAR_2 + 1;
  const uint8_t* VAR_10 = VAR_2 + (VAR_5 ? 0 : 2);
  const int VAR_11 = VAR_1->width;
  const int VAR_12 = VAR_1->height;

  if (!VAR_1->use_argb) {
    const uint8_t* VAR_13 = VAR_6 ? VAR_2 + 3 : ((void*)0);
    return FUNC_0(VAR_8, VAR_9, VAR_10, VAR_13, VAR_4, VAR_3,
                              0.f , 0, VAR_1);
  }
  if (!FUNC_6(VAR_1)) return 0;

  FUNC_2();
  FUNC_3();

  if (VAR_6) {

    uint32_t* VAR_14 = VAR_1->argb;
    const int VAR_15 = (VAR_0 == 3) && VAR_5;
    FUNC_7(VAR_4 == 4);
    if (VAR_15) {
      for (VAR_7 = 0; VAR_7 < VAR_12; ++VAR_7) {
        FUNC_8(VAR_14, VAR_2, VAR_11 * 4);
        VAR_2 += VAR_3;
        VAR_14 += VAR_1->argb_stride;
      }
    } else {
      for (VAR_7 = 0; VAR_7 < VAR_12; ++VAR_7) {
        FUNC_1((const uint32_t*)VAR_2, VAR_11, (uint8_t*)VAR_14);

        VAR_2 += VAR_3;
        VAR_14 += VAR_1->argb_stride;
      }
    }
  } else {
    uint32_t* VAR_16 = VAR_1->argb;
    FUNC_7(VAR_4 >= 3);
    for (VAR_7 = 0; VAR_7 < VAR_12; ++VAR_7) {
      FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11, VAR_4, VAR_16);
      VAR_8 += VAR_3;
      VAR_9 += VAR_3;
      VAR_10 += VAR_3;
      VAR_16 += VAR_1->argb_stride;
    }
  }
  return 1;
}
