
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; int use_argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (TYPE_1__*,int const,int const) ;
 int FUNC_1 (TYPE_1__*,int const,int const) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(WebPPicture* VAR_0) {
  if (VAR_0 != ((void*)0)) {
    const int VAR_1 = VAR_0->width;
    const int VAR_2 = VAR_0->height;

    FUNC_2(VAR_0);

    if (!VAR_0->use_argb) {
      return FUNC_1(VAR_0, VAR_1, VAR_2);
    } else {
      return FUNC_0(VAR_0, VAR_1, VAR_2);
    }
  }
  return 1;
}
