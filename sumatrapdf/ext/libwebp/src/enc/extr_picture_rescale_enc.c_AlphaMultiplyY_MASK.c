
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int a_stride; int * a; int y_stride; int y; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int ,int ,int *,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(WebPPicture* const VAR_0, int VAR_1) {
  if (VAR_0->a != ((void*)0)) {
    FUNC_0(VAR_0->y, VAR_0->y_stride, VAR_0->a, VAR_0->a_stride,
                 VAR_0->width, VAR_0->height, VAR_1);
  }
}
