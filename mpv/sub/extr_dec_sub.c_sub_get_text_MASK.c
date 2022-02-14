
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dec_sub {double last_vo_pts; int lock; TYPE_2__* sd; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {char* (* get_text ) (TYPE_2__*,double) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 double FUNC_2 (struct dec_sub*,double) ;
 char* FUNC_3 (TYPE_2__*,double) ;
 int FUNC_4 (struct dec_sub*) ;

char *FUNC_5(struct dec_sub *VAR_0, double VAR_1)
{
    FUNC_0(&VAR_0->lock);
    char *VAR_2 = ((void*)0);

    VAR_1 = FUNC_2(VAR_0, VAR_1);

    VAR_0->last_vo_pts = VAR_1;
    FUNC_4(VAR_0);

    if (VAR_0->sd->driver->get_text)
        VAR_2 = VAR_0->sd->driver->get_text(VAR_0->sd, VAR_1);
    FUNC_1(&VAR_0->lock);
    return VAR_2;
}
