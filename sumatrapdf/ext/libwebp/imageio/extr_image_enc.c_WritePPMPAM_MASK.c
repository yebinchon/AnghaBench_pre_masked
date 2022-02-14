
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int stride; int * rgba; } ;
struct TYPE_6__ {TYPE_1__ RGBA; } ;
struct TYPE_7__ {int width; int height; TYPE_2__ u; } ;
typedef TYPE_3__ WebPDecBuffer ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int const,int const) ;
 size_t const FUNC_1 (int const*,int const,size_t const,int *) ;

__attribute__((used)) static int FUNC_2(FILE* VAR_0, const WebPDecBuffer* const VAR_1,
                       int VAR_2) {
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
    return 0;
  } else {
    const uint32_t VAR_3 = VAR_1->width;
    const uint32_t VAR_4 = VAR_1->height;
    const uint8_t* VAR_5 = VAR_1->u.RGBA.rgba;
    const int VAR_6 = VAR_1->u.RGBA.stride;
    const size_t VAR_7 = VAR_2 ? 4 : 3;
    uint32_t VAR_8;

    if (VAR_5 == ((void*)0)) return 0;

    if (VAR_2) {
      FUNC_0(VAR_0, "P7\nWIDTH %u\nHEIGHT %u\nDEPTH 4\nMAXVAL 255\n"
                    "TUPLTYPE RGB_ALPHA\nENDHDR\n", VAR_3, VAR_4);
    } else {
      FUNC_0(VAR_0, "P6\n%u %u\n255\n", VAR_3, VAR_4);
    }
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
      if (FUNC_1(VAR_5, VAR_3, VAR_7, VAR_0) != VAR_7) {
        return 0;
      }
      VAR_5 += VAR_6;
    }
  }
  return 1;
}
