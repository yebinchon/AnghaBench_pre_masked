
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* uninit ) (struct ra_hwdec*) ;} ;


 int FUNC_0 (struct ra_hwdec*) ;
 int FUNC_1 (struct ra_hwdec*) ;

void FUNC_2(struct ra_hwdec *VAR_0)
{
    if (VAR_0)
        VAR_0->driver->uninit(VAR_0);
    FUNC_1(VAR_0);
}
