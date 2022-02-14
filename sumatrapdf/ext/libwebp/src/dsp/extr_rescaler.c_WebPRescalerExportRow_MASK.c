
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ y_accum; scalar_t__ src_height; scalar_t__ dst_height; int x_add; int src_width; int dst_width; int num_channels; scalar_t__ y_add; int dst_y; scalar_t__ dst_stride; scalar_t__* dst; scalar_t__* irow; scalar_t__ fxy_scale; scalar_t__ y_expand; } ;
typedef TYPE_1__ WebPRescaler ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int) ;

void FUNC_4(WebPRescaler* const VAR_0) {
  if (VAR_0->y_accum <= 0) {
    FUNC_3(!FUNC_2(VAR_0));
    if (VAR_0->y_expand) {
      FUNC_0(VAR_0);
    } else if (VAR_0->fxy_scale) {
      FUNC_1(VAR_0);
    } else {
      int VAR_1;
      FUNC_3(VAR_0->src_height == VAR_0->dst_height && VAR_0->x_add == 1);
      FUNC_3(VAR_0->src_width == 1 && VAR_0->dst_width <= 2);
      for (VAR_1 = 0; VAR_1 < VAR_0->num_channels * VAR_0->dst_width; ++VAR_1) {
        VAR_0->dst[VAR_1] = VAR_0->irow[VAR_1];
        VAR_0->irow[VAR_1] = 0;
      }
    }
    VAR_0->y_accum += VAR_0->y_add;
    VAR_0->dst += VAR_0->dst_stride;
    ++VAR_0->dst_y;
  }
}
