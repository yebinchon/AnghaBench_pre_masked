
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int* rgba; int stride; } ;
typedef TYPE_3__ WebPRGBABuffer ;
struct TYPE_11__ {TYPE_5__* scaler_a; TYPE_2__* output; } ;
typedef TYPE_4__ WebPDecParams ;
typedef int WEBP_CSP_MODE ;
struct TYPE_12__ {int dst_width; int* dst; } ;
struct TYPE_8__ {TYPE_3__ RGBA; } ;
struct TYPE_9__ {int height; int colorspace; TYPE_1__ u; } ;


 int FUNC_0 (int* const,int const,int,int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(WebPDecParams* const VAR_0, int VAR_1,
                               int VAR_2) {
  const WebPRGBABuffer* const VAR_3 = &VAR_0->output->u.RGBA;
  uint8_t* const VAR_4 = VAR_3->rgba + VAR_1 * VAR_3->stride;



  uint8_t* VAR_5 = VAR_4 + 1;

  int VAR_6 = 0;
  const WEBP_CSP_MODE VAR_7 = VAR_0->output->colorspace;
  const int VAR_8 = VAR_0->scaler_a->dst_width;
  const int VAR_9 = FUNC_1(VAR_7);
  uint32_t VAR_10 = 0x0f;

  while (FUNC_3(VAR_0->scaler_a) &&
         VAR_6 < VAR_2) {
    int VAR_11;
    FUNC_4(VAR_1 + VAR_6 < VAR_0->output->height);
    FUNC_2(VAR_0->scaler_a);
    for (VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11) {

      const uint32_t VAR_12 = VAR_0->scaler_a->dst[VAR_11] >> 4;
      VAR_5[2 * VAR_11] = (VAR_5[2 * VAR_11] & 0xf0) | VAR_12;
      VAR_10 &= VAR_12;
    }
    VAR_5 += VAR_3->stride;
    ++VAR_6;
  }
  if (VAR_9 && VAR_10 != 0x0f) {
    FUNC_0(VAR_4, VAR_8, VAR_6, VAR_3->stride);
  }
  return VAR_6;
}
