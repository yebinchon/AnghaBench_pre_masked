
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_argb; } ;
typedef TYPE_1__ WebPPicture ;



__attribute__((used)) static void FUNC_0(const WebPPicture* const VAR_0,
                                int* const VAR_1, int* const VAR_2) {
  if (!VAR_0->use_argb) {
    *VAR_1 &= ~1;
    *VAR_2 &= ~1;
  }
}
