
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* uninit ) (struct ra_hwdec_mapper*) ;} ;


 int FUNC_0 (struct ra_hwdec_mapper*) ;
 int FUNC_1 (struct ra_hwdec_mapper*) ;
 int FUNC_2 (struct ra_hwdec_mapper*) ;

void FUNC_3(struct ra_hwdec_mapper **VAR_0)
{
    struct ra_hwdec_mapper *VAR_1 = *VAR_0;
    if (VAR_1) {
        FUNC_0(VAR_1);
        VAR_1->driver->uninit(VAR_1);
        FUNC_2(VAR_1);
    }
    *VAR_0 = ((void*)0);
}
