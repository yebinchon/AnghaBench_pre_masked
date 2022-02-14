
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int argb_stride; int height; int width; int * argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (int *,int,int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(WebPPicture* const VAR_0, int VAR_1) {
  FUNC_1(VAR_0->argb != ((void*)0));
  FUNC_0((uint8_t*)VAR_0->argb, VAR_0->argb_stride * sizeof(*VAR_0->argb),
                   VAR_0->width, VAR_0->height, VAR_1);
}
