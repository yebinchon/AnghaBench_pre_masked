
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int crop_left; int crop_right; int crop_bottom; int crop_top; int mb_y; int mb_w; int mb_h; } ;
typedef TYPE_1__ VP8Io ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(VP8Io* const VAR_0, int VAR_1, int VAR_2,
                         uint8_t** const VAR_3, int VAR_4) {
  FUNC_0(VAR_1 < VAR_2);
  FUNC_0(VAR_0->crop_left < VAR_0->crop_right);
  if (VAR_2 > VAR_0->crop_bottom) {
    VAR_2 = VAR_0->crop_bottom;
  }
  if (VAR_1 < VAR_0->crop_top) {
    const int VAR_5 = VAR_0->crop_top - VAR_1;
    VAR_1 = VAR_0->crop_top;
    *VAR_3 += VAR_5 * VAR_4;
  }
  if (VAR_1 >= VAR_2) return 0;

  *VAR_3 += VAR_0->crop_left * sizeof(uint32_t);

  VAR_0->mb_y = VAR_1 - VAR_0->crop_top;
  VAR_0->mb_w = VAR_0->crop_right - VAR_0->crop_left;
  VAR_0->mb_h = VAR_2 - VAR_1;
  return 1;
}
