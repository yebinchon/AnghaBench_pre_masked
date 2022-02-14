
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
 int const FUNC_1 (int const*,int const,int const,int *) ;

int FUNC_2(FILE* VAR_0, const WebPDecBuffer* const VAR_1) {
  const uint32_t VAR_2 = VAR_1->width;
  const uint32_t VAR_3 = VAR_1->height;
  const uint8_t* VAR_4 = VAR_1->u.RGBA.rgba;
  const int VAR_5 = VAR_1->u.RGBA.stride;
  const uint32_t VAR_6 = 2;
  uint32_t VAR_7;

  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_4 == ((void*)0)) return 0;

  FUNC_0(VAR_0, "P5\n%u %u\n255\n", VAR_2 * VAR_6, VAR_3);
  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
    if (FUNC_1(VAR_4, VAR_2, VAR_6, VAR_0) != VAR_6) {
      return 0;
    }
    VAR_4 += VAR_5;
  }
  return 1;
}
