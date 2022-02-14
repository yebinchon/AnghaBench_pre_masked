
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
struct TYPE_11__ {int const stride; int * rgba; } ;
typedef TYPE_3__ WebPRGBABuffer ;
struct TYPE_12__ {TYPE_2__* output; } ;
typedef TYPE_4__ WebPDecParams ;
typedef scalar_t__ WEBP_CSP_MODE ;
struct TYPE_13__ {int mb_w; int width; int * a; } ;
typedef TYPE_5__ VP8Io ;
struct TYPE_9__ {TYPE_3__ RGBA; } ;
struct TYPE_10__ {scalar_t__ colorspace; TYPE_1__ u; } ;


 int FUNC_0 (TYPE_5__ const* const,int const**,int*) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_1 (int * const,int const,int const,int,int const) ;
 int FUNC_2 (int const*,int ,int const,int,int * const,int const) ;
 scalar_t__ FUNC_3 (scalar_t__ const) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const VP8Io* const VAR_2, WebPDecParams* const VAR_3,
                        int VAR_4) {
  const uint8_t* VAR_5 = VAR_2->a;
  if (VAR_5 != ((void*)0)) {
    const int VAR_6 = VAR_2->mb_w;
    const WEBP_CSP_MODE VAR_7 = VAR_3->output->colorspace;
    const int VAR_8 =
        (VAR_7 == VAR_0 || VAR_7 == VAR_1);
    const WebPRGBABuffer* const VAR_9 = &VAR_3->output->u.RGBA;
    int VAR_10;
    const int VAR_11 = FUNC_0(VAR_2, &VAR_5, &VAR_10);
    uint8_t* const VAR_12 = VAR_9->rgba + VAR_11 * VAR_9->stride;
    uint8_t* const VAR_13 = VAR_12 + (VAR_8 ? 0 : 3);
    const int VAR_14 = FUNC_2(VAR_5, VAR_2->width, VAR_6,
                                            VAR_10, VAR_13, VAR_9->stride);
    (void)VAR_4;
    FUNC_4(VAR_4 == VAR_10);

    if (VAR_14 && FUNC_3(VAR_7)) {
      FUNC_1(VAR_12, VAR_8,
                             VAR_6, VAR_10, VAR_9->stride);
    }
  }
  return 0;
}
