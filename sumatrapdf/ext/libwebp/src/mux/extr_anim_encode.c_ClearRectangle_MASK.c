
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int argb_stride; int * argb; } ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(WebPPicture* const VAR_1,
                           int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  int VAR_6;
  for (VAR_6 = VAR_3; VAR_6 < VAR_3 + VAR_5; ++VAR_6) {
    uint32_t* const VAR_7 = VAR_1->argb + VAR_6 * VAR_1->argb_stride;
    int VAR_8;
    for (VAR_8 = VAR_2; VAR_8 < VAR_2 + VAR_4; ++VAR_8) {
      VAR_7[VAR_8] = VAR_0;
    }
  }
}
