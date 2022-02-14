
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {TYPE_2__* in; TYPE_1__* driver; } ;
struct mp_image {int dummy; } ;
struct TYPE_4__ {scalar_t__ dr_helper; } ;
struct TYPE_3__ {struct mp_image* (* get_image_ts ) (struct vo*,int,int,int,int) ;} ;


 struct mp_image* FUNC_0 (scalar_t__,int,int,int,int) ;
 struct mp_image* FUNC_1 (struct vo*,int,int,int,int) ;

struct mp_image *FUNC_2(struct vo *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                              int VAR_4)
{
    if (VAR_0->driver->get_image_ts)
        return VAR_0->driver->get_image_ts(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_0->in->dr_helper)
        return FUNC_0(VAR_0->in->dr_helper, VAR_1, VAR_2, VAR_3, VAR_4);
    return ((void*)0);
}
