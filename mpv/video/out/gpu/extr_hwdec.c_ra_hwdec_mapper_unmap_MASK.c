
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {int src; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* unmap ) (struct ra_hwdec_mapper*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ra_hwdec_mapper*) ;

void FUNC_2(struct ra_hwdec_mapper *VAR_0)
{
    if (VAR_0->driver->unmap)
        VAR_0->driver->unmap(VAR_0);
    FUNC_0(&VAR_0->src);
}
