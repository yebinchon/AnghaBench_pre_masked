
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int WebPRescaler ;
struct TYPE_7__ {int * const scaler_v; int * const scaler_u; TYPE_1__* output; int * scaler_y; } ;
typedef TYPE_2__ WebPDecParams ;
struct TYPE_8__ {int mb_h; int uv_stride; scalar_t__ v; scalar_t__ u; int y_stride; scalar_t__ y; int mb_w; int width; int * a; } ;
typedef TYPE_3__ VP8Io ;
struct TYPE_6__ {int colorspace; } ;


 int FUNC_0 (scalar_t__,int ,int const,int * const) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int const,int ) ;

__attribute__((used)) static int FUNC_3(const VP8Io* const VAR_0, WebPDecParams* const VAR_1) {
  const int VAR_2 = VAR_0->mb_h;
  const int VAR_3 = (VAR_2 + 1) >> 1;
  WebPRescaler* const VAR_4 = VAR_1->scaler_y;
  int VAR_5 = 0;
  if (FUNC_1(VAR_1->output->colorspace) && VAR_0->a != ((void*)0)) {




    FUNC_2((uint8_t*)VAR_0->y, VAR_0->y_stride,
                 VAR_0->a, VAR_0->width, VAR_0->mb_w, VAR_2, 0);
  }
  VAR_5 = FUNC_0(VAR_0->y, VAR_0->y_stride, VAR_2, VAR_4);
  FUNC_0(VAR_0->u, VAR_0->uv_stride, VAR_3, VAR_1->scaler_u);
  FUNC_0(VAR_0->v, VAR_0->uv_stride, VAR_3, VAR_1->scaler_v);
  return VAR_5;
}
