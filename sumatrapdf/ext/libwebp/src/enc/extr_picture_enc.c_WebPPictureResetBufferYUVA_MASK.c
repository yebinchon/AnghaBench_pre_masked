
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ a_stride; scalar_t__ uv_stride; scalar_t__ y_stride; int * a; int v; int u; int y; int * memory_; } ;
typedef TYPE_1__ WebPPicture ;



__attribute__((used)) static void FUNC_0(WebPPicture* const VAR_0) {
  VAR_0->memory_ = ((void*)0);
  VAR_0->y = VAR_0->u = VAR_0->v = *(VAR_0->a = ((void*)0));
  VAR_0->y_stride = VAR_0->uv_stride = 0;
  VAR_0->a_stride = 0;
}
