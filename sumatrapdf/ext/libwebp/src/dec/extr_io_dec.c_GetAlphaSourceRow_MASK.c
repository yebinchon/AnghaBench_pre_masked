
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int mb_y; int mb_h; scalar_t__ crop_top; scalar_t__ crop_bottom; int width; scalar_t__ fancy_upsampling; } ;
typedef TYPE_1__ VP8Io ;



__attribute__((used)) static int FUNC_0(const VP8Io* const VAR_0,
                             const uint8_t** VAR_1, int* const VAR_2) {
  int VAR_3 = VAR_0->mb_y;
  *VAR_2 = VAR_0->mb_h;



  if (VAR_0->fancy_upsampling) {
    if (VAR_3 == 0) {

      --*VAR_2;
    } else {
      --VAR_3;



      *VAR_1 -= VAR_0->width;
    }
    if (VAR_0->crop_top + VAR_0->mb_y + VAR_0->mb_h == VAR_0->crop_bottom) {

      *VAR_2 = VAR_0->crop_bottom - VAR_0->crop_top - VAR_3;
    }
  }
  return VAR_3;
}
