
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int rescaler_t ;
struct TYPE_4__ {int num_channels; int dst_width; int x_sub; int const src_width; int* frow; int fx_scale; scalar_t__ x_add; int x_expand; } ;
typedef TYPE_1__ WebPRescaler ;


 scalar_t__ FUNC_0 (int const,int ) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (int) ;

void FUNC_3(WebPRescaler* const VAR_0,
                                   const uint8_t* VAR_1) {
  const int VAR_2 = VAR_0->num_channels;
  const int VAR_3 = VAR_0->dst_width * VAR_0->num_channels;
  int VAR_4;
  FUNC_2(!FUNC_1(VAR_0));
  FUNC_2(!VAR_0->x_expand);
  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    int VAR_5 = VAR_4;
    int VAR_6 = VAR_4;
    uint32_t VAR_7 = 0;
    int VAR_8 = 0;
    while (VAR_6 < VAR_3) {
      uint32_t VAR_9 = 0;
      VAR_8 += VAR_0->x_add;
      while (VAR_8 > 0) {
        VAR_8 -= VAR_0->x_sub;
        FUNC_2(VAR_5 < VAR_0->src_width * VAR_2);
        VAR_9 = VAR_1[VAR_5];
        VAR_7 += VAR_9;
        VAR_5 += VAR_2;
      }
      {
        const rescaler_t VAR_10 = VAR_9 * (-VAR_8);
        VAR_0->frow[VAR_6] = VAR_7 * VAR_0->x_sub - VAR_10;

        VAR_7 = (int)FUNC_0(VAR_10, VAR_0->fx_scale);
      }
      VAR_6 += VAR_2;
    }
    FUNC_2(VAR_8 == 0);
  }
}
