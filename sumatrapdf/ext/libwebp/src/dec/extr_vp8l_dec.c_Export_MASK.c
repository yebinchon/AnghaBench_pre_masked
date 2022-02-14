
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int dst_width; scalar_t__ dst; } ;
typedef TYPE_1__ WebPRescaler ;
typedef int WEBP_CSP_MODE ;


 int FUNC_0 (int * const,int const,int ,int * const) ;
 int FUNC_1 (int * const,int const,int) ;
 int FUNC_2 (TYPE_1__* const) ;
 scalar_t__ FUNC_3 (TYPE_1__* const) ;

__attribute__((used)) static int FUNC_4(WebPRescaler* const VAR_0, WEBP_CSP_MODE VAR_1,
                  int VAR_2, uint8_t* const VAR_3) {
  uint32_t* const VAR_4 = (uint32_t*)VAR_0->dst;
  const int VAR_5 = VAR_0->dst_width;
  int VAR_6 = 0;
  while (FUNC_3(VAR_0)) {
    uint8_t* const VAR_7 = VAR_3 + VAR_6 * VAR_2;
    FUNC_2(VAR_0);
    FUNC_1(VAR_4, VAR_5, 1);
    FUNC_0(VAR_4, VAR_5, VAR_1, VAR_7);
    ++VAR_6;
  }
  return VAR_6;
}
