
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {TYPE_1__* driver; int src; } ;
struct mp_image {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* map ) (struct ra_hwdec_mapper*) ;} ;


 int FUNC_0 (int *,struct mp_image*) ;
 int FUNC_1 (struct ra_hwdec_mapper*) ;
 scalar_t__ FUNC_2 (struct ra_hwdec_mapper*) ;

int FUNC_3(struct ra_hwdec_mapper *VAR_0, struct mp_image *VAR_1)
{
    FUNC_1(VAR_0);
    FUNC_0(&VAR_0->src, VAR_1);
    if (VAR_0->driver->map(VAR_0) < 0) {
        FUNC_1(VAR_0);
        return -1;
    }
    return 0;
}
