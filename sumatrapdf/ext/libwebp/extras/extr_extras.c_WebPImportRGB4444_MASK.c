
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int use_argb; int* argb; int height; int width; int argb_stride; int colorspace; } ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(const uint8_t* VAR_1, WebPPicture* VAR_2) {
  int VAR_3, VAR_4;
  uint32_t* VAR_5;
  if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0)) return 0;
  VAR_2->colorspace = VAR_0;
  VAR_2->use_argb = 1;
  if (!FUNC_0(VAR_2)) return 0;
  VAR_5 = VAR_2->argb;
  for (VAR_4 = 0; VAR_4 < VAR_2->height; ++VAR_4) {
    const int VAR_6 = VAR_2->width;
    for (VAR_3 = 0; VAR_3 < VAR_6; ++VAR_3) {




      const uint32_t VAR_7 = VAR_1[2 * VAR_3 + 0];
      const uint32_t VAR_8 = VAR_1[2 * VAR_3 + 1];

      uint32_t VAR_9 = VAR_7 & 0xf0;
      uint32_t VAR_10 = (VAR_7 << 4);
      uint32_t VAR_11 = (VAR_8 & 0xf0);
      uint32_t VAR_12 = (VAR_8 << 4);

      VAR_9 = VAR_9 | (VAR_9 >> 4);
      VAR_10 = VAR_10 | (VAR_10 >> 4);
      VAR_11 = VAR_11 | (VAR_11 >> 4);
      VAR_12 = VAR_12 | (VAR_12 >> 4);
      VAR_5[VAR_3] = (VAR_12 << 24) | (VAR_9 << 16) | (VAR_10 << 8) | VAR_11;
    }
    VAR_1 += 2 * VAR_6;
    VAR_5 += VAR_2->argb_stride;
  }
  return 1;
}
