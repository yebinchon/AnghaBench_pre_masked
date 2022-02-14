
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int height; int* argb; int argb_stride; int width; int use_argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(WebPPicture* const VAR_0) {
  int VAR_1, VAR_2;
  FUNC_0(VAR_0 != ((void*)0));
  FUNC_0(VAR_0->use_argb);
  for (VAR_2 = 0; VAR_2 < VAR_0->height; ++VAR_2) {
    uint32_t* const VAR_3 = &VAR_0->argb[VAR_2 * VAR_0->argb_stride];
    for (VAR_1 = 0; VAR_1 < VAR_0->width; ++VAR_1) {
      const uint32_t VAR_4 = VAR_3[VAR_1];
      const uint32_t VAR_5 = (VAR_4 >> 16) & 0xff;
      const uint32_t VAR_6 = (VAR_4 >> 8) & 0xff;
      const uint32_t VAR_7 = (VAR_4 >> 0) & 0xff;

      const uint32_t VAR_8 = (uint32_t)(0.2126 * VAR_5 + 0.7152 * VAR_6 + 0.0722 * VAR_7 + .5);
      VAR_3[VAR_1] = (VAR_4 & 0xff000000u) | (VAR_8 * 0x010101u);
    }
  }
}
