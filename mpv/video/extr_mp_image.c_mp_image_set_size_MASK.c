
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int h; } ;
struct mp_image {int w; int h; TYPE_1__ params; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct mp_image *VAR_0, int VAR_1, int VAR_2)
{
    FUNC_0(VAR_1 >= 0 && VAR_2 >= 0);
    VAR_0->w = VAR_0->params.w = VAR_1;
    VAR_0->h = VAR_0->params.h = VAR_2;
}
