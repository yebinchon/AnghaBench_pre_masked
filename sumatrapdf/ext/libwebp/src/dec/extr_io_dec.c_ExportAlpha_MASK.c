
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
struct TYPE_10__ {int stride; int * rgba; } ;
typedef TYPE_3__ WebPRGBABuffer ;
struct TYPE_11__ {TYPE_5__* scaler_a; TYPE_2__* output; } ;
typedef TYPE_4__ WebPDecParams ;
typedef scalar_t__ WEBP_CSP_MODE ;
struct TYPE_12__ {int dst_width; int dst; } ;
struct TYPE_8__ {TYPE_3__ RGBA; } ;
struct TYPE_9__ {scalar_t__ colorspace; int height; TYPE_1__ u; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (int * const,int const,int const,int,int) ;
 int FUNC_1 (int ,int ,int const,int,int *,int ) ;
 int FUNC_2 (scalar_t__ const) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(WebPDecParams* const VAR_2, int VAR_3, int VAR_4) {
  const WebPRGBABuffer* const VAR_5 = &VAR_2->output->u.RGBA;
  uint8_t* const VAR_6 = VAR_5->rgba + VAR_3 * VAR_5->stride;
  const WEBP_CSP_MODE VAR_7 = VAR_2->output->colorspace;
  const int VAR_8 =
      (VAR_7 == VAR_0 || VAR_7 == VAR_1);
  uint8_t* VAR_9 = VAR_6 + (VAR_8 ? 0 : 3);
  int VAR_10 = 0;
  const int VAR_11 = FUNC_2(VAR_7);
  uint32_t VAR_12 = 0;
  const int VAR_13 = VAR_2->scaler_a->dst_width;

  while (FUNC_4(VAR_2->scaler_a) &&
         VAR_10 < VAR_4) {
    FUNC_5(VAR_3 + VAR_10 < VAR_2->output->height);
    FUNC_3(VAR_2->scaler_a);
    VAR_12 |= FUNC_1(VAR_2->scaler_a->dst, 0, VAR_13, 1, VAR_9, 0);
    VAR_9 += VAR_5->stride;
    ++VAR_10;
  }
  if (VAR_11 && VAR_12) {
    FUNC_0(VAR_6, VAR_8,
                           VAR_13, VAR_10, VAR_5->stride);
  }
  return VAR_10;
}
