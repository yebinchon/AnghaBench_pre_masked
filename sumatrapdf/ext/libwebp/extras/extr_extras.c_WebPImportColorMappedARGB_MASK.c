
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int width; int use_argb; int height; int argb_stride; int * argb; } ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

int FUNC_3(const uint8_t* VAR_1, int VAR_2,
                              const uint32_t VAR_3[], int VAR_4,
                              WebPPicture* VAR_5) {
  int VAR_6, VAR_7;
  uint32_t* VAR_8;

  FUNC_2(VAR_0 <= 256);
  if (VAR_5 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 < VAR_5->width ||
      VAR_3 == ((void*)0) || VAR_4 > VAR_0 || VAR_4 <= 0) {
    return 0;
  }
  VAR_5->use_argb = 1;
  if (!FUNC_0(VAR_5)) return 0;
  VAR_8 = VAR_5->argb;
  for (VAR_7 = 0; VAR_7 < VAR_5->height; ++VAR_7) {
    for (VAR_6 = 0; VAR_6 < VAR_5->width; ++VAR_6) {

      if (VAR_1[VAR_6] >= VAR_4) {
        FUNC_1(VAR_5);
        return 0;
      }
      VAR_8[VAR_6] = VAR_3[VAR_1[VAR_6]];
    }
    VAR_1 += VAR_2;
    VAR_8 += VAR_5->argb_stride;
  }
  return 1;
}
