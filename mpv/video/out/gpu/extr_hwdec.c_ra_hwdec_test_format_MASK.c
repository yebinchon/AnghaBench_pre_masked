
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec {TYPE_1__* driver; } ;
struct TYPE_2__ {int* imgfmts; } ;



bool FUNC_0(struct ra_hwdec *VAR_0, int VAR_1)
{
    for (int VAR_2 = 0; VAR_0->driver->imgfmts[VAR_2]; VAR_2++) {
        if (VAR_0->driver->imgfmts[VAR_2] == VAR_1)
            return 1;
    }
    return 0;
}
