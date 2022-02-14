
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
struct TYPE_10__ {int a_stride; int * a; } ;
typedef TYPE_3__ WebPYUVABuffer ;
struct TYPE_11__ {TYPE_2__* output; } ;
typedef TYPE_4__ WebPDecParams ;
struct TYPE_12__ {int mb_w; int mb_h; int mb_y; int width; int * a; } ;
typedef TYPE_5__ VP8Io ;
struct TYPE_8__ {TYPE_3__ YUVA; } ;
struct TYPE_9__ {TYPE_1__ u; } ;


 int FUNC_0 (int *,int const,int const,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int const) ;

__attribute__((used)) static int FUNC_3(const VP8Io* const VAR_0, WebPDecParams* const VAR_1,
                        int VAR_2) {
  const uint8_t* VAR_3 = VAR_0->a;
  const WebPYUVABuffer* const VAR_4 = &VAR_1->output->u.YUVA;
  const int VAR_5 = VAR_0->mb_w;
  const int VAR_6 = VAR_0->mb_h;
  uint8_t* VAR_7 = VAR_4->a + VAR_0->mb_y * VAR_4->a_stride;
  int VAR_8;
  (void)VAR_2;
  FUNC_1(VAR_2 == VAR_6);
  if (VAR_3 != ((void*)0)) {
    for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
      FUNC_2(VAR_7, VAR_3, VAR_5 * sizeof(*VAR_7));
      VAR_3 += VAR_0->width;
      VAR_7 += VAR_4->a_stride;
    }
  } else if (VAR_4->a != ((void*)0)) {

    FUNC_0(VAR_7, VAR_5, VAR_6, VAR_4->a_stride);
  }
  return 0;
}
