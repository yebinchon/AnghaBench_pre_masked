
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {int* rgba; int const stride; } ;
typedef TYPE_3__ WebPRGBABuffer ;
struct TYPE_12__ {TYPE_2__* output; } ;
typedef TYPE_4__ WebPDecParams ;
typedef int WEBP_CSP_MODE ;
struct TYPE_13__ {int* a; int mb_w; int width; } ;
typedef TYPE_5__ VP8Io ;
struct TYPE_9__ {TYPE_3__ RGBA; } ;
struct TYPE_10__ {TYPE_1__ u; int colorspace; } ;


 int FUNC_0 (TYPE_5__ const* const,int const**,int*) ;
 int FUNC_1 (int* const,int const,int,int const) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const VP8Io* const VAR_0, WebPDecParams* const VAR_1,
                             int VAR_2) {
  const uint8_t* VAR_3 = VAR_0->a;
  if (VAR_3 != ((void*)0)) {
    const int VAR_4 = VAR_0->mb_w;
    const WEBP_CSP_MODE VAR_5 = VAR_1->output->colorspace;
    const WebPRGBABuffer* const VAR_6 = &VAR_1->output->u.RGBA;
    int VAR_7;
    const int VAR_8 = FUNC_0(VAR_0, &VAR_3, &VAR_7);
    uint8_t* const VAR_9 = VAR_6->rgba + VAR_8 * VAR_6->stride;



    uint8_t* VAR_10 = VAR_9 + 1;

    uint32_t VAR_11 = 0x0f;
    int VAR_12, VAR_13;
    for (VAR_13 = 0; VAR_13 < VAR_7; ++VAR_13) {
      for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {

        const uint32_t VAR_14 = VAR_3[VAR_12] >> 4;
        VAR_10[2 * VAR_12] = (VAR_10[2 * VAR_12] & 0xf0) | VAR_14;
        VAR_11 &= VAR_14;
      }
      VAR_3 += VAR_0->width;
      VAR_10 += VAR_6->stride;
    }
    (void)VAR_2;
    FUNC_3(VAR_2 == VAR_7);
    if (VAR_11 != 0x0f && FUNC_2(VAR_5)) {
      FUNC_1(VAR_9, VAR_4, VAR_7, VAR_6->stride);
    }
  }
  return 0;
}
