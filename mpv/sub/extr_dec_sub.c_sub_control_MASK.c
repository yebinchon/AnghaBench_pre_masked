
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dec_sub {double video_fps; int lock; TYPE_2__* sd; } ;
typedef enum sd_ctrl { ____Placeholder_sd_ctrl } sd_ctrl ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* control ) (TYPE_2__*,int,double*) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 double FUNC_2 (struct dec_sub*,double) ;
 double FUNC_3 (struct dec_sub*,double) ;
 int FUNC_4 (TYPE_2__*,int,double*) ;
 int FUNC_5 (TYPE_2__*,int,void*) ;
 int FUNC_6 (struct dec_sub*) ;

int FUNC_7(struct dec_sub *VAR_2, enum sd_ctrl VAR_3, void *VAR_4)
{
    int VAR_5 = VAR_1;
    FUNC_0(&VAR_2->lock);
    switch (VAR_3) {
    case 129:
        VAR_2->video_fps = *(double *)VAR_4;
        FUNC_6(VAR_2);
        break;
    case 128: {
        double *VAR_6 = VAR_4;
        double VAR_7[2] = {VAR_6[0], VAR_6[1]};
        VAR_7[0] = FUNC_3(VAR_2, VAR_7[0]);
        if (VAR_2->sd->driver->control)
            VAR_5 = VAR_2->sd->driver->control(VAR_2->sd, VAR_3, VAR_7);
        if (VAR_5 == VAR_0)
            VAR_6[0] = FUNC_2(VAR_2, VAR_7[0]);
        break;
    }
    default:
        if (VAR_2->sd->driver->control)
            VAR_5 = VAR_2->sd->driver->control(VAR_2->sd, VAR_3, VAR_4);
    }
    FUNC_1(&VAR_2->lock);
    return VAR_5;
}
