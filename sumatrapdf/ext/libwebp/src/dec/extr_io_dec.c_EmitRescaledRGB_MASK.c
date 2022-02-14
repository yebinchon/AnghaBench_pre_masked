
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ last_y; int scaler_v; int scaler_u; int scaler_y; } ;
typedef TYPE_1__ WebPDecParams ;
struct TYPE_7__ {int mb_h; int y_stride; int uv_stride; scalar_t__ v; scalar_t__ u; scalar_t__ y; } ;
typedef TYPE_2__ VP8Io ;


 scalar_t__ FUNC_0 (TYPE_1__* const,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,int const,scalar_t__,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const VP8Io* const VAR_0, WebPDecParams* const VAR_1) {
  const int VAR_2 = VAR_0->mb_h;
  const int VAR_3 = (VAR_2 + 1) >> 1;
  int VAR_4 = 0, VAR_5 = 0;
  int VAR_6 = 0;
  while (VAR_4 < VAR_2) {
    const int VAR_7 =
        FUNC_2(VAR_1->scaler_y, VAR_2 - VAR_4,
                           VAR_0->y + VAR_4 * VAR_0->y_stride, VAR_0->y_stride);
    VAR_4 += VAR_7;
    if (FUNC_1(VAR_1->scaler_u, VAR_3 - VAR_5)) {
      const int VAR_8 =
          FUNC_2(VAR_1->scaler_u, VAR_3 - VAR_5,
                             VAR_0->u + VAR_5 * VAR_0->uv_stride, VAR_0->uv_stride);
      const int VAR_9 =
          FUNC_2(VAR_1->scaler_v, VAR_3 - VAR_5,
                             VAR_0->v + VAR_5 * VAR_0->uv_stride, VAR_0->uv_stride);
      (void)VAR_9;
      FUNC_3(VAR_8 == VAR_9);
      VAR_5 += VAR_8;
    }
    VAR_6 += FUNC_0(VAR_1, VAR_1->last_y + VAR_6);
  }
  return VAR_6;
}
