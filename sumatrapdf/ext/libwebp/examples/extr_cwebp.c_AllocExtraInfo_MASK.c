
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int width; int height; int * extra_info; } ;
typedef TYPE_1__ WebPPicture ;


 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(WebPPicture* const VAR_0) {
  const int VAR_1 = (VAR_0->width + 15) / 16;
  const int VAR_2 = (VAR_0->height + 15) / 16;
  VAR_0->extra_info =
      (uint8_t*)FUNC_0(VAR_1 * VAR_2 * sizeof(*VAR_0->extra_info));
}
