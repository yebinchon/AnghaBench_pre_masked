
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef int const uint64_t ;
typedef int uint32_t ;
typedef int const rescaler_t ;
struct TYPE_4__ {unsigned int* dst; int* irow; int dst_width; int num_channels; int* frow; int y_expand; scalar_t__ y_sub; int fy_scale; int y_accum; } ;
typedef TYPE_1__ WebPRescaler ;


 scalar_t__ FUNC_0 (int const,int ) ;
 int const VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_2 (TYPE_1__* const) ;
 int FUNC_3 (int) ;

void FUNC_4(WebPRescaler* const VAR_3) {
  int VAR_4;
  uint8_t* const VAR_5 = VAR_3->dst;
  rescaler_t* const VAR_6 = VAR_3->irow;
  const int VAR_7 = VAR_3->dst_width * VAR_3->num_channels;
  const rescaler_t* const VAR_8 = VAR_3->frow;
  FUNC_3(!FUNC_2(VAR_3));
  FUNC_3(VAR_3->y_accum <= 0);
  FUNC_3(VAR_3->y_expand);
  FUNC_3(VAR_3->y_sub != 0);
  if (VAR_3->y_accum == 0) {
    for (VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4) {
      const uint32_t VAR_9 = VAR_8[VAR_4];
      const int VAR_10 = (int)FUNC_0(VAR_9, VAR_3->fy_scale);
      VAR_5[VAR_4] = (VAR_10 > 255) ? 255u : (uint8_t)VAR_10;
    }
  } else {
    const uint32_t VAR_11 = FUNC_1(-VAR_3->y_accum, VAR_3->y_sub);
    const uint32_t VAR_12 = (uint32_t)(VAR_1 - VAR_11);
    for (VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4) {
      const uint64_t VAR_13 = (uint64_t)VAR_12 * VAR_8[VAR_4]
                       + (uint64_t)VAR_11 * VAR_6[VAR_4];
      const uint32_t VAR_14 = (uint32_t)((VAR_13 + VAR_0) >> VAR_2);
      const int VAR_15 = (int)FUNC_0(VAR_14, VAR_3->fy_scale);
      VAR_5[VAR_4] = (VAR_15 > 255) ? 255u : (uint8_t)VAR_15;
    }
  }
}
