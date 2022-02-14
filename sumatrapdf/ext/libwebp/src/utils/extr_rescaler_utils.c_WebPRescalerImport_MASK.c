
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ rescaler_t ;
struct TYPE_5__ {int num_channels; int dst_width; scalar_t__ y_sub; int y_accum; int src_y; scalar_t__* frow; scalar_t__* irow; scalar_t__ y_expand; } ;
typedef TYPE_1__ WebPRescaler ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const,int const*) ;

int FUNC_2(WebPRescaler* const VAR_0, int VAR_1,
                       const uint8_t* VAR_2, int VAR_3) {
  int VAR_4 = 0;
  while (VAR_4 < VAR_1 && !FUNC_0(VAR_0)) {
    if (VAR_0->y_expand) {
      rescaler_t* const VAR_5 = VAR_0->irow;
      VAR_0->irow = VAR_0->frow;
      VAR_0->frow = VAR_5;
    }
    FUNC_1(VAR_0, VAR_2);
    if (!VAR_0->y_expand) {
      int VAR_6;
      for (VAR_6 = 0; VAR_6 < VAR_0->num_channels * VAR_0->dst_width; ++VAR_6) {
        VAR_0->irow[VAR_6] += VAR_0->frow[VAR_6];
      }
    }
    ++VAR_0->src_y;
    VAR_2 += VAR_3;
    ++VAR_4;
    VAR_0->y_accum -= VAR_0->y_sub;
  }
  return VAR_4;
}
