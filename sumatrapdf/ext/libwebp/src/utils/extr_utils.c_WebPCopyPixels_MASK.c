
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int width; scalar_t__ height; int argb_stride; scalar_t__ argb; scalar_t__ use_argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int *,int,int *,int,int,scalar_t__) ;
 int FUNC_1 (int) ;

void FUNC_2(const WebPPicture* const VAR_0, WebPPicture* const VAR_1) {
  FUNC_1(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));
  FUNC_1(VAR_0->width == VAR_1->width && VAR_0->height == VAR_1->height);
  FUNC_1(VAR_0->use_argb && VAR_1->use_argb);
  FUNC_0((uint8_t*)VAR_0->argb, 4 * VAR_0->argb_stride, (uint8_t*)VAR_1->argb,
                4 * VAR_1->argb_stride, 4 * VAR_0->width, VAR_0->height);
}
