
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int a_stride; int * a; } ;
struct TYPE_6__ {TYPE_1__ YUVA; } ;
struct TYPE_7__ {int width; int height; TYPE_2__ u; } ;
typedef TYPE_3__ WebPDecBuffer ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int const,int const) ;
 int FUNC_1 (int const*,int const,int,int *) ;

int FUNC_2(FILE* VAR_0, const WebPDecBuffer* const VAR_1) {
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
    return 0;
  } else {
    const uint32_t VAR_2 = VAR_1->width;
    const uint32_t VAR_3 = VAR_1->height;
    const uint8_t* VAR_4 = VAR_1->u.YUVA.a;
    const int VAR_5 = VAR_1->u.YUVA.a_stride;
    uint32_t VAR_6;

    if (VAR_4 == ((void*)0)) return 0;

    FUNC_0(VAR_0, "P5\n%u %u\n255\n", VAR_2, VAR_3);
    for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
      if (FUNC_1(VAR_4, VAR_2, 1, VAR_0) != 1) return 0;
      VAR_4 += VAR_5;
    }
    return 1;
  }
}
