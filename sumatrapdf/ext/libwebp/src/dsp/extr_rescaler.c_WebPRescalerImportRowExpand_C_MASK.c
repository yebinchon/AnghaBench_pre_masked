
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int num_channels; int dst_width; int x_expand; int x_add; int src_width; int* frow; scalar_t__ x_sub; } ;
typedef TYPE_1__ WebPRescaler ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int) ;

void FUNC_2(WebPRescaler* const VAR_0,
                                   const uint8_t* VAR_1) {
  const int VAR_2 = VAR_0->num_channels;
  const int VAR_3 = VAR_0->dst_width * VAR_0->num_channels;
  int VAR_4;
  FUNC_1(!FUNC_0(VAR_0));
  FUNC_1(VAR_0->x_expand);
  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    int VAR_5 = VAR_4;
    int VAR_6 = VAR_4;

    int VAR_7 = VAR_0->x_add;
    int VAR_8 = VAR_1[VAR_5];
    int VAR_9 = (VAR_0->src_width > 1) ? VAR_1[VAR_5 + VAR_2] : VAR_8;
    VAR_5 += VAR_2;
    while (1) {
      VAR_0->frow[VAR_6] = VAR_9 * VAR_0->x_add + (VAR_8 - VAR_9) * VAR_7;
      VAR_6 += VAR_2;
      if (VAR_6 >= VAR_3) break;
      VAR_7 -= VAR_0->x_sub;
      if (VAR_7 < 0) {
        VAR_8 = VAR_9;
        VAR_5 += VAR_2;
        FUNC_1(VAR_5 < VAR_0->src_width * VAR_2);
        VAR_9 = VAR_1[VAR_5];
        VAR_7 += VAR_0->x_add;
      }
    }
    FUNC_1(VAR_0->x_sub == 0 || VAR_7 == 0);
  }
}
