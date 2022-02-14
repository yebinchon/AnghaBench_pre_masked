
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd_times {int end; int start; } ;
struct dec_sub {double last_vo_pts; int lock; TYPE_2__* sd; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {struct sd_times (* get_times ) (TYPE_2__*,double) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 double FUNC_2 (struct dec_sub*,double) ;
 struct sd_times FUNC_3 (TYPE_2__*,double) ;
 int FUNC_4 (struct dec_sub*) ;

struct sd_times FUNC_5(struct dec_sub *VAR_1, double VAR_2)
{
    FUNC_0(&VAR_1->lock);
    struct sd_times VAR_3 = { .start = VAR_0, .end = VAR_0 };

    VAR_2 = FUNC_2(VAR_1, VAR_2);

    VAR_1->last_vo_pts = VAR_2;
    FUNC_4(VAR_1);

    if (VAR_1->sd->driver->get_times)
        VAR_3 = VAR_1->sd->driver->get_times(VAR_1->sd, VAR_2);

    FUNC_1(&VAR_1->lock);
    return VAR_3;
}
