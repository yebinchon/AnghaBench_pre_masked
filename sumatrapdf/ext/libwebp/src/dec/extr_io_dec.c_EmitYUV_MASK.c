
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
struct TYPE_9__ {int y_stride; int u_stride; int v_stride; int * v; int * u; int * y; } ;
typedef TYPE_2__ WebPYUVABuffer ;
struct TYPE_10__ {TYPE_4__* output; } ;
typedef TYPE_3__ WebPDecParams ;
struct TYPE_8__ {TYPE_2__ YUVA; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_4__ WebPDecBuffer ;
struct TYPE_12__ {int mb_y; int mb_w; int mb_h; int y_stride; int uv_stride; scalar_t__ v; scalar_t__ u; scalar_t__ y; } ;
typedef TYPE_5__ VP8Io ;


 int FUNC_0 (int * const,scalar_t__,int const) ;

__attribute__((used)) static int FUNC_1(const VP8Io* const VAR_0, WebPDecParams* const VAR_1) {
  WebPDecBuffer* VAR_2 = VAR_1->output;
  const WebPYUVABuffer* const VAR_3 = &VAR_2->u.YUVA;
  uint8_t* const VAR_4 = VAR_3->y + VAR_0->mb_y * VAR_3->y_stride;
  uint8_t* const VAR_5 = VAR_3->u + (VAR_0->mb_y >> 1) * VAR_3->u_stride;
  uint8_t* const VAR_6 = VAR_3->v + (VAR_0->mb_y >> 1) * VAR_3->v_stride;
  const int VAR_7 = VAR_0->mb_w;
  const int VAR_8 = VAR_0->mb_h;
  const int VAR_9 = (VAR_7 + 1) / 2;
  const int VAR_10 = (VAR_8 + 1) / 2;
  int VAR_11;
  for (VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11) {
    FUNC_0(VAR_4 + VAR_11 * VAR_3->y_stride, VAR_0->y + VAR_11 * VAR_0->y_stride, VAR_7);
  }
  for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11) {
    FUNC_0(VAR_5 + VAR_11 * VAR_3->u_stride, VAR_0->u + VAR_11 * VAR_0->uv_stride, VAR_9);
    FUNC_0(VAR_6 + VAR_11 * VAR_3->v_stride, VAR_0->v + VAR_11 * VAR_0->uv_stride, VAR_9);
  }
  return VAR_0->mb_h;
}
